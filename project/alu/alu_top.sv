module alu_top#(
    parameter DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0] src1, src2,
    input  logic [2:0] aluctrl,
    output logic [DATA_WIDTH-1:0] aluresult,
    output logic eq
);

always_comb begin 
    eq = src1 == src2;
    case (aluctrl)
        // add
        000: aluresult = src1 + src2;
        // subtract
        001: aluresult = src1 - src2;
        // and
        010: aluresult = src1 & src2;
        // or
        011: aluresult = src1 | src2;
        // SLT
        101: aluresult = src2 - src1;
        default: aluresult = DATA_WIDTH'b0;
    endcase 
end

endmodule
