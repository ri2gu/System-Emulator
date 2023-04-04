/**************************************************************************
 * C S 429 system emulator
 * 
 * instr_Memory.c - Memory stage of instruction processing pipeline.
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

extern comb_logic_t copy_w_ctl_sigs(w_ctl_sigs_t *, w_ctl_sigs_t *);

/*
 * Memory stage logic.
 * STUDENT TO-DO:
 * Implement the memory stage.
 * 
 * Use in as the input pipeline register,
 * and update the out pipeline register as output.
 * 
 * You will need the following helper functions:
 * copy_w_ctl_signals and dmem.
 */

comb_logic_t memory_instr(m_instr_impl_t *in, w_instr_impl_t *out) {
    
    M_out->cond_holds = in->cond_holds;

    
    out->dst = in->dst; // is this how things 'just carry'?

    // generated in decode and used in memory 1 if read 0 not
    // dmem_read dmem_write 1 if write 0 not

    // seq_succ_pc comes in here and is sent to select_pc
    // what does it mean to buffer m_sigs and w_sigs??

    /*
    In the memory file I am not quite sure where we get the dmem_wval
    parameter when calling dmem. 
    It should come from val_b. The only case where you would have something
    to write back to memory was if the instruction is a STUR. The signal
    src2_sel in decode indicates that the Rt field of STUR (the value to be
    written into memory) should go into val_b, so that is what dmem_wval should be
    */
    


    
    
    return;
}
