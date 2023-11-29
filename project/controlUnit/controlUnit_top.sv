module controlUnit_top(
    //input signals
    input logic zero_i,
    input logic [6:0] op_i,
    input logic [2:0] funct3_i,
    input logic funct7_b5_i,
    //output signal
    output logic pc_src_o,
    output logic [1:0] result_src_o,
    output logic mem_write_o,
    output logic alu_src_o,
    output logic [1:0] imm_src_o,
    output logic reg_write_o,
    output logic [2:0] alu_control_o
);
    //internal signals
    logic [1:0] alu_op;
    logic branch;
    logic jmp;

mainDecoder mainDecoder(
    .op_i(op_i),
    .branch_o(branch),
    .jump_o(jmp),
    .result_src_o(result_src_o),
    .mem_write_o(mem_write_o),
    .alu_src_o(alu_src_o),
    .imm_src_o(imm_src_o),
    .reg_write_o(reg_write_o),
    .alu_op_o(alu_op)
);

aluDecoder aluDecoder(
    .alu_op_i(alu_op),
    .funct3_i(funct3_i),
    .funct7_b5_i(funct7_b5_i),
    .op_5_i(op_i[5]),
    .alu_control_o(alu_control_o)
);

//only assert pc_src_o if Alu determines if two values are equal and branch instruction is requested
//also this is or-ed with jump since pc_src_o could also be asserted if jump intruction is requested
assign pc_src_o = ((zero_i & branch) | jmp);

endmodule
