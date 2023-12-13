module memory_register # (
    parameter   DATA_WIDTH = 32,
                REGISTER_WIDTH = 5
)(
    input   logic                           clk,
    input   logic   [DATA_WIDTH-1:0]        alu_result_e_i, write_data_e_i, pc_plus4_e_i, imm_ext_e_i,
    input   logic   [REGISTER_WIDTH-1:0]    rd_e_i,
    input   logic   [1:0]                   result_src_e_i,
    input   logic                           reg_write_e_i, mem_write_e_i, byte_op_e_i,

    output   logic   [DATA_WIDTH-1:0]        alu_result_m_o, write_data_m_o, pc_plus4_m_o, imm_ext_m_o,
    output   logic   [REGISTER_WIDTH-1:0]    rd_m_o,
    output   logic   [1:0]                   result_src_m_o,
    output   logic                           reg_write_m_o, mem_write_m_o, byte_op_m_o

);

always_ff @ (posedge clk) begin
    result_src_m_o <= result_src_e_i;
    reg_write_m_o <= reg_write_e_i;
    mem_write_m_o <= mem_write_e_i;
    byte_op_m_o <= byte_op_e_i;

    alu_result_m_o <= alu_result_e_i;
    write_data_m_o <= write_data_e_i;

    imm_ext_m_o <= imm_ext_e_i;
    pc_plus4_m_o <= pc_plus4_e_i;
    rd_m_o <= rd_e_i;
end

endmodule

