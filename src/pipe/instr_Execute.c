/**************************************************************************
 * C S 429 system emulator
 * 
 * instr_Execute.c - Execute stage of instruction processing pipeline.
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

extern bool X_condval;

extern comb_logic_t copy_m_ctl_sigs(m_ctl_sigs_t *, m_ctl_sigs_t *);
extern comb_logic_t copy_w_ctl_sigs(w_ctl_sigs_t *, w_ctl_sigs_t *);

/*
 * Execute stage logic.
 * STUDENT TO-DO:
 * Implement the execute stage.
 * 
 * Use in as the input pipeline register,
 * and update the out pipeline register as output.
 * 
 * You will need the following helper functions:
 * copy_m_ctl_signals, copy_w_ctl_signals, and alu.
 */

comb_logic_t execute_instr(x_instr_impl_t *in, m_instr_impl_t *out) {
    out->op = in->op; // simply continues on 
    out->dst = in->dst;
    out->val_b = in->val_b; 

    // copying m and w signals to the next stage
    // destination, source
    copy_m_ctl_sigs(&(out->M_sigs), &(in->M_sigs));
    copy_w_ctl_sigs(&(out->W_sigs), &(in->W_sigs));

    // i think im supposed to first see if set_cc is true or not
    // if it is then check against god knows what in cond_t cond
    // and set that to X_condval which is a bool 
    X_condval = in->cond;

    // seq_succ_PC is supposed to be sent back to select_pc
    in->seq_succ_PC = out->seq_succ_PC;
    
    // mux uses valb_sel 0 for immediate 1 for register
    // original val_b continues to memory so i created a temp
    uint64_t mux_result;
    if (in->X_sigs.valb_sel == 0) {
        mux_result = in->val_imm; 
    } else {
        mux_result = in->val_b;
    }

    // use set_cc -- whether to set condition flags: 0 for no, 1 for yes    
    // how do i use cond here
    // so cond comes into alu then leaves as x_condval
    switch (in->ALU_op) {
        case PLUS_OP:
            out->val_ex = in->val_a + (mux_result << in->val_hw);
            break; 
        case MINUS_OP:
            out->val_ex = in->val_a - (mux_result << in->val_hw);
            break;
        case NEG_OP:
            // ~vala
            out->val_ex = ~in->val_a;
            break;
        case OR_OP:
            // vala | valb
            out->val_ex = in->val_a | mux_result;
            break;
        case EOR_OP:
            // vala ^ valb
            out->val_ex = in->val_a ^ mux_result;
            break;
        case AND_OP:
            // vala & valb
            out->val_ex = in->val_a & mux_result;
            break;
        case MOV_OP:
            // vala | (valb << valhw)
            out->val_ex = in->val_a | (mux_result << in->val_hw);
            break;
        case LSL_OP:
            // vala << (valb & 0x3FUL)
            out->val_ex = in->val_a << (mux_result & 0x3FUL);
            break;
        case LSR_OP:
            // vala >>L (valb & 0x3FUL)
            // what does the L mean?
            out->val_ex = in->val_a >> (mux_result & 0x3FUL);
            break;
        case ASR_OP:
            // vala >>A (valb & 0x3FUL)
            // what does the A mean?
            out->val_ex = in->val_a >> (mux_result & 0x3FUL);
            break;
        case PASS_A_OP: 
            out->val_ex = in->val_a;
            break;
        case PASS_B_OP:
            out->val_ex = in->val_a;
            break;
        case ERROR_OP:
        default: // when u dont have alu_op its always pass_a_op
            out->val_ex = in->val_a;
            break;
    }

    
    
    return;
}
