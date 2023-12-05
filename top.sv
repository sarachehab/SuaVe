module RISCV32I #(
    parameter DATA_WIDTH = 32
    

)(
    input logic clk, rst,
    output logic [DATA_WIDTH-1:0] a0
);


    logic   clk, rst, branch_ex, jump_ex, mem_write, alu_src, reg_write, byte_address, zero;
    logic [DATA_WIDTH-1:0] instr, pc, pc_plus_4, rs1_plus_imm, imm_ext; 
    logic [1:0] result_src; 
    logic [2:0] imm_src; //modfify that immsrc is 3 bits in controlunit top file------> done
    logic [3:0] alu_control; //make sure in new controlpath top file alucontrol is 4 bits -----  done
//need to change jump_o of controlunit to 1 bit
controlUnit_top controlUnit_top(
    .op_i(instr[6:0]),
    .funct3_i(instr[14:12]),
    .zero_i(zero),
    .branch_o(branch_ex),
    .jump_o(jump_ex),
    .result_src_o(result_src),
    .mem_write_o(mem_write),
    .alu_src_o(alu_src),
    .imm_src_o(imm_src),
    .reg_write_o(reg_write),
    .alu_control_o(alu_control),
    byte_address_o(byte_address)
    
);

datapath datapath(
    .reg_addr1_i(instr[19:15]),
    .reg_addr2_i(instr[24:20]),
    reg_addr3_i(instr[11:7]),
    .reg_we_i(reg_write),
    .result_src_i(result_src),
    .imm_ext_i(imm_ext),
    .pc_next_i(pc_plus_4),
    .data_mem_we_i(mem_write),
    .alu_control_i(alu_control),
    .alu_src_i(alu_src)
    .eq_o(zero),
    .a0_o(a0)
);

extend_unit extend_unit(
    .instr_i(instr[31:7]),
    .imm_src_i(imm_src),
    .imm_ext_o(imm_ext)

);

instruction_memory instruction_memory(
    .addr_i(pc),
    .instr_o(instr)
);

pc pc(
    .clk_i(clk),
    .jump_taken_i(branch_ex),
    .rst_i(rst),
    .jalr__instr_i(jump_ex),
    .
)
endmodule