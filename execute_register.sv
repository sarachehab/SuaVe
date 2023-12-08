module execute_register (
    parameter   DATA_WIDTH = 32,
                REGISTER_WIDTH = 5
)(
    input   logic                           clk,
    input   logic   [DATA_WIDTH-1:0]        rd1_d_i, rd2_d_i, pc_d_i, ext_imm_d_i, pc_d_i, pc_plus4_d_i,
    input   logic   [REGISTER_WIDTH-1:0]    rs1_d_i, rs2_d_i, rd_d_i,
    input   logic   [3:0]                   alu_control_d_i,
    input   logic   [1:0]                   result_src_d_i,
    input   logic                           rst_i, reg_write_d_i, result_src_d_i, mem_write_d_i, jump_d_i, branch_d_i, alu_src_d_i, byte_op_d_i,

    output   logic   [DATA_WIDTH-1:0]        rd1_e_o, rd2_e_o, pc_e_o, ext_imm_e_o, pc_e_o, pc_plus4_e_o,
    output   logic   [REGISTER_WIDTH-1:0]    rs1_e_o, rs2_e_o, rd_e_o,
    output   logic   [3:0]                   alu_control_e_o,
    output   logic   [1:0]                   result_src_e_o,
    output   logic                           reg_write_e_o, mem_write_e_o, jump_e_o, branch_e_o, alu_src_e_o, byte_op_d_i
);

always_ff @ (posedge clk) begin
    case (rst)
        1'b0: begin
            rd1_e_o <= rd1_d_i;
            rd2_e_o <= rd2_d_i;
            pc_e_o <= pc_d_i; 
            ext_imm_e_o <= ext_imm_d_i;
            pc_e_o <= pc_d_i;
            pc_plus4_e_o <= pc_plus4_d_i;

            rs1_e_o <= rs1_d_i;
            rs2_e_o <= rs2_d_i;
            rd_e_o <= rd_d_i;

            alu_control_e_o <= alu_control_d_i;
            result_src_e_o <= result_src_d_i;

            reg_write_e_o <= reg_write_d_i;
            result_src_e_o <= result_src_d_i;
            mem_write_e_o <= mem_write_d_i;
            jump_e_o <= jump_d_i;
            branch_e_o <= branch_d_i;
            alu_src_e_o <= alu_src_d_i;
            byte_op_e_o <= byte_op_d_i;
        end
        1'b1: 
            rd1_e_o <= {DATA_WIDTH{1'b0}};
            rd2_e_o <= {DATA_WIDTH{1'b0}};
            pc_e_o <= {DATA_WIDTH{1'b0}}; 
            ext_imm_e_o <= {DATA_WIDTH{1'b0}};
            pc_e_o <= {DATA_WIDTH{1'b0}};
            pc_plus4_e_o <= {DATA_WIDTH{1'b0}};

            rs1_e_o <= {REGISTER_WIDTH{1'b0}};
            rs2_e_o <= {REGISTER_WIDTH{1'b0}};
            rd_e_o <= {REGISTER_WIDTH{1'b0}};

            alu_control_e_o <= 4'b0;
            result_src_e_o <= 2'b0;

            reg_write_e_o <= 1'b0;
            result_src_e_o <= 1'b0;
            mem_write_e_o <= 1'b0;
            jump_e_o <= 1'b0;
            branch_e_o <= 1'b0;
            alu_src_e_o <= 1'b0;
            byte_op_e_o <= 1'b0;
    endcase
end

endmodule

