/*module data_path #(

)(

);

endmodule
*/
module datapath # (
    parameter   REG_ADDR_LENGTH = 5,
                DATA_WIDTH = 32,
                BYTE_WIDTH = 8
)(
    input   logic   clk_i,

    input   logic   [REG_ADDR_LENGTH-1:0]   reg_addr1_i, reg_addr2_i, reg_addr3_i,
    input   logic                           reg_we_i,
    input   logic   [1:0]                   result_src_i,
    input   logic   [DATA_WIDTH-1:0]        imm_ext_i, pc_next_i,
    input   logic                           data_mem_we_i, data_mem_byte_op_i,
    input   logic   [3:0]                   alu_control_i, 
    input   logic                           alu_src_i,
    output  logic                           eq_o,
    output  logic    [DATA_WIDTH-1:0]       a0_o

);

    logic   [DATA_WIDTH-1:0]    reg_rd1;
    logic   [DATA_WIDTH-1:0]    reg_rd2;
    logic   [DATA_WIDTH-1:0]    alu_result;
    logic   [DATA_WIDTH-1:0]    data_mem_rd;
    logic   [DATA_WIDTH-1:0]    reg_wd;

    always_comb begin
        case (result_src_i)
            2'b00: reg_wd = alu_result;     // R and I type instructions
            2'b01: reg_wd = data_mem_rd;    // load instruction
            2'b11: reg_wd = pc_next_i;      // JAL instruction
            default: reg_wd = {DATA_WIDTH{1'b0}};   // including store instruction
        endcase
    end

    register_file #(REG_ADDR_LENGTH, DATA_WIDTH) datapath_register_file (
        .clk_i(clk_i),
        .addr1_i(reg_addr1_i),
        .addr2_i(reg_addr2_i),
        .addr3_i(reg_addr3_i),
        .addr3_we_i(reg_we_i),
        .addr3_wd_i(reg_wd),
        .rd1_o(reg_rd1),
        .rd2_o(reg_rd2),
        .a0_o(a0_o)
    );

    alu #(DATA_WIDTH) datapath_alu (
        .src1_i(reg_rd1),
        .src2_i(alu_src_i ? imm_ext_i : reg_rd2),
        .alu_control_i(alu_control_i),
        .eq_o(eq_o),
        .alu_result_o(alu_result)
    );

    data_memory #(DATA_WIDTH, BYTE_WIDTH) datapath_data_memory (
        .clk_i(clk_i),
        .we_i(data_mem_we_i),
        .byte_op_i(data_mem_byte_op_i),
        .wd_i(reg_rd2),
        .addr_i(alu_result),
        .rd_o(data_mem_rd)
    );

endmodule