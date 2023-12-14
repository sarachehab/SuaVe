module cpu #(
    parameter   DATA_WIDTH = 32,
                REG_ADDR_LENGTH = 5
)(
    input   logic                   clk,
    input   logic                   rst, trigger,
    output  logic [DATA_WIDTH-1:0]  a0
);

// FETCH STAGE

logic   [DATA_WIDTH-1:0]    pc_f, pc_plus4_f, instr_f;

pc #(DATA_WIDTH) pipeline_program_counter (
    .clk(clk),
    .rst_i(rst),
    .en_i(~stall_f),
    .jalr_e_i(jalr_e),
    .jb_taken_e_i(jb_taken_e),
    .jta_jalr_e_i(alu_result_e),
    .pc_target_e_i(pc_target_e),
    .pc_f_o(pc_f),
    .pc_plus4_f_o(pc_plus4_f)
);

instruction_memory pipeline_instruction_memory (
    .addr_f_i(pc_f),
    .instr_f_o(instr_f)
);


// DECODE STAGE

logic   [DATA_WIDTH-1:0]        pc_d, pc_plus4_d, instr_d, rd1_d, rd2_d, imm_ext_d;
logic   [REG_ADDR_LENGTH-1:0]   rs1_d, rs2_d, rd_d;
logic   [3:0]                   alu_control_d;
logic   [2:0]                   imm_src_d;
logic   [1:0]                   result_src_d;
logic                           jump_d, branch_d, jalr_d, mem_write_d, alu_src_d, reg_write_d, byte_op_d, memory_d;

decode_register #(DATA_WIDTH) pipeline_decode_register (
    .clk(clk),
    .rst_i(flush_d|rst), 
    .en_i(~stall_d),
    .instr_f_i(instr_f), 
    .pc_f_i(pc_f), 
    .pc_plus4_f_i(pc_plus4_f),
    .instr_d_o(instr_d), 
    .pc_d_o(pc_d), 
    .pc_plus4_d_o(pc_plus4_d)
);

control_unit pipeline_control_unit (
    .op_i(instr_d[6:0]),
    .funct3_i(instr_d[14:12]),
    .funct7_5_i(instr_d[30]),
    .jump_o(jump_d),
    .branch_o(branch_d),
    .jalr_o(jalr_d),
    .result_src_o(result_src_d),
    .mem_write_o(mem_write_d),
    .alu_src_o(alu_src_d),
    .imm_src_o(imm_src_d),
    .reg_write_o(reg_write_d),
    .alu_control_o(alu_control_d),
    .byte_address_o(byte_op_d),
    .memory_o(memory_d)
);

register_file #(REG_ADDR_LENGTH, DATA_WIDTH) pipeline_register_file (
    .clk(clk), 
    .addr3_we_i(reg_write_w),
    .trigger_i(trigger),
    .addr1_i(rs1_d),
    .addr2_i(rs2_d),
    .addr3_i(rd_w),
    .addr3_wd_i(result_w),
    .rd1_o(rd1_d),
    .rd2_o(rd2_d),
    .a0_o(a0)
);

extend_unit #(DATA_WIDTH) pipeline_extend_unit (
    .instr_i(instr_d[31:7]),
    .imm_src_i(imm_src_d),
    .imm_ext_o(imm_ext_d)
);


// EXECUTE STAGE

logic   [DATA_WIDTH-1:0]        rd1_e, rd2_e, imm_ext_e, pc_e, pc_plus4_e, alu_result_e, pc_target_e, write_data_e;
logic   [REG_ADDR_LENGTH-1:0]   rs1_e, rs2_e, rd_e;
logic   [3:0]                   alu_control_e;
logic   [1:0]                   result_src_e;
logic                           reg_write_e, mem_write_e, jump_e, branch_e, jalr_e, alu_src_e, byte_op_e, zero_e, memory_e;

execute_register #(DATA_WIDTH, REG_ADDR_LENGTH) pipeline_execute_register (
    .clk(clk),
    .rst_i(flush_e|rst),
    .rd1_d_i(rd1_d),
    .rd2_d_i(rd2_d),
    .ext_imm_d_i(imm_ext_d),
    .pc_d_i(pc_d),
    .pc_plus4_d_i(pc_plus4_d),
    .rs1_d_i(rs1_d),
    .rs2_d_i(rs2_d),
    .rd_d_i(rd_d),
    .alu_control_d_i(alu_control_d),
    .result_src_d_i(result_src_d),
    .reg_write_d_i(reg_write_d),
    .mem_write_d_i(mem_write_d),
    .jump_d_i(jump_d),
    .jalr_d_i(jalr_d),
    .branch_d_i(branch_d),
    .alu_src_d_i(alu_src_d), 
    .byte_op_d_i(byte_op_d),
    .memory_d_i(memory_d),
    .rd1_e_o(rd1_e),
    .rd2_e_o(rd2_e), 
    .ext_imm_e_o(imm_ext_e),
    .pc_e_o(pc_e),
    .pc_plus4_e_o(pc_plus4_e),
    .rs1_e_o(rs1_e),
    .rs2_e_o(rs2_e),
    .rd_e_o(rd_e),
    .alu_control_e_o(alu_control_e),
    .result_src_e_o(result_src_e),
    .reg_write_e_o(reg_write_e),
    .mem_write_e_o(mem_write_e),
    .jump_e_o(jump_e),
    .branch_e_o(branch_e),
    .jalr_e_o(jalr_e),
    .alu_src_e_o(alu_src_e), 
    .byte_op_e_o(byte_op_e),
    .memory_e_o(memory_e)
);

execute_stage #(DATA_WIDTH) pipeline_execute_stage (
    .rd1_e_i(rd1_e),
    .rd2_e_i(rd2_e),
    .pc_e_i(pc_e),
    .imm_ext_e_i(imm_ext_e),
    .result_m_i(result_m),
    .result_w_i(result_w),
    .alu_control_e_i(alu_control_e),
    .forward1_e_i(forward1_e), 
    .forward2_e_i(forward2_e),
    .alu_src_e_i(alu_src_e),
    .alu_result_e_o(alu_result_e), 
    .pc_target_e_o(pc_target_e),
    .write_data_e_o(write_data_e),
    .zero_e_o(zero_e)
);


// MEMORY STAGE

logic   [DATA_WIDTH-1:0]        alu_result_m, result_m, write_data_m, pc_plus4_m, imm_ext_m, read_data_m;
logic   [REG_ADDR_LENGTH-1:0]   rd_m;
logic   [1:0]                   result_src_m;
logic                           reg_write_m, mem_write_m, byte_op_m , memory_m;

memory_register #(DATA_WIDTH, REG_ADDR_LENGTH) pipeline_memory_register (
    .clk(clk),
    .rst_i(rst),
    .alu_result_e_i(alu_result_e),
    .write_data_e_i(write_data_e),
    .pc_plus4_e_i(pc_plus4_e),
    .imm_ext_e_i(imm_ext_e),
    .rd_e_i(rd_e),
    .result_src_e_i(result_src_e),
    .reg_write_e_i(reg_write_e),
    .mem_write_e_i(mem_write_e),
    .byte_op_e_i(byte_op_e),
    .memory_e_i(memory_e),
    .alu_result_m_o(alu_result_m),
    .write_data_m_o(write_data_m),
    .pc_plus4_m_o(pc_plus4_m),
    .imm_ext_m_o(imm_ext_m),
    .rd_m_o(rd_m),
    .result_src_m_o(result_src_m),
    .reg_write_m_o(reg_write_m),
    .mem_write_m_o(mem_write_m),
    .byte_op_m_o(byte_op_m),
    .memory_m_o(memory_m)
);

data_memory cache_data_memory(
    .clk(clk),
    .memory_instruction_i(memory_m), 
    .write_enable_i(mem_write_m),
    .byte_op_i(byte_op_m),
    .address_i(alu_result_m), 
    .write_data_i(write_data_m),
    .rd_o(read_data_m)
);

// WRITE STAGE

logic   [DATA_WIDTH-1:0]        alu_result_w, pc_plus4_w, read_data_w, imm_ext_w, result_w;
logic   [REG_ADDR_LENGTH-1:0]   rd_w;
logic   [1:0]                   result_src_w;
logic                           reg_write_w;

write_register #(DATA_WIDTH, REG_ADDR_LENGTH) pipeline_write_register (
    .clk(clk),
    .rst_i(rst),
    .alu_result_m_i(alu_result_m),
    .pc_plus4_m_i(pc_plus4_m),
    .read_data_m_i(read_data_m),
    .imm_ext_m_i(imm_ext_m),
    .rd_m_i(rd_m),
    .result_src_m_i(result_src_m),
    .reg_write_m_i(reg_write_m),
    .alu_result_w_o(alu_result_w),
    .pc_plus4_w_o(pc_plus4_w),
    .read_data_w_o(read_data_w),
    .imm_ext_w_o(imm_ext_w),
    .rd_w_o(rd_w),
    .result_src_w_o(result_src_w),
    .reg_write_w_o(reg_write_w)
);

always_comb begin

    rs1_d = instr_d[19:15];
    rs2_d = instr_d[24:20];
    rd_d = instr_d[11:7];

    case (result_src_w)
        2'b00:  result_w = alu_result_w;    // R and I type instructions
        2'b01:  result_w = read_data_w;     // load instruction
        2'b10:  result_w = pc_plus4_w;      // JAL instruction
        2'b11:  result_w = imm_ext_w;       // U instruction
    endcase

    jb_taken_e = ((~zero_e) & branch_e) | jump_e;

    result_m = result_src_m[0] ? imm_ext_m : alu_result_m;

end

// DATA-HAZARD UNIT

logic   [1:0]   forward1_e, forward2_e;
logic           stall_f, stall_d, flush_d, flush_e, jb_taken_e;

hazard_unit #(REG_ADDR_LENGTH) pipeline_hazard_unit (
    .rs1_d_i(rs1_d),
    .rs2_d_i(rs2_d),
    .rs1_e_i(rs1_e),
    .rs2_e_i(rs2_e),
    .rd_e_i(rd_e),
    .rd_m_i(rd_m),
    .rd_w_i(rd_w),
    .result_src_e_i(result_src_e),
    .jb_taken_e_i(jb_taken_e),
    .jalr_e_i(jalr_e),
    .reg_write_m_i(reg_write_m),
    .reg_write_w_i(reg_write_w),
    .stall_f_o(stall_f),
    .stall_d_o(stall_d),
    .flush_d_o(flush_d),
    .flush_e_o(flush_e),
    .forward1_e_o(forward1_e),
    .forward2_e_o(forward2_e)
);

endmodule



