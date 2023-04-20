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
    // copying m and w signals to the next stage
    // destination, source
    copy_m_ctl_sigs(&(out->M_sigs), &(in->M_sigs));
    copy_w_ctl_sigs(&(out->W_sigs), &(in->W_sigs));
    // alu(&(in -> val_a), &(in -> val_b), &(in -> val_hw), (in -> ALU_op), 
    //         &(in -> X_sigs.set_CC), (in -> cond), &(out -> val_ex), &(X_condval)); 

    //have to throw ins for status if ret but unaligned
    if(in -> op == OP_RET){
        out -> status = STAT_INS; 
    }

    bool set_cc = in->X_sigs.set_CC && 
        (M_out -> status == STAT_AOK || M_out -> status == STAT_BUB) &&
        (W_out -> status == STAT_AOK || W_out -> status == STAT_BUB);
    //based on decode, it depends on val_b and val_imm vals
    alu(in->val_a, (in->X_sigs.valb_sel ? in->val_b : in->val_imm), in->val_hw, 
        in->ALU_op, set_cc, in->cond, &(out->val_ex), &X_condval);

    //then you actually want to set condval
    out -> cond_holds = X_condval; 


    //update conditions 
    out->dst = in->dst;
    out->op = in->op;
    out->print_op = in->print_op;
    out->seq_succ_PC = in->seq_succ_PC;
    out->val_b = in->val_b;
    out->status = in->status;
    // if(in -> op == OP_BL){
    //     out -> val_ex = in -> seq_succ_PC; 
    // }
    
    return;
}
