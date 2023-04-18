/**************************************************************************
 * C S 429 system emulator
 * 
 * forward.c - The value forwarding logic in the pipelined processor.
 **************************************************************************/ 

#include <stdbool.h>
#include "forward.h"

/* STUDENT TO-DO:
 * Implement forwarding register values from
 * execute, memory, and writeback back to decode.
 */

//X_out to D_out (expressed as M_in and X_in
comb_logic_t forward_reg(uint8_t D_src1, uint8_t D_src2, uint8_t X_dst, uint8_t M_dst, uint8_t W_dst,
                 uint64_t X_val_ex, uint64_t M_val_ex, uint64_t M_val_mem, uint64_t W_val_ex,
                 uint64_t W_val_mem, bool M_wval_sel, bool W_wval_sel, bool X_w_enable,
                 bool M_w_enable, bool W_w_enable,
                 uint64_t *val_a, uint64_t *val_b) {

//W_in
if (W_w_enable){
    //W_val_select actually sets the value, this current implementation just tells us that we need to set the value
    if(W_wval_sel != true){
        if(W_dst == D_src1){
            *val_a = W_val_mem; 
        }

        else{
            *val_a = W_val_ex; 
        }

        if(W_dst == D_src2){
            *val_b = W_val_mem; 
        }

        else{
            *val_b = W_val_ex; 
        }
        
    }



    // *val_a = (W_dst == D_src1) ? W_val_mem : W_val_ex;
    // *val_b = (W_dst == D_src2) ? (W_wval_sel ? W_val_mem : W_val_ex) : *val_b;
}

//M_out
if (M_w_enable){
    if(M_wval_sel != true){
        if(M_dst == D_src1){
            *val_a = M_val_mem;
        }

        else{
            *val_a = W_val_ex; 
        }

        if(M_dst == D_src2){
            *val_b =  M_val_mem; 
        }

        else{
            *val_b =  M_val_ex; 
        }
    // *val_a = M_wval_sel ? W_val_mem : W_val_ex;
    // *val_b = M_wval_sel ? W_val_mem : W_val_ex;
}

//M_in
if (X_w_enable){
    //X_out's dest = x4 != D_out's source 1 (which is x5). Therefore, leave X_in's val_a as-is. 
    if(X_dst == D_src1){ //if this is not the case, then we just leave val_a alone? (M_in->val_a set to regval_a)
        *val_a = X_val_ex; 
    }

    else{
        *val_a = *val_a; 
    }


    //is X_out's dst register == D_out's source 2 register? X_out's dst = x4 != D_out's source 2 (x5). So change X_in's val_b to M_in's computed val_ex. 
    if(X_dst == D_src2){
        *val_b = X_val_ex; //same thing, then we just leave val_b alone
    }

    else{
        *val_b = *val_b;
    }


    //set to ex if = src1, set to a otherwise 
    // *val_a = (X_dst == D_src1) ? X_val_ex : *val_a;
    // *val_b = (X_dst == D_src2) ? X_val_ex : *val_b;
    return;
}
}}
