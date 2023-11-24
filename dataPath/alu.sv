module alu #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32,
)(
    input  logic [DATA_WIDTH-1:0] ALUop1, ALUop2,
    output logic [DATA_WIDTH-1:0] SUM,
    output logic EQ
);

assign SUM = ALUop1 + ALUop2;
assign EQ = ALUop1 == ALUop2;

endmodule

