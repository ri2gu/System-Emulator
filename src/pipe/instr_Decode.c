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
    D_sigs->src2_sel = (op == OP_STUR) ? 1 : 0;
    M_sigs->dmem_write = (op == OP_STUR) ? 1 : 0;

    //if it's a register operation
    X_sigs->valb_sel = (op == OP_B_COND || op == OP_B || op == OP_BL || op == OP_RET || op == OP_MOVK || 
                op == OP_MOVZ || op == OP_HLT || op == OP_ADD_RI || op == OP_SUB_RI || op == OP_NOP || op == OP_LDUR || 
                op == OP_STUR || op == OP_ADRP || op == OP_LSR || op == OP_LSL || op == OP_ASR) ? 0 : 1; 

    //setting setCC based off slides 
    X_sigs->set_CC = (op == OP_ADDS_RR || op == OP_ANDS_RR || op == OP_SUBS_RR || op == OP_CMP_RR || op == OP_TST_RR) ? 1 : 0;

    M_sigs->dmem_read = (op == OP_LDUR) ? 1 : 0;
    W_sigs->wval_sel = (op == OP_LDUR) ? 1 : 0;                                                                           

    //operations and shifts opocodes
    W_sigs->w_enable = (op == OP_UBFM || op == OP_ADRP || op == OP_ANDS_RR || op == OP_MVN || op == OP_EOR_RR || op == OP_MOVZ || 
    op == OP_MOVK || op == OP_SUB_RI || op == OP_ADD_RI || op == OP_LSL || op == OP_LSR || op == OP_ASR || op == OP_ADDS_RR || 
    op == OP_SUBS_RR || op == OP_ORR_RR || op == OP_LDUR) ? 1 : 0;

    if(op == OP_ERROR){
        W_sigs -> w_enable = 1; 
    }


    W_sigs->dst_sel = (op == OP_BL) ? 1 : 0;

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
    //uint32_t code = bitfield_u32(insnbits, 21, 11); 
    if(op == OP_LDUR || op == OP_STUR){
        *imm = bitfield_u32(insnbits, 12, 9); //location of the format register 
        return; 
    }

    //in the case that the format of the instruction is in RI format
    else if(op == OP_ADD_RI || op == OP_SUB_RI || op == OP_ASR || op == OP_UBFM){
        *imm = bitfield_u32(insnbits, 10, 12); 
        return;
    }

    //in the case that its in I2 format (has shifting bits too)
    else if(op == OP_ADRP){
        *imm = ((bitfield_u32(insnbits, 29, 2)) << 12 | (bitfield_u32(insnbits, 5, 19) << 14));
        return; 
    }

    //in the case that the format is in I1
    else if(op == OP_MOVK || op == OP_MOVZ){
        *imm = bitfield_u32(insnbits, 5, 16);   
        return; 
    }
        //asr depends on bits idk
    else if(op == OP_LSR || op == OP_LSL || op == OP_ASR){
        *imm = bitfield_u32(insnbits, 16, 5); 
        return; 
    }

    //entrire thing is imm?
    else if (op == OP_BL || op == OP_B){
        *imm = bitfield_u32(insnbits, 0, 26); 
        return; 
    }

    else{
        *imm = 0; 
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
        //sets the shift amount
        //X_in -> val_hw = bitfield_u32(D_in -> insnbits, 21, 2); 
        *ALU_op = MOV_OP;

    }

    //for ADDS, SUBS, ANDS, TST, and CMP (do wtv operation + modify NZCV)
    //how does the instruction aliases affect this? 
    if(op == OP_ADDS_RR || op == OP_ADD_RI){
        *ALU_op = PLUS_OP; 
    }

    if(op == OP_SUBS_RR || op == OP_SUB_RI || op == OP_CMP_RR){
        *ALU_op = MINUS_OP; 
    }

    if(op == OP_MVN){
        *ALU_op = NEG_OP; 
    }


    if(op == OP_ANDS_RR || op == OP_TST_RR){
        *ALU_op = AND_OP; 
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

    if(op == OP_RET){
        *ALU_op = PASS_A_OP; 
    }

    if(op == OP_NOP || op == OP_HLT){
        *ALU_op = PASS_A_OP; 
    }
     
    if(op == OP_ORR_RR){
        *ALU_op = OR_OP; 
     }

     if(op == OP_EOR_RR){
        *ALU_op = EOR_OP; 
     }

     if(op == OP_LSL){
        *ALU_op = LSL_OP; 
     }

     if(op == OP_LSR){
        *ALU_op = LSR_OP; 
     }

    if(op == OP_ASR){
        *ALU_op = ASR_OP; 
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

    //grouping together here based on formats 
    if (op == OP_LSR || op == OP_ASR){
        *src1 = 0x0UL; 
        *src2 = bitfield_u32(insnbits, 5, 5);
        *dst = bitfield_u32(insnbits, 0, 5);
    }

    else if(op == OP_ADD_RI){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = 0x0UL;
        *dst = bitfield_u32(insnbits, 0, 5);
    }

    else if(op == OP_SUB_RI){
        *dst = bitfield_u32(insnbits, 0, 5);
        *src1 = XZR_NUM; 
        *src2 = bitfield_u32(insnbits, 5, 5);
    }

    else if(op == OP_LSL){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = XZR_NUM;
        *dst = bitfield_u32(insnbits, 0, 5);
    }

    //Same formats 
    else if (op == OP_LDUR){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = bitfield_u32(insnbits, 0, 5);
        *dst = bitfield_u32(insnbits, 0, 5);
    }

    else if(op == OP_STUR){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = bitfield_u32(insnbits, 0, 5);
        *dst = 0x0UL; 

    }

    // MOVZ and ADRP instructions have a 16-bit immediate value and a 5-bit destination register
    else if (op == OP_MVN){
        *src1 = XZR_NUM;
        *src2 = bitfield_u32(insnbits, 16, 5);
            if(*src2 == 31){
                *src2 = XZR_NUM; 
            }
        *dst = bitfield_u32(insnbits, 0, 5);
    }

    //
    else if (op == OP_MOVK){
        *src1 = bitfield_u32(insnbits, 0, 5);
        *src2 = XZR_NUM;
        *dst = bitfield_u32(insnbits, 0, 5);

    }

    else if (op == OP_NOP){
        *src1 = XZR_NUM;
        *src2 = XZR_NUM;
        *dst = 0x0UL; 
    }

    else if (op == OP_SUBS_RR || (op >= OP_ORR_RR && op <= OP_TST_RR) || op == OP_ADDS_RR){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *dst = bitfield_u32(insnbits, 0, 5);
        *src2 = bitfield_u32(insnbits, 16, 5);

            if(op == OP_ORR_RR && (*src2 == 31)){
                *src2 = XZR_NUM; 
            }
    }


    else if (op == OP_CMP_RR){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = bitfield_u32(insnbits, 16, 5);
        *dst = XZR_NUM;
    }

    else if (op == OP_MOVZ || op == OP_ADRP){
        *src1 = XZR_NUM;
        *src2 = XZR_NUM;
        *dst = bitfield_u32(insnbits, 0, 5);
    }
    
    else if (op == OP_RET){
        *src1 = bitfield_u32(insnbits, 5, 5);
        *src2 = XZR_NUM;
        //*dst = XZR_NUM;
    }

    else if(op == OP_BL){
        *dst = 30; 
        *src2 = XZR_NUM;
        *src1 = XZR_NUM;
    }

    else if(op == OP_ERROR){
        *dst = XZR_NUM; 
        *src1 = XZR_NUM;
        *src2 = XZR_NUM; 
    }

    else if(op == OP_HLT){
        *dst = 0x0UL; 
        *src1 = 0x0UL;
        *src2 = 0x0UL; 
    }
    
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
    d_ctl_sigs_t D_signal; 
    uint8_t src1; 
    uint8_t src2; 
    //uint8_t dst; 
    out -> status = in -> status;
    out -> seq_succ_PC = in -> seq_succ_PC; 
    out -> op = in -> op;
    out -> print_op = in -> print_op; 

   
    generate_DXMW_control(in -> op, &D_signal, &(out -> X_sigs), &(out -> M_sigs), &(out -> W_sigs)); 
    extract_regs(in -> insnbits, in -> op, &src1, &src2, &(out -> dst)); 
    decide_alu_op(in -> op, &(out-> ALU_op));
            regfile(src1, src2, W_out -> dst, W_wval, W_out -> W_sigs.w_enable, &(out -> val_a), &(out -> val_b));

    extract_immval(in -> insnbits, in -> op, &(out -> val_imm)); 
    //if(W_in->status == STAT_AOK){
        //regfile(src1, src2, W_out -> dst, W_wval, W_out -> W_sigs.w_enable, &(out -> val_a), &(out -> val_b));
    //}
    //extract_immval(in -> insnbits, in -> op, &(out -> val_imm)); 

    forward_reg(src1, src2, X_out -> dst, M_out -> dst, W_out -> dst, M_in -> val_ex, M_out -> val_ex, W_in -> val_mem, W_in -> val_ex,
            W_in -> val_mem, M_in -> W_sigs.wval_sel, W_in -> W_sigs.wval_sel, X_out -> W_sigs.w_enable, M_in -> W_sigs.w_enable, 
            W_out -> W_sigs.w_enable, &(out -> val_a), &(out -> val_b)); 
    //special cases depending on opcodes 
    //setting cond value here 
    if(in -> op == OP_B_COND){
        out -> cond = (cond_t)bitfield_u32(in -> insnbits, 0, 4); 
    }

    //setting val_hw for mov vals
    out->val_hw = (in->op == OP_MOVZ || in->op == OP_MOVK) ? bitfield_u32(in->insnbits, 21, 2) << 4 : 0;

    //set it equal to current_PC essentially?
    if(in -> op == OP_ADRP){
        out -> val_a = in -> this_PC; 
    }

    //error handling 
    if(out -> op == OP_ERROR){
        out -> op = OP_NOP;
        out -> status = STAT_INS; 
    }

    // if(out -> op == OP_HLT){
    //     //out -> op = OP_HLT; 
    //     in -> status = OP_HLT; 
    //     //out -> status = OP_HLT; 
    // }
    if (out->op == OP_HLT) { //do it for every status 
        in->status = STAT_HLT;
        out->status = STAT_HLT;
    }


    // if(out -> op == OP_HLT && in -> status == STAT_INS){
    //     in -> op = OP_HLT; 
    // }

    return;
}


//check writeback sigs w_val select
//its supposed to run 11 in the first cycle 
//one line in decode 
