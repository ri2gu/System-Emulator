/**************************************************************************
 * C S 429 system emulator
 * 
 * instr_Fetch.c - Fetch stage of instruction processing pipeline.
 **************************************************************************/ 

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "err_handler.h"
#include "instr.h"
#include "instr_pipeline.h"
#include "machine.h"
#include "hw_elts.h"

extern machine_t guest;
extern mem_status_t dmem_status;

extern uint64_t F_PC;
//Works from the F instructions out, and puts it to the D instruction's in 

/*
Steps
1) Feed current_PC into imem to get the instruction (get insnbits from this)
2) Stick insbits into the output pipeline register 
3) Extract the opcode (pull top 11 bits from the lookup table - if get error op, do the right thing for status)
4) 
*/


/*
 * Select PC logic.
 * STUDENT TO-DO:
 * Write the next PC to *current_PC.
 */
//have to make a prediction what the next PC is gonna, be fix wtv you did in predict_PC
static comb_logic_t 
select_PC(uint64_t pred_PC,                                     // The predicted PC
          opcode_t D_opcode, uint64_t val_a,                    // Possible correction from RET
          opcode_t M_opcode, bool M_cond_val, uint64_t seq_succ,// Possible correction from B.cond
          uint64_t *current_PC) {
    /* 
     * Students: Please leave this code
     * at the top of this function. 
     * You may modify below it. 
     */

    if (D_opcode == OP_RET && val_a == RET_FROM_MAIN_ADDR) {
        *current_PC = 0; // PC can't be 0 normally.
        return;
    }

    // Modify starting here.
    //if ret, change program counter to the val a 
    if(D_opcode == OP_RET){
        *current_PC = val_a; 
    }

    //send to seq successor if false but predicted true 
    else if(M_opcode == OP_B_COND && M_cond_val == false){
        *current_PC = seq_succ; //in the case that we're not taking the branch 
        //seq_succ = *current_PC + 8; 
    }

    //for ret pc takes val A
    else if(D_opcode == OP_RET){
        *current_PC = val_a; 
    }
    else if(M_opcode == OP_ERROR){
        *current_PC = seq_succ; 
    }
    else{
        *current_PC = pred_PC; 
    }

    return; 
}

/*
 * Predict PC logic. Conditional branches are predicted taken.
 * STUDENT TO-DO:
 * Write the predicted next PC to *predicted_PC
 * and the next sequential pc to *seq_succ.
 */

static comb_logic_t 
predict_PC(uint64_t current_PC, uint32_t insnbits, opcode_t op, 
           uint64_t *predicted_PC, uint64_t *seq_succ) {
    /* 
     * Students: Please leave this code
     * at the top of this function. 
     * You may modify below it. 
     */
    if (!current_PC) {
        return; // We use this to generate a halt instruction.
    }

    // Modify starting here.
    //PREDICTION: For returns, you're just gonna say PC + 4
    if(op == OP_RET){
        *predicted_PC = current_PC + 4; 
        //*seq_succ = current_PC + 4; 
    }

    else if(op == OP_B || op == OP_BL){
        //immediate is just the whole thing for these two
        uint64_t imm4 = 4 * bitfield_s64(insnbits, 0, 26); 
        *predicted_PC = current_PC + imm4; 
    }

    //PREDICTION: For conditional branches, predict that it's taken
    else if (op == OP_B_COND){ //find the offset with the chArm diagram 
        uint64_t immBits4 = 4 * bitfield_s64(insnbits, 5, 19); 
        *predicted_PC = current_PC + immBits4; 
        //*seq_succ = current_PC + 4; //compute in case of misprediction 
    }

    //GIRLLLL u forgot to account for dis one 
    // else if (op == OP_ERROR && X_condval == true){
    //     *predicted_PC = *seq_succ;  
    // }   
    else
    {
        // The updated values of predicted_PC and seq_succ are stored in the pointers passed as arguments to the function.
        *predicted_PC = current_PC + 4;
    }
    // If the operation is OP_ADRP, the seq_succ is modified to align the current PC with a 4KB page boundary by zeroing out the 12 least significant bits.
    if (op == OP_ADRP)
    {
        *seq_succ = current_PC & 0xfffffffffffff000;
    }
    else
    {
        *seq_succ = current_PC + 4;
    }

    return; 
}

/*
 * Helper function to recognize the aliased instructions:
 * LSL, LSR, CMP, and TST. We do this only to simplify the 
 * implementations of the shift operations (rather than having
 * to implement UBFM in full).
 */

static
void fix_instr_aliases(uint32_t insnbits, opcode_t *op) {
    // extract 11 bits used to determine the op code
    uint32_t top11bits = bitfield_u32(insnbits, 21, 11);

    // Just to clarify, would out->print_op get the original operator and 
    // out->op get the modified/alias instruction?
    // no its the other way around

    // aliased instruction (LSL & LSR share the same opcode)
    // shift based on if the OP == SUBS_RR
    if (itable[top11bits] == OP_SUBS_RR)
    {
        unsigned int switchVal = 31 & insnbits;
        if (switchVal == 31)
        {
            *op = OP_CMP_RR;
        }
    }
    //ands
    else if (itable[top11bits] == OP_ANDS_RR)
    {
        unsigned int switchVal = 31 & insnbits;
        //tst if shifting
        if (switchVal == 31)
        {
            *op = OP_TST_RR;
        }
    }
    else if (itable[top11bits] == OP_UBFM)
    {
        
        if (bitfield_u32(insnbits, 10, 5) != 31)
        {
            *op = OP_LSL;
        }
        else
        {
            *op = OP_LSR;
        }
    }

    return;
}

/*
 * Fetch stage logic.
 * STUDENT TO-DO:
 * Implement the fetch stage.
 * 
 * Use in as the input pipeline register,
 * and update the out pipeline register as output.
 * Additionally, update F_PC for the next
 * cycle's predicted PC.
 * 
 * You will also need the following helper functions:
 * select_pc, predict_pc, and imem.
 */

comb_logic_t fetch_instr(f_instr_impl_t *in, d_instr_impl_t *out) {
    bool imem_err;
    uint64_t current_PC; 
    //uint64_t pred_PC = current_PC + 4;


// You find the current_PC in the select_PC function. The parameter seq_succ in select_pc does not have anything to do with the currrent
//  cycles' seq_succ, but instead comes from B.cond in the Memory stage, as explained in the comments.
// select_PC(pred_PC, D_opcode, val_a, M_opcode, M_cond_val, seq_succ, *current_PC)
    //select_PC(in -> pred_PC, X_in -> op, X_in -> val_a, M_out -> op, M_out -> cond_holds, M_out -> seq_succ_PC, &current_PC);
    select_PC(in -> pred_PC, X_out -> op, X_out -> val_a, M_out -> op, M_out -> cond_holds, M_out -> seq_succ_PC, &current_PC);


    // what about instead of predict_PC, pred_PC from struct f_instr_impl
    // I messed that up, you use X_in for the D_op and D_vala

    /* 
     * Students: This case is for generating HLT instructions
     * to stop the pipeline. Only write your code in the **else** case. 
     */
    
    if (!current_PC) {
        out->insnbits = 0xD4400000U;
        out->op = OP_HLT;
        out->print_op = OP_HLT;
        imem_err = false;
    }
    else { //where you actually put the code 
        //with the instruction word, stick it into the output pipeline register for decode
        imem(current_PC, &out -> insnbits , &imem_err); // insnbits passed to decode, finds instruction bits  
        
        //checking immed after for error
        if(imem_err == true){
            out -> op = OP_ERROR;  
            out -> status = STAT_INS; 
        }

        else{
            uint32_t top11 = bitfield_u32(out->insnbits, 21, 11);
            fix_instr_aliases(out->insnbits, &itable[top11]);
            out -> op = itable[top11]; 
            out -> print_op = itable[top11]; 
            predict_PC(current_PC, out->insnbits, out -> op, &(F_PC), &(out->seq_succ_PC)); 

            //setting current to successor
            if(out -> op == OP_ADRP){
                out -> this_PC = out -> seq_succ_PC; 
            }

            //changing op and status to account for running into an error operation 
            if(out -> op == OP_ERROR){
                out -> op = OP_NOP; 
                out -> status = STAT_INS; 
            }

            if (out->status == STAT_INS) {
                F_out->pred_PC = D_in->seq_succ_PC;
            }
        }
        //chug status along
       in -> status = out -> status;  

    }

    //trying to solve program counter issue here?
    if(out -> status == STAT_INS){
        in -> status = STAT_INS; 
    }

    else if (D_in->op == OP_HLT) { //do it for every status 
        in->status = STAT_HLT;
        out->status = STAT_HLT;
    }

    else{
        in -> status = STAT_AOK; 
        out -> status = STAT_AOK; 
    }
    return;
}




//set a breakpoint in fetch and see how select pc is altering current pc
//w_enable 0 for no writebackf