module execute_stage # (
    parameter   DATA_WIDTH = 32
)(
    input   logic   [DATA_WIDTH-1:0]    rd1_e_i, rd2_e_i, pc_e_i, imm_ext_e_i, result_m_i, result_w_i,
    input   logic   [3:0]               alu_control_e_i,
    input   logic   [1:0]               forward1_e_i, forward2_e_i,
    input   logic                       alu_src_e_i,

    output  logic   [DATA_WIDTH-1:0]    alu_result_e_o, pc_target_e_o, write_data_e_o,
    output  logic                       zero_e_o
);

logic   [DATA_WIDTH-1:0]    src1, src2;

always_comb begin

    case(forward1_e_i)
        2'b00:  src1 = rd1_e_i;
        2'b01:  src1 = result_m_i;
        2'b10:  src1 = result_w_i;
        default: src1 = {DATA_WIDTH{1'b0}};
    endcase

    case(forward2_e_i)
        2'b00:  write_data_e_o = rd2_e_i;
        2'b01:  write_data_e_o = result_m_i;
        2'b10:  write_data_e_o = result_w_i;
        default: write_data_e_o = {DATA_WIDTH{1'b0}};
    endcase

    src2 = alu_src_e_i ? imm_ext_e_i : write_data_e_o;
    pc_target_e_o = pc_e_i + imm_ext_e_i; 

end

alu #(DATA_WIDTH) execute_alu (
    .src1_i(src1),
    .src2_i(src2),
    .alu_control_i(alu_control_e_i),
    .eq_o(zero_e_o),
    .alu_result_o(alu_result_e_o)
);

endmodule

