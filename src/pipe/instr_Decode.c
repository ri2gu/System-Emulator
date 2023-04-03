/**************************************************************************
 * C S 429 system emulator
 * 
 * instr_Decode.c - Decode stage of instruction processing pipeline.
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
#include "forward.h"
#include "machine.h"
#include "hw_elts.h"

#define SP_NUM 31
#define XZR_NUM 32

extern machine_t guest;
extern mem_status_t dmem_status;

extern int64_t W_wval;

/*
 * Control signals for D, X, M, and W stages.
 * Generated by D stage logic.
 * D control signals are consumed locally. 
 * Others must be buffered in pipeline registers.
 * STUDENT TO-DO:
 * Generate the correct control signals for this instruction's
 * future stages and write them to the corresponding struct.
 */

static comb_logic_t 
generate_DXMW_control(opcode_t op,
                      d_ctl_sigs_t *D_sigs, x_ctl_sigs_t *X_sigs, m_ctl_sigs_t *M_sigs, w_ctl_sigs_t *W_sigs) {
    //Buffering a signal in a pipeline reigster means the signal is stored in the 
    //reg temp, allowing next stage of pipeline to operate on the signal w/o interfering
    //with the previous stage

    //if it's a memory store instruction, change the value to a 1
    //create local var to see if it errs out
    if(op == OP_STUR){
        D_sigs -> src2_sel = 1; 
        M_sigs -> dmem_write = 1; 
    }

    //if it's a register operation
    if(op == OP_TST_RR || op == OP_CMP_RR || op == OP_ORR_RR || op == OP_EOR_RR || op == OP_SUBS_RR || op == OP_ANDS_RR || op == OP_SUBS_RR || op == OP_ADDS_RR){
        X_sigs -> valb_sel = 1; 
    }

    if(op == OP_ADDS_RR || op == OP_ANDS_RR || op == OP_SUBS_RR || op == OP_CMP_RR || op == OP_TST_RR){
        X_sigs -> set_CC = 1; 
    }

    if(op == OP_LDUR){
        M_sigs -> dmem_read = 1; 
        W_sigs -> wval_sel = 1; 
    }

    if(op == OP_BL){
        W_sigs -> dst_sel = 1; 
    }

    if(op != OP_STUR || op != OP_B || op != OP_B_COND || op != OP_RET || op != OP_NOP || op != OP_HLT || op != OP_CMP_RR || op != OP_TST_RR){
        W_sigs -> w_enable = 1; 
    } 

    //how to update ALUop condition [3:0]
    //how to update cond: iword[3:0]
    return;
}

/*
 * Logic for extracting the immediate value for M-, I-, and RI-format instructions.
 * STUDENT TO-DO:
 * Extract the immediate value and write it to *imm.
 */

static comb_logic_t 
extract_immval(uint32_t insnbits, opcode_t op, int64_t *imm) {
    //first, figure out the format of the instruction
    //in the case that the format of the instruction is M format 
    if(bitfield_u32(insnbits, 10, 1) == 0x00){
        *imm = bitfield_s64(insnbits, 12, 9); //location of the format register 
    }

    //in the case that the format of the instruction is in RI format
    if(bitfield_u32(insnbits, 24, 1) == 0x01){
        *imm = bitfield_s64(insnbits, 10, 12); 
    }

    //in the case that its in I2 format
    if(bitfield_u32(insnbits, 24, 4)  == 0x00){
        *imm = bitfield_s64(insnbits, 5, 16); 
    }

    //in the case that the format is in I1
    if(bitfield_u32(insnbits, 23, 1) == 0x01){
        *imm = bitfield_s64(insnbits, 5, 19);   
    }
    return;
}

/*
 * Logic for determining the ALU operation needed for this opcode.
 * STUDENT TO-DO:
 * Determine the ALU operation based on the given opcode
 * and write it to *ALU_op.
 */
static comb_logic_t
decide_alu_op(opcode_t op, alu_op_t *ALU_op) {
    //for LDUR, STUR, ADRP (use this to compute an add)
    if(op == OP_LDUR || op == OP_STUR || op == OP_ADRP){
        *ALU_op = PLUS_OP; 
    }

    //for MOVK and MOVZ, you're going to do a shift and merge
    if(op == OP_MOVK || op == OP_MOVZ){
        X_in -> val_hw = bitfield_u32(D_in -> insnbits, 21, 2); 
        //*ALU_op = ;

    }

    //for ADDS, SUBS, ANDS, TST, and CMP (do wtv operation + modify NZCV)
    //how does the instruction aliases affect this? 
    if(op == OP_ADDS_RR || op == OP_ADD_RI){
        *ALU_op = PLUS_OP; 
    }

    if(op == OP_SUBS_RR){
        *ALU_op = MINUS_OP; 
    }

    if(op == OP_ANDS_RR){
        *ALU_op = AND_OP; 
    }

    if(op == OP_TST_RR){
        *ALU_op = AND_OP;
        //also update the condition flags 
    }

    if(op == OP_CMP_RR){
        *ALU_op = MINUS_OP; 
        //also update the condition flags 
    }



    //Other computations just do their respective instructions
    //B, BL, B.cond (addition to determine branch_target)
    if(op == OP_B || op == OP_B_COND){
        *ALU_op = PLUS_OP; 
    }

    if(op == OP_BL){
        X_in -> val_a = X_in -> seq_succ_PC; 
        *ALU_op = PASS_A_OP; 

    }
    //B.cond (determine truth value of cond based on NZCV)
    //pass val_a, pass_val b (-13:20, 3/23)
    //NZCV resides within the ALU

    return;
}

/*
 * Utility functions for copying over control signals across a stage.
 * STUDENT TO-DO:
 * Copy the input signals from the input side of the pipeline
 * register to the output side of the register.
 */

comb_logic_t 
copy_m_ctl_sigs(m_ctl_sigs_t *dest, m_ctl_sigs_t *src) {
    dest -> dmem_read = src->dmem_read;
    dest -> dmem_write = src->dmem_write;
    return;
}

comb_logic_t 
copy_w_ctl_sigs(w_ctl_sigs_t *dest, w_ctl_sigs_t *src) {
    dest -> dst_sel = src -> dst_sel;
    dest -> wval_sel = src -> wval_sel;
    dest -> w_enable = src -> w_enable;
    return;
}

//For this function, figure out what src1, src2, and dst will be for the instruction
comb_logic_t
extract_regs(uint32_t insnbits, opcode_t op, 
             uint8_t *src1, uint8_t *src2, uint8_t *dst) {
    //src1 always comes from this location iword[9:5]


    //format has none
    if(op == OP_B || op == OP_B_COND || op == OP_NOP || op == OP_HLT){
        *src1 = XZR_NUM;
        *src2 = XZR_NUM;
        *dst = XZR_NUM;
    }

    //format has only dst
    if( (op = OP_MOVK) || op == OP_MOVZ || op == OP_ADRP){
        *src1 = XZR_NUM;
        *src2 = XZR_NUM;
        *dst = bitfield_u32(insnbits, 0, 5); 
    }

    //format has only src1
    if(op == OP_RET){
        *src1 = bitfield_u32(insnbits, 0, 5); 
        *src2 = XZR_NUM;
        *dst = XZR_NUM;
    }

    //format has all three values 
    if(op == OP_SUBS_RR || op == OP_CMP_RR || op == OP_ADDS_RR || op == OP_MVN
        || op == OP_ORR_RR || op == OP_EOR_RR || op == OP_ANDS_RR || op == OP_TST_RR){
            *src1 = bitfield_u32(insnbits, 5, 5); 
            *src2 = bitfield_u32(insnbits, 15, 5); 
            *dst = bitfield_u32(insnbits, 0, 5);
    }

    //format has only src1 and src2
    // if(op == OP_ADD_RI || op == OP_SUB_RI || op = OP_LSL || op == OP_LSR){

    // }

    //format has src1 and src2
    if(op == OP_LDUR || op == OP_STUR){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = bitfield_u32(insnbits, 0, 5);
        *dst = XZR_NUM; 
    }


    //new iteration assuming src2 is RT
    // *src1 = bitfield_u32(insnbits, 5, 5); 


    // //src2 depends if it's 
    // if(op == OP_STUR){
    //     *src2 = bitfield_u32(insnbits, 0, 5); 
    //     *dst = bitfield_u32(insnbits, 0, 5); 
    // }

    // else{
    //     //*src2 = bitfield_u32(insnbits, 16, 5); 
    //     *src2 = XZR_NUM;  
    // }

    // if(op == OP_BL){
    //     *dst = 30; 
    // }

    // if(op != OP_BL|| op != OP_STUR){
    //     *dst = bitfield_u32(insnbits, 0, 5); 
    // }
    
    
    //dst, val-w, and w-enable come from writeback
    return;
}

/*
 * Decode stage logic.
 * STUDENT TO-DO:
 * Implement the decode stage.
 * 
 * Use `in` as the input pipeline register,
 * and update the `out` pipeline register as output.
 * Additionally, make sure the register file is updated
 * with W_out's output when you call it in this stage.
 * 
 * You will also need the following helper functions:
 * generate_DXMW_control, regfile, extract_immval,
 * and decide_alu_op.
 */

comb_logic_t decode_instr(d_instr_impl_t *in, x_instr_impl_t *out) {
    d_ctl_sigs_t *D_signal = 0; 
    uint8_t src1; 
    uint8_t src2; 
    uint8_t dst; 
    generate_DXMW_control(D_in -> op, D_signal, &(X_in -> X_sigs), &(X_in -> M_sigs), &(X_in -> W_sigs));
    extract_immval(D_in -> insnbits, D_in -> op, &(X_in -> val_imm)); 
    extract_regs(bitfield_u32(D_in -> insnbits, 0, 5), bitfield_u32(D_in -> insnbits,5, 5), &src1, &src2, &dst); 
    decide_alu_op(D_in -> op, &(X_in -> ALU_op));
    regfile(src1, src2, W_out -> dst, W_wval, X_in -> W_sigs.w_enable, &(X_in -> val_a), &(X_in -> val_b));
    return;
}


//check writeback sigs w_val select
//its supposed to run 11 in the first cycle 
//you don't have to specifically set it in extract regs, just do it in decode after you call extract_regs
