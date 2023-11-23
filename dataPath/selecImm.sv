module selecImm #(
    parameter DATA_WIDTH = 32
)(
    input logic ALUsrc,
    input logic [DATA_WIDTH-1:0] regOp2, ImmOp,
    output logic [DATA_WIDTH-1:0] ALUop2
);

always_comb begin
    if (ALUsrc) ALUop2 = ImmOp;
    else ALUop2 = regOp2;
end

endmodule

