/**************************************************************************
 * C S 429 architecture emulator
 * 
 * instr_Writeback.c - Writeback stage of instruction processing pipeline.
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

extern int64_t W_wval;

/*
 * Write-back stage logic.
 * STUDENT TO-DO:
 * Implement the writeback stage.
 * 
 * Use in as the input pipeline register.
 * 
 * You will need the global variable W_wval.
 */

comb_logic_t wback_instr(w_instr_impl_t *in) {
    //dmem_status = in -> status; // ??????? how does this work
    //F_in -> status  = in -> op; 
    //= in -> print_op; 

    if(in->status == STAT_INS) {

        in->W_sigs.w_enable = false;

    }

    if(in -> status == STAT_HLT){
        in -> status = STAT_INS; 
    }
    
    // val_ex is the address and val_b is the thing u need to write in address
    
    // val_w needs to be fed back
    // dst_sel needs to be fed back 
    // w_enable needs to be fed back 

    // 2:1 mux
    // wval_sel if 0 val ex if 1 val mem
    // wval selector: 1 for LDUR, 0 otherwise.
    if (in -> W_sigs.wval_sel == 1) {
        W_wval = in->val_mem;
    } else {
        W_wval = in->val_ex;
    }

    // another 2:1 mux??
    // dst selector: 1 for X30 (in BL), 0 otherwise
    // so 0 is we have no return address and 1 is we do
    // this mux leads back to decode and writes val_w into enable
    //if (in -> W_sigs.dst_sel == 1) {
        // RA should be PC+4 i think idk if i have to ensure that
       // W_out->dst = in->dst;
    //} else {
        // dont have a return address yet so
        // but if val_ex is an add then doesnt that become the return address that belongs here?
        // so would val_b go in w_val?
   //}

    // have yet to use:
    // val_b -- what you write to the address
    // w_enhance -- things get written to dst register

    // The idea is that by the time we have gotten to decode_instr, 
    // wback_instr has already finished executing and has set W_out->dst, and the writeback value
    // This means that instead of actually doing the actual writeback to the register file 
    // in writeback by calling regfile(), you can just set W_wval and W_out->dst. 
    // For the decode stage of that same cycle you are guaranteed to have W_wval and W_out->dst set.
    // w_enable whether to perform a write: 0 for no, 1 for yes    


    return;
}