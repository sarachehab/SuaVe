module alu #(
    parameter DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0] src1_i, src2_i,
    input  logic [3:0]            alu_control_i, // alu_control_i[3]   is funct7[5]
                                                 // alu_control_i[2:0] is funct3[2:0]
    output logic                  eq_o,
    output logic [DATA_WIDTH-1:0] alu_result_o
);

    always_comb begin 
        eq_o = (src1_i == src2_i);
        case (alu_control_i)
            // add
            4'b0000: alu_result_o = src1_i + src2_i;

            // shift left logical
            4'b0001: alu_result_o = src1_i << src2_i[4:0];

            // set less than
            4'b0010: alu_result_o = {{DATA_WIDTH-1{1'b0}}, (src1_i < src2_i)};

            // set less than unsigned
            4'b0011: alu_result_o = {{DATA_WIDTH-1{1'b0}}, ({1'b0, src1_i} < {1'b0, src2_i})};

            // xor
            4'b0100: alu_result_o = src1_i ^ src2_i;

            // shift right logical
            4'b0101: alu_result_o = src1_i >> src2_i[4:0];

            // or 
            4'b0110: alu_result_o = src1_i | src2_i;

            // and
            4'b0111: alu_result_o = src1_i & src2_i;

            // sub
            4'b1000: alu_result_o = src1_i - src2_i;

            // shift right arithmetic 
            4'b1101: alu_result_o = src1_i >>> src2_i[4:0];

            default: alu_result_o = {DATA_WIDTH{1'b0}};
        endcase 
    end

endmodule
