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
    out->M_sigs = in->M_sigs;
    out->W_sigs = in->W_sigs;


    // x sigs become valb_sel -- into mux and set_cc -- into alu
    

    // into alu -- set_cc from x sigs, alu op, cond, val a, hw, result of mux
    // into mux -- val b, val imm
    
    // alu uses cond
    // take alu op and just do whatever operation taht is
    // how do we get cond val tho??


    // mux uses valb_sel 0 for immediate 1 for register
    if (in->X_sigs.valb_sel == 0) {
        out->val_b = in->val_imm;
    } else {
        out->val_b = in->val_b;
    }


    
    
    return;
}
