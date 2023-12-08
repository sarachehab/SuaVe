module write_register (
    parameter   DATA_WIDTH = 32,
                REGISTER_WIDTH = 5
)(
    input   logic                           clk,
    input   logic   [DATA_WIDTH-1:0]        alu_result_m_i, pc_plus4_m_i, read_data_m_i,
    input   logic   [REGISTER_WIDTH-1:0]    rd_m_i,
    input   logic   [1:0]                   result_src_m_i
    input   logic                           reg_write_m_i,

    output   logic   [DATA_WIDTH-1:0]        alu_result_w_o, pc_plus4_w_o, read_data_w_o,
    output   logic   [REGISTER_WIDTH-1:0]    rd_w_o,
    output   logic   [1:0]                   result_src_w_o,
    output   logic                           reg_write_w_o

);

always_ff @ (posedge clk) {
    alu_result_w_o <= alu_result_m_i;
    pc_plus4_w_o <= pc_plus4_m_i;
    read_data_w_o <= read_data_m_i;
    rd_w_o <= rd_m_i;
    result_src_w_o <= result_src_m_i;
    reg_write_w_o <= reg_write_m_i; 
}

endmodule

