module controlUnit_top(
    //input signals
    input logic zero,
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic funct7_5,
    //output signal
    output logic JB_instr;
    output logic JALR_instr
    output logic [1:0] result_src,
    output logic mem_write,
    output logic alu_src,
    output logic [2:0] imm_src,
    output logic reg_write,
    output logic [3:0] alu_control,
    output logic byte_address
);
    //internal signals
    logic [1:0] alu_op;
    logic branch;
    logic jmp;

mainDecoder mainDecoder(
    .op_i(op),
    .branch_o(branch),
    .jump_o(jmp),
    .jalr_O(JALR_instr)
    .result_src_o(result_src),
    .mem_write_o(mem_write),
    .alu_src_o(alu_src),
    .imm_src_o(imm_src),
    .reg_write_o(reg_write),
    .alu_op_o(alu_op)
);

aluDecoder aluDecoder(
    .alu_op_i(alu_op),
    .funct3_i(funct3),
    .funct7_b5_i(funct7_5),
    .op_5_i(op_i[5]),
    .alu_control_o(alu_control),
    .byte_address_o(byte_address)
);

assign JB_instr = (zero_i & branch) | jmp;

endmodule

