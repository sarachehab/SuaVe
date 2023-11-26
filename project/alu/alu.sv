module alu #(
    parameter DATA_WIDTH = 32
)(
    input  logic [2:0]            alu_control_i,
    input  logic [DATA_WIDTH-1:0] src1_i, src2_i,
    output logic                  eq_o
    output logic [DATA_WIDTH-1:0] alu_result_o,
);

    always_comb begin 
        eq_o = (src1_i == src2_i);
        case (alu_control_i)
            // add
            3'b000:  alu_result_o = src1_i + src2_i;
            // subtract
            3'b001:  alu_result_o = src1_i - src2_i;
            // and
            3'b010:  alu_result_o = src1_i & src2_i;
            // or
            3'b011:  alu_result_o = src1_i | src2_i;
            // SLT
            3'b101:  alu_result_o = {{DATA_WIDTH-1{1'b0}}, (src1_i < src2_i)};
            default: alu_result_o = {DATA_WIDTH{1'b0}};
        endcase 
    end

endmodule
