module control_unit(
    //input signals
    input   logic               zero_i,
    input   logic [6:0]         op_i,
    input   logic [2:0]         funct3_i,
    input   logic               funct7_5_i,
    //output signal
    output logic                jump_o,
    output logic                branch_o
    output logic                jalr_o,
    output logic [1:0]          result_src_o,
    output logic                mem_write_o,
    output logic                alu_src_o,
    output logic [2:0]          imm_src_o,
    output logic                reg_write_o,
    output logic [3:0]          alu_control_o,
    output logic                byte_address_o
);
    //internal signals
    logic [1:0] alu_op;

main_decoder mainDecoder(
    .op_i(op_i),
    .branch_o(branch_o),
    .jump_o(jump_o),
    .jalr_o(jalr_o),
    .result_src_o(result_src_o),
    .mem_write_o(mem_write_o),
    .alu_src_o(alu_src_o),
    .imm_src_o(imm_src_o),
    .reg_write_o(reg_write_o),
    .alu_op_o(alu_op)
);

alu_decoder aluDecoder(
    .alu_op_i(alu_op),
    .funct3_i(funct3_i),
    .funct7_b5_i(funct7_5_i),
    .op_5_i(op_i[5]),
    .alu_control_o(alu_control_o),
    .byte_address_o(byte_address_o)
);

endmodule

