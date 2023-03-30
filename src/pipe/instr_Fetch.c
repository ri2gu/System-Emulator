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
    if(M_opcode == OP_B_COND && M_cond_val == false){
        *current_PC = seq_succ; //in the case that we're not taking the branch 
        seq_succ = current_PC + 8; 
    }
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
        *seq_succ = current_PC + 4; 
    }


    //PREDICTION: For conditional branches, predict that it's taken
    if(op == OP_B_COND){ //find the offset with the chArm diagram 
        //gets the immediate value from the instruction encoding 
        uint32_t offset = bitfield_u32(insnbits, 5, 16); 
        *predicted_PC = current_PC + offset;
        *seq_succ = current_PC + 4; //compute in case of misprediction 
    }
}

/*
 * Helper function to recognize the aliased instructions:
 * LSL, LSR, CMP, and TST. We do this only to simplify the 
 * implementations of the shift operations (rather than having
 * to implement UBFM in full).
 */

static
void fix_instr_aliases(uint32_t insnbits, opcode_t *op) {
    //can you add parameters? 
    
    //extract the opcode and index into the table  
    //check if it's an aliased instruction (LSL & LSR are the same opcode)
    if(init_itable_entry(bitfield_u32(insnbits, 21, 11)) == OP_UBFM){
        //use the values from that point in 
        //in order to differentiate between the two with the same opcode 
        if(init_itable_entry(bitfield_u32(insnbits, 11, 1)) == 0x1){
            *op = OP_LSR;
        }
        else{
            *op = OP_LSL; 
        }
    }

    if(init_itable_entry(bitfield_u32(insnbits, 21, 11) == OP_SUBS_RR)){
        *op = OP_CMP_RR; 
    }

    if(init_itable_entry(bitfield_u32(insnbits, 21, 11) == OP_ANDS_RR)){
        *op = OP_TST_RR; 
    }
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
    bool imem_err = 0;
    uint64_t current_PC;
    select_PC(X_in-> val_a, &current_PC);
    /* 
     * Students: This case is for generating HLT instructions
     * to stop the pipeline. Only write your code in the **else** case. 
     */

    //with the instruction word, stick it into the output pipeline register for decode
    imem(current_PC, &out -> insnbits , &imem_err);


    //extract the opcode

    
    if (!current_PC) {
        out->insnbits = 0xD4400000U;
        out->op = OP_HLT;
        out->print_op = OP_HLT;
        imem_err = false;
    }
    else { //where you actually put the code 
        //find the instruction bits 
        //fix_instr_aliases(insnbits, op)
        
        
    }
    if (out->op == OP_HLT) {
        in->status = STAT_HLT;
        out->status = STAT_HLT;
    }
    return;
}





//w_enable 0 for no writeback