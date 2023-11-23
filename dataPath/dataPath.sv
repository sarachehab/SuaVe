module dataPath#(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input  logic clk, RegWrite, ALUsrc,
    input  logic [DATA_WIDTH-1:0] rs1, rs2, rd,
    input  logic [DATA_WIDTH-1:0] ImmOp,
    output logic [DATA_WIDTH-1:0] a0,
    output logic EQ
);

logic [DATA_WIDTH-1:0] ALUop1, ALUop2;

regFile rf(
    .AD1(rs1),
    .AD2(rs2),
    .AD3(rd),
    .WE3(RegWrite),
    .WD3(WD3), 
    .WD3(ALUout),
    .clk(clk),
    .RD1(ALUop1),
    .RD2(ALUop2),
    .a0(a0) //a0 needs to be connected to WD3
);

alu opAlu(
    .ALUop1(ALUop1),
    .ALUop2(ALUsrc ? ALUop2 : ImmOp),
    .SUM(ALUout),
    .EQ(EQ)
);

selecImm opSelec(
    .ALUsrc(ALUsrc),
    .regOp2(regOp2),
    .ImmOp(ImmOp),
    .ALUop2(ALUop2)
);
endmodule
