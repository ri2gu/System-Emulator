Welcome to the C S 429 System Emulator

Author: [1m[31mReference Implementation[0m
Run begun at Thu Apr  6 14:34:48 2023



Pipeline state at end of cycle 0:
F: MOVZ  [PC, insn_bits] = [004000D4,  D2800005], seq_succ_PC: 0x4000D8, pred_PC: 0x4000D8, status: BUB
D: NOP   [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PASS_A_OP, cond: EQ, dst: X0, status: BUB
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: NOP   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: BUB
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: NOP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: BUB
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 1:
F: MOVZ  [PC, insn_bits] = [004000D8,  D2800024], seq_succ_PC: 0x4000DC, pred_PC: 0x4000DC, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: MOV_OP, cond: EQ, dst: X5, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: NOP   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PASS_A_OP, status: BUB
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: NOP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: BUB
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 2:
F: MOVZ  [PC, insn_bits] = [004000DC,  D28001A2], seq_succ_PC: 0x4000E0, pred_PC: 0x4000E0, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0x1], alu_op: MOV_OP, cond: EQ, dst: X4, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: NOP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: BUB
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 3:
F: MOVZ  [PC, insn_bits] = [004000E0,  D2800020], seq_succ_PC: 0x4000E4, pred_PC: 0x4000E4, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0xD], alu_op: MOV_OP, cond: EQ, dst: X2, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0x1, 0x0, 0x0, 0x1, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: MOVZ  [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 4:
F: ORR   [PC, insn_bits] = [004000E4,  AA0203E1], seq_succ_PC: 0x4000E8, pred_PC: 0x4000E8, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0x1], alu_op: MOV_OP, cond: EQ, dst: X0, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0xD, 0x0, 0x0, 0xD, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: MOVZ  [val_ex, val_b, val_mem] = [0x1, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X5, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 5:
F: ORR   [PC, insn_bits] = [004000E8,  AA0003E3], seq_succ_PC: 0x4000EC, pred_PC: 0x4000EC, status: AOK
D: ORR   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x0], alu_op: OR_OP, cond: EQ, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0x1, 0x0, 0x0, 0x1, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: MOVZ  [val_ex, val_b, val_mem] = [0xD, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X4, 0x1, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1



Pipeline state at end of cycle 6:
F: MOVZ  [PC, insn_bits] = [004000EC,  D2800000], seq_succ_PC: 0x4000F0, pred_PC: 0x4000F0, status: AOK
D: ORR   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x0], alu_op: OR_OP, cond: EQ, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: ORR   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8, 0x7FFFFFFF8, 0x0, 0x0, 0x0], alu_op: OR_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , false]
M: MOVZ  [val_ex, val_b, val_mem] = [0x1, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X2, 0xD, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xd



Pipeline state at end of cycle 7:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: MOV_OP, cond: EQ, dst: X0, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: ORR   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8, 0x7FFFFFFF8, 0x0, 0x0, 0x0], alu_op: OR_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , false]
M: ORR   [val_ex, val_b, val_mem] = [0x7FFFFFFF8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X0, 0x1, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1



Pipeline state at end of cycle 8:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: AND_OP, cond: EQ, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: ORR   [val_ex, val_b, val_mem] = [0x7FFFFFFF8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ORR   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff8



Pipeline state at end of cycle 9:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: EQ, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: MOVZ  [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ORR   [dst, val_ex, val_mem] = [X3, 0x7FFFFFFF8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff8



Pipeline state at end of cycle 10:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 11:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 12:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFC00000000, 0x7FFFFFFF8, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 13:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0, 0x7FFFFFFF8, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFC00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 14:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8, 0x7FFFFFFF8, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0xFFFFFFFC00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffffc00000000



Pipeline state at end of cycle 15:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF8, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff0



Pipeline state at end of cycle 16:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF8, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff8



Pipeline state at end of cycle 17:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 18:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFC00000000, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 19:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFC00000000, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 20:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0, 0xFFFFFFFF0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 21:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0, 0xFFFFFFFF0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 22:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe0



Pipeline state at end of cycle 23:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff0



Pipeline state at end of cycle 24:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 25:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 26:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 27:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0, 0x1FFFFFFFE0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 28:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0, 0x1FFFFFFFE0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 29:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc0



Pipeline state at end of cycle 30:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe0



Pipeline state at end of cycle 31:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 32:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 33:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 34:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80, 0x3FFFFFFFC0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 35:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0, 0x3FFFFFFFC0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF80, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 36:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF80, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff80



Pipeline state at end of cycle 37:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc0



Pipeline state at end of cycle 38:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 39:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 40:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF80, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 41:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF80, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00, 0x7FFFFFFF80, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 42:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80, 0x7FFFFFFF80, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 43:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF80, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF80, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff00



Pipeline state at end of cycle 44:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF80, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF80, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff80



Pipeline state at end of cycle 45:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 46:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 47:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF00, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 48:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF00, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE00, 0xFFFFFFFF00, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 49:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00, 0xFFFFFFFF00, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 50:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF00, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe00



Pipeline state at end of cycle 51:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF00, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff00



Pipeline state at end of cycle 52:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 53:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 54:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE00, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 55:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE00, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC00, 0x1FFFFFFFE00, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 56:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE00, 0x1FFFFFFFE00, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 57:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE00, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc00



Pipeline state at end of cycle 58:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE00, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe00



Pipeline state at end of cycle 59:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 60:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 61:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC00, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 62:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC00, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF800, 0x3FFFFFFFC00, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 63:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC00, 0x3FFFFFFFC00, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF800, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 64:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC00, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC00, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF800, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff800



Pipeline state at end of cycle 65:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC00, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC00, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc00



Pipeline state at end of cycle 66:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 67:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 68:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF800, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 69:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF800, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF000, 0x7FFFFFFF800, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 70:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF800, 0x7FFFFFFF800, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 71:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF800, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF800, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff000



Pipeline state at end of cycle 72:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF800, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF800, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff800



Pipeline state at end of cycle 73:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 74:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 75:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 76:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE000, 0xFFFFFFFF000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 77:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF000, 0xFFFFFFFF000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 78:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe000



Pipeline state at end of cycle 79:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff000



Pipeline state at end of cycle 80:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 81:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 82:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 83:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC000, 0x1FFFFFFFE000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 84:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE000, 0x1FFFFFFFE000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 85:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc000



Pipeline state at end of cycle 86:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe000



Pipeline state at end of cycle 87:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 88:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 89:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 90:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8000, 0x3FFFFFFFC000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 91:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC000, 0x3FFFFFFFC000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF8000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 92:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF8000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff8000



Pipeline state at end of cycle 93:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc000



Pipeline state at end of cycle 94:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 95:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 96:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF8000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 97:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF8000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0000, 0x7FFFFFFF8000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 98:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8000, 0x7FFFFFFF8000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 99:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF8000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF8000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff0000



Pipeline state at end of cycle 100:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF8000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF8000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff8000



Pipeline state at end of cycle 101:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 102:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 103:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF0000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 104:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF0000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0000, 0xFFFFFFFF0000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 105:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0000, 0xFFFFFFFF0000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 106:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF0000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe0000



Pipeline state at end of cycle 107:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF0000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff0000



Pipeline state at end of cycle 108:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 109:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 110:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE0000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 111:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE0000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0000, 0x1FFFFFFFE0000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 112:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0000, 0x1FFFFFFFE0000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 113:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE0000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc0000



Pipeline state at end of cycle 114:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE0000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe0000



Pipeline state at end of cycle 115:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 116:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 117:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC0000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 118:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC0000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80000, 0x3FFFFFFFC0000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 119:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0000, 0x3FFFFFFFC0000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF80000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 120:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC0000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF80000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff80000



Pipeline state at end of cycle 121:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC0000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC0000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc0000



Pipeline state at end of cycle 122:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 123:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 124:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF80000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 125:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF80000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00000, 0x7FFFFFFF80000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 126:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80000, 0x7FFFFFFF80000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 127:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF80000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF80000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff00000



Pipeline state at end of cycle 128:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF80000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF80000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff80000



Pipeline state at end of cycle 129:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 130:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 131:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF00000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 132:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF00000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE00000, 0xFFFFFFFF00000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 133:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00000, 0xFFFFFFFF00000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 134:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF00000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe00000



Pipeline state at end of cycle 135:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF00000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff00000



Pipeline state at end of cycle 136:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 137:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 138:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE00000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 139:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE00000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC00000, 0x1FFFFFFFE00000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 140:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE00000, 0x1FFFFFFFE00000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 141:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE00000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc00000



Pipeline state at end of cycle 142:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE00000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe00000



Pipeline state at end of cycle 143:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 144:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 145:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC00000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 146:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC00000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF800000, 0x3FFFFFFFC00000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 147:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC00000, 0x3FFFFFFFC00000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF800000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 148:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC00000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC00000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF800000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff800000



Pipeline state at end of cycle 149:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC00000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC00000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc00000



Pipeline state at end of cycle 150:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 151:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 152:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF800000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 153:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF800000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF000000, 0x7FFFFFFF800000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 154:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF800000, 0x7FFFFFFF800000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 155:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF800000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF800000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff000000



Pipeline state at end of cycle 156:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF800000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF800000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff800000



Pipeline state at end of cycle 157:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 158:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 159:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 160:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE000000, 0xFFFFFFFF000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 161:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF000000, 0xFFFFFFFF000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 162:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe000000



Pipeline state at end of cycle 163:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff000000



Pipeline state at end of cycle 164:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 165:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 166:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 167:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC000000, 0x1FFFFFFFE000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 168:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE000000, 0x1FFFFFFFE000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 169:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc000000



Pipeline state at end of cycle 170:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe000000



Pipeline state at end of cycle 171:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 172:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 173:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 174:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8000000, 0x3FFFFFFFC000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 175:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC000000, 0x3FFFFFFFC000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF8000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 176:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF8000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff8000000



Pipeline state at end of cycle 177:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc000000



Pipeline state at end of cycle 178:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 179:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 180:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF8000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 181:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF8000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0000000, 0x7FFFFFFF8000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 182:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8000000, 0x7FFFFFFF8000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 183:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF8000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF8000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff0000000



Pipeline state at end of cycle 184:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF8000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF8000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff8000000



Pipeline state at end of cycle 185:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 186:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 187:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF0000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 188:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF0000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0000000, 0xFFFFFFFF0000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 189:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF0000000, 0xFFFFFFFF0000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 190:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF0000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFE0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1fffffffe0000000



Pipeline state at end of cycle 191:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF0000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff0000000



Pipeline state at end of cycle 192:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 193:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 194:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFE0000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 195:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFE0000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0000000, 0x1FFFFFFFE0000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 196:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFE0000000, 0x1FFFFFFFE0000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 197:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFE0000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFE0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFC0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffc0000000



Pipeline state at end of cycle 198:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFE0000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFE0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1fffffffe0000000



Pipeline state at end of cycle 199:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 200:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 201:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFC0000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 202:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFC0000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80000000, 0x3FFFFFFFC0000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 203:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFC0000000, 0x3FFFFFFFC0000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFF80000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 204:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFC0000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFC0000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFF80000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff80000000



Pipeline state at end of cycle 205:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFC0000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFC0000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffc0000000



Pipeline state at end of cycle 206:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 207:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 208:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF80000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 209:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFF80000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00000000, 0x7FFFFFFF80000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 210:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFF80000000, 0x7FFFFFFF80000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFF00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 211:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFF80000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFF80000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFF00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffff00000000



Pipeline state at end of cycle 212:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFF80000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFF80000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffff80000000



Pipeline state at end of cycle 213:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 214:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 215:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFF00000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 216:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFF00000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFE00000000, 0xFFFFFFFF00000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 217:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFF00000000, 0xFFFFFFFF00000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFE00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 218:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFF00000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFF00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFE00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffffe00000000



Pipeline state at end of cycle 219:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFF00000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFF00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffff00000000



Pipeline state at end of cycle 220:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 221:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 222:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFE00000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 223:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFE00000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFC00000000, 0xFFFFFFFE00000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 224:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFE00000000, 0xFFFFFFFE00000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFC00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 225:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFE00000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFE00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFC00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffffc00000000



Pipeline state at end of cycle 226:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFE00000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFE00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffffe00000000



Pipeline state at end of cycle 227:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 228:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 229:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFC00000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 230:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFC00000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFF800000000, 0xFFFFFFFC00000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 231:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFC00000000, 0xFFFFFFFC00000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFF800000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 232:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFC00000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFC00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFF800000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffff800000000



Pipeline state at end of cycle 233:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFC00000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFC00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffffc00000000



Pipeline state at end of cycle 234:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 235:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 236:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFF800000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 237:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFF800000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFF000000000, 0xFFFFFFF800000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 238:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFF800000000, 0xFFFFFFF800000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFF000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 239:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFF800000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFF800000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFF000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffff000000000



Pipeline state at end of cycle 240:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFF800000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFF800000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffff800000000



Pipeline state at end of cycle 241:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 242:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 243:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFF000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 244:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFF000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFE000000000, 0xFFFFFFF000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 245:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFF000000000, 0xFFFFFFF000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFE000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 246:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFF000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFF000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFE000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffe000000000



Pipeline state at end of cycle 247:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFF000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFF000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffff000000000



Pipeline state at end of cycle 248:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 249:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 250:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFE000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 251:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFE000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFC000000000, 0xFFFFFFE000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 252:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFE000000000, 0xFFFFFFE000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFC000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 253:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFE000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFE000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFC000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffc000000000



Pipeline state at end of cycle 254:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFE000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFE000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffe000000000



Pipeline state at end of cycle 255:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 256:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 257:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFC000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 258:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFC000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFF8000000000, 0xFFFFFFC000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 259:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFC000000000, 0xFFFFFFC000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFF8000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 260:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFC000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFC000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFF8000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffff8000000000



Pipeline state at end of cycle 261:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFC000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFC000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffc000000000



Pipeline state at end of cycle 262:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 263:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 264:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFF8000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 265:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFF8000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFF0000000000, 0xFFFFFF8000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 266:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFF8000000000, 0xFFFFFF8000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFF0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 267:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFF8000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFF8000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFF0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffff0000000000



Pipeline state at end of cycle 268:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFF8000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFF8000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffff8000000000



Pipeline state at end of cycle 269:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 270:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 271:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFF0000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 272:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFF0000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFE0000000000, 0xFFFFFF0000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 273:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFF0000000000, 0xFFFFFF0000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFE0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 274:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFF0000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFF0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFE0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffe0000000000



Pipeline state at end of cycle 275:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFF0000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFF0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffff0000000000



Pipeline state at end of cycle 276:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 277:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 278:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFE0000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 279:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFE0000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFC0000000000, 0xFFFFFE0000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 280:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFE0000000000, 0xFFFFFE0000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFC0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 281:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFE0000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFE0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFC0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffc0000000000



Pipeline state at end of cycle 282:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFE0000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFE0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffe0000000000



Pipeline state at end of cycle 283:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 284:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 285:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFC0000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 286:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFC0000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFF80000000000, 0xFFFFFC0000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 287:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFC0000000000, 0xFFFFFC0000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFF80000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 288:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFC0000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFC0000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFF80000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffff80000000000



Pipeline state at end of cycle 289:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFC0000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFC0000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffffc0000000000



Pipeline state at end of cycle 290:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 291:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 292:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFF80000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 293:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFF80000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFF00000000000, 0xFFFFF80000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 294:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFF80000000000, 0xFFFFF80000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFF00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 295:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFF80000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFF80000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFF00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffff00000000000



Pipeline state at end of cycle 296:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFF80000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFF80000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffff80000000000



Pipeline state at end of cycle 297:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 298:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 299:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFF00000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 300:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFF00000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFE00000000000, 0xFFFFF00000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 301:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFF00000000000, 0xFFFFF00000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFE00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 302:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFF00000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFF00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFE00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffe00000000000



Pipeline state at end of cycle 303:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFF00000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFF00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffff00000000000



Pipeline state at end of cycle 304:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 305:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 306:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFE00000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 307:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFE00000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFC00000000000, 0xFFFFE00000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 308:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFE00000000000, 0xFFFFE00000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFC00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 309:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFE00000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFE00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFC00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffc00000000000



Pipeline state at end of cycle 310:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFE00000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFE00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffe00000000000



Pipeline state at end of cycle 311:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 312:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 313:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFC00000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 314:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFC00000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFF800000000000, 0xFFFFC00000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 315:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFC00000000000, 0xFFFFC00000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFF800000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 316:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFC00000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFC00000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFF800000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffff800000000000



Pipeline state at end of cycle 317:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFC00000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFC00000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffc00000000000



Pipeline state at end of cycle 318:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 319:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 320:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFF800000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 321:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFF800000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFF000000000000, 0xFFFF800000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 322:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFF800000000000, 0xFFFF800000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFF000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 323:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFF800000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFF800000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFF000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffff000000000000



Pipeline state at end of cycle 324:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFF800000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFF800000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffff800000000000



Pipeline state at end of cycle 325:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 326:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 327:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFF000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 328:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFF000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFE000000000000, 0xFFFF000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 329:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFF000000000000, 0xFFFF000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFE000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 330:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFF000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFF000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFE000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffe000000000000



Pipeline state at end of cycle 331:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFF000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFF000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffff000000000000



Pipeline state at end of cycle 332:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 333:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 334:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFE000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 335:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFE000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFC000000000000, 0xFFFE000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 336:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFE000000000000, 0xFFFE000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFC000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 337:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFE000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFE000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFC000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffc000000000000



Pipeline state at end of cycle 338:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFE000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFE000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffe000000000000



Pipeline state at end of cycle 339:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 340:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 341:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFC000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 342:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFC000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFF8000000000000, 0xFFFC000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 343:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFC000000000000, 0xFFFC000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFF8000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 344:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFC000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFC000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFF8000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfff8000000000000



Pipeline state at end of cycle 345:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFC000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFC000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfffc000000000000



Pipeline state at end of cycle 346:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 347:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 348:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFF8000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 349:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFF8000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFF0000000000000, 0xFFF8000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 350:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFF8000000000000, 0xFFF8000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFF0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 351:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFF8000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFF8000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFF0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfff0000000000000



Pipeline state at end of cycle 352:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFF8000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFF8000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfff8000000000000



Pipeline state at end of cycle 353:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 354:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 355:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFF0000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 356:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFF0000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFE0000000000000, 0xFFF0000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 357:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFF0000000000000, 0xFFF0000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFE0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 358:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFF0000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFF0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFE0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffe0000000000000



Pipeline state at end of cycle 359:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFF0000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFF0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfff0000000000000



Pipeline state at end of cycle 360:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 361:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 362:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFE0000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 363:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFE0000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFC0000000000000, 0xFFE0000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 364:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFE0000000000000, 0xFFE0000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFC0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 365:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFE0000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFE0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFC0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffc0000000000000



Pipeline state at end of cycle 366:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFE0000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFE0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffe0000000000000



Pipeline state at end of cycle 367:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 368:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 369:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFC0000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 370:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFC0000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFF80000000000000, 0xFFC0000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 371:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFC0000000000000, 0xFFC0000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFF80000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 372:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFC0000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFC0000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFF80000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xff80000000000000



Pipeline state at end of cycle 373:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFC0000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFC0000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffc0000000000000



Pipeline state at end of cycle 374:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 375:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 376:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFF80000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 377:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFF80000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFF00000000000000, 0xFF80000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 378:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFF80000000000000, 0xFF80000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFF00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 379:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFF80000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFF80000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFF00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xff00000000000000



Pipeline state at end of cycle 380:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFF80000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFF80000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xff80000000000000



Pipeline state at end of cycle 381:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 382:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 383:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFF00000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 384:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFF00000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFE00000000000000, 0xFF00000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 385:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFF00000000000000, 0xFF00000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFE00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 386:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFF00000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFF00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFE00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfe00000000000000



Pipeline state at end of cycle 387:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFF00000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFF00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xff00000000000000



Pipeline state at end of cycle 388:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 389:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 390:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFE00000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 391:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFE00000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFC00000000000000, 0xFE00000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 392:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFE00000000000000, 0xFE00000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFC00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 393:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFE00000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFE00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFC00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfc00000000000000



Pipeline state at end of cycle 394:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFE00000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFE00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfe00000000000000



Pipeline state at end of cycle 395:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 396:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 397:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFC00000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 398:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFC00000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xF800000000000000, 0xFC00000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 399:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFC00000000000000, 0xFC00000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xF800000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 400:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFC00000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFC00000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xF800000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xf800000000000000



Pipeline state at end of cycle 401:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFC00000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFC00000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xfc00000000000000



Pipeline state at end of cycle 402:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 403:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 404:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xF800000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 405:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xF800000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xF000000000000000, 0xF800000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 406:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xF800000000000000, 0xF800000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xF000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 407:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xF800000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xF800000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xF000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xf000000000000000



Pipeline state at end of cycle 408:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xF800000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xF800000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xf800000000000000



Pipeline state at end of cycle 409:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 410:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 411:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xF000000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 412:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xF000000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xE000000000000000, 0xF000000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 413:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xF000000000000000, 0xF000000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xE000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 414:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xF000000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xF000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xE000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xe000000000000000



Pipeline state at end of cycle 415:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xF000000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xF000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xf000000000000000



Pipeline state at end of cycle 416:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 417:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 418:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xE000000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 419:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xE000000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xC000000000000000, 0xE000000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 420:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xE000000000000000, 0xE000000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xC000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 421:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xE000000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xE000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xC000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xc000000000000000



Pipeline state at end of cycle 422:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xE000000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xE000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xe000000000000000



Pipeline state at end of cycle 423:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 424:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 425:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xC000000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 426:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xC000000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x8000000000000000, 0xC000000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 427:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xC000000000000000, 0xC000000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x8000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 428:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xC000000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xC000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x8000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x8000000000000000



Pipeline state at end of cycle 429:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xC000000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xC000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xc000000000000000



Pipeline state at end of cycle 430:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 431:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 432:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x8000000000000000, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 433:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x8000000000000000, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x8000000000000000, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 434:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x8000000000000000, 0x8000000000000000, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 435:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x8000000000000000, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x8000000000000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 436:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x8000000000000000, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x8000000000000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x8000000000000000



Pipeline state at end of cycle 437:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 438:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 439:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 440:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 441:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 442:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 443:
F: CMP   [PC, insn_bits] = [004000F8,  EB040042], seq_succ_PC: 0x400114, pred_PC: 0x400114, status: AOK
D: NOP   [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PASS_A_OP, cond: NE, dst: X0, status: BUB
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 444:
F: B.cond [PC, insn_bits] = [00400114,  54FFFE81], seq_succ_PC: 0x400118, pred_PC: 0x4000E4, status: AOK
D: CMP   [val_a, val_b, imm] = [0xD, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: NOP   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PASS_A_OP, status: BUB
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 445:
F: ORR   [PC, insn_bits] = [004000E4,  AA0203E1], seq_succ_PC: 0x4000E8, pred_PC: 0x4000E8, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xC, 0xD, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: NOP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: BUB
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 446:
F: ORR   [PC, insn_bits] = [004000E8,  AA0003E3], seq_succ_PC: 0x4000EC, pred_PC: 0x4000EC, status: AOK
D: ORR   [val_a, val_b, imm] = [0x7FFFFFFF8, 0xD, 0x0], alu_op: OR_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xC, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 447:
F: MOVZ  [PC, insn_bits] = [004000EC,  D2800000], seq_succ_PC: 0x4000F0, pred_PC: 0x4000F0, status: AOK
D: ORR   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x0], alu_op: OR_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: ORR   [val_ex, a, b, imm, hw] = [0x7FFFFFFFD, 0x7FFFFFFF8, 0xD, 0x0, 0x0], alu_op: OR_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xC, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xc



Pipeline state at end of cycle 448:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: MOVZ  [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: MOV_OP, cond: NE, dst: X0, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: ORR   [val_ex, a, b, imm, hw] = [0x7FFFFFFF8, 0x7FFFFFFF8, 0x0, 0x0, 0x0], alu_op: OR_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , false]
M: ORR   [val_ex, val_b, val_mem] = [0x7FFFFFFFD, 0xD, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 449:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: MOVZ  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: MOV_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: ORR   [val_ex, val_b, val_mem] = [0x7FFFFFFF8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ORR   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFFD, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffffd



Pipeline state at end of cycle 450:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: MOVZ  [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ORR   [dst, val_ex, val_mem] = [X3, 0x7FFFFFFF8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffff8



Pipeline state at end of cycle 451:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: MOVZ  [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 452:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFF8, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 453:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFFD, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFC00000000, 0x7FFFFFFF8, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 454:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFFD, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFFA, 0x7FFFFFFFD, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFC00000000, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 455:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFFD, 0x7FFFFFFFD, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFFA, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0xFFFFFFFC00000000, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xfffffffc00000000



Pipeline state at end of cycle 456:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFFD, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFFD, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFFA, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffffa



Pipeline state at end of cycle 457:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x1, 0x7FFFFFFFD, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFFD, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffffd



Pipeline state at end of cycle 458:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x1, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 459:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFC00000000, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x1, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1



Pipeline state at end of cycle 460:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFFA, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFC00000000, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 461:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFFA, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFF4, 0xFFFFFFFFA, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 462:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFA, 0xFFFFFFFFA, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFF4, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 463:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFFA, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFA, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFF4, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1ffffffff4



Pipeline state at end of cycle 464:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFFA, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFA, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffa



Pipeline state at end of cycle 465:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x0, 0x1, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 466:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 467:
F: ADDS  [PC, insn_bits] = [00400108,  AB030000], seq_succ_PC: 0x400100, pred_PC: 0x400100, status: AOK
D: NOP   [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PASS_A_OP, cond: NE, dst: X0, status: BUB
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 468:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: ADDS  [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X0, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: NOP   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PASS_A_OP, status: BUB
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 469:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: ADDS  [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: NOP   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: BUB
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 470:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFF4, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: ADDS  [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: NOP   [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: BUB
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 471:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFF4, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFE8, 0x1FFFFFFFF4, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ADDS  [dst, val_ex, val_mem] = [X0, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 472:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x1FFFFFFFF4, 0x1FFFFFFFF4, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x3FFFFFFFE8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 473:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x1FFFFFFFF4, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x1FFFFFFFF4, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x3FFFFFFFE8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x3fffffffe8



Pipeline state at end of cycle 474:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x1FFFFFFFF4, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x1FFFFFFFF4, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x1ffffffff4



Pipeline state at end of cycle 475:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 476:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 477:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x3FFFFFFFE8, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 478:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x3FFFFFFFE8, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x7FFFFFFFD0, 0x3FFFFFFFE8, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 479:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x3FFFFFFFE8, 0x3FFFFFFFE8, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x7FFFFFFFD0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 480:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x3FFFFFFFE8, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x3FFFFFFFE8, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x7FFFFFFFD0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x7fffffffd0



Pipeline state at end of cycle 481:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x3FFFFFFFE8, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x3FFFFFFFE8, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x3fffffffe8



Pipeline state at end of cycle 482:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 483:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 484:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x7FFFFFFFD0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 485:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x7FFFFFFFD0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0xFFFFFFFFA0, 0x7FFFFFFFD0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 486:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0x7FFFFFFFD0, 0x7FFFFFFFD0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0xFFFFFFFFA0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 487:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0x7FFFFFFFD0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0x7FFFFFFFD0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0xFFFFFFFFA0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0xffffffffa0



Pipeline state at end of cycle 488:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0x7FFFFFFFD0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0x7FFFFFFFD0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x7fffffffd0



Pipeline state at end of cycle 489:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 490:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 491:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0xFFFFFFFFA0, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 492:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0xFFFFFFFFA0, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x1FFFFFFFF40, 0xFFFFFFFFA0, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 493:
F: ANDS  [PC, insn_bits] = [004000F0,  EA040026], seq_succ_PC: 0x4000F4, pred_PC: 0x4000F4, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFA0, 0xFFFFFFFFA0, 0x0, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: LSL   [val_ex, val_b, val_mem] = [0x1FFFFFFFF40, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X3, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 494:
F: CMP   [PC, insn_bits] = [004000F4,  EB0400DF], seq_succ_PC: 0x4000F8, pred_PC: 0x4000F8, status: AOK
D: ANDS  [val_a, val_b, imm] = [0xFFFFFFFFA0, 0x1, 0x0], alu_op: AND_OP, cond: NE, dst: X6, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFA0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: LSL   [dst, val_ex, val_mem] = [X1, 0x1FFFFFFFF40, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x1ffffffff40



Pipeline state at end of cycle 495:
F: B.cond [PC, insn_bits] = [004000F8,  54000041], seq_succ_PC: 0x4000FC, pred_PC: 0x400100, status: AOK
D: CMP   [val_a, val_b, imm] = [0x0, 0x1, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: ANDS  [val_ex, a, b, imm, hw] = [0x0, 0xFFFFFFFFA0, 0x1, 0x0, 0x0], alu_op: AND_OP, status: AOK
	 X_condval: false
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFA0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffa0



Pipeline state at end of cycle 496:
F: LSL   [PC, insn_bits] = [00400100,  D37FF863], seq_succ_PC: 0x400104, pred_PC: 0x400104, status: AOK
D: B.cond [val_a, val_b, imm] = [0x0, 0x0, 0x0], alu_op: PLUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: CMP   [val_ex, a, b, imm, hw] = [0xFFFFFFFFFFFFFFFF, 0x0, 0x1, 0x0, 0x0], alu_op: MINUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [true , true]
M: ANDS  [val_ex, val_b, val_mem] = [0x0, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0



Pipeline state at end of cycle 497:
F: LSL   [PC, insn_bits] = [00400104,  D341FC21], seq_succ_PC: 0x400108, pred_PC: 0x400108, status: AOK
D: LSL   [val_a, val_b, imm] = [0x0, 0x0, 0x1F], alu_op: LSL_OP, cond: NE, dst: X3, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: B.cond [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x0, 0x0], alu_op: PLUS_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: CMP   [val_ex, val_b, val_mem] = [0xFFFFFFFFFFFFFFFF, 0x1, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: ANDS  [dst, val_ex, val_mem] = [X6, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true], W_wval: 0x0



Pipeline state at end of cycle 498:
F: CMP   [PC, insn_bits] = [00400108,  EB05003F], seq_succ_PC: 0x40010C, pred_PC: 0x40010C, status: AOK
D: LSL   [val_a, val_b, imm] = [0x1FFFFFFFF40, 0x0, 0x1], alu_op: LSL_OP, cond: NE, dst: X1, status: AOK
	 X_sigs: [valb_sel, set_CC] = [false, false]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, true]
X: LSL   [val_ex, a, b, imm, hw] = [0x0, 0x0, 0x0, 0x1F, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: B.cond [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: CMP   [dst, val_ex, val_mem] = [X32, 0xFFFFFFFFFFFFFFFF, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0xffffffffffffffff



Pipeline state at end of cycle 499:
F: B.cond [PC, insn_bits] = [0040010C,  54FFFF21], seq_succ_PC: 0x400110, pred_PC: 0x4000F0, status: AOK
D: CMP   [val_a, val_b, imm] = [0x1FFFFFFFF40, 0x0, 0x0], alu_op: MINUS_OP, cond: NE, dst: X32, status: AOK
	 X_sigs: [valb_sel, set_CC] = [true , true]
	 M_sigs: [dmem_read, dmem_write] = [false, false]
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false]
X: LSL   [val_ex, a, b, imm, hw] = [0x3FFFFFFFE80, 0x1FFFFFFFF40, 0x0, 0x1, 0x0], alu_op: LSL_OP, status: AOK
	 X_condval: true
	 X_sigs: [valb_sel, set_CC] = [false, false]
M: LSL   [val_ex, val_b, val_mem] = [0x0, 0x0, 0x0], status: AOK
	 M_sigs: [dmem_read, dmem_write] = [false, false]
W: B.cond [dst, val_ex, val_mem] = [X32, 0x0, 0x0], status: AOK
	 W_sigs: [dst_sel, wval_sel, w_enable] = [false, false, false], W_wval: 0x0


Run ended at Thu Apr  6 14:34:48 2023

[1mGoodbye!

[0m