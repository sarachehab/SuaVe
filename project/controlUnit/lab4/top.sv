module top#(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input  logic clk, rst,
    output logic [DATA_WIDTH-1:0] a0
);

    logic [DATA_WIDTH-1:0] ImmOP, instr, PC;
    logic RegWrite, ALUsrc, Immsrc, PCsrc, EQ;
    logic [ADDRESS_WIDTH-1 : 0] rs1,rs2,rd;
dataPath DATAPATH(
    .clk(clk),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .ImmOp(ImmOP),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .EQ(EQ),
    .a0(a0)
);

controlunit CONTROLUNIT(
    .eq(EQ),
    .instr(instr),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .regwrite(RegWrite),
    .alusrc(ALUsrc),
    .immsrc(Immsrc),
    .pcsrc(PCsrc)
);
signextend SIGNEXTEND(
    .instr(instr),
    .immsrc(Immsrc),
    .immop(ImmOP)
);

instrmem INSTRMEM(
    .A(PC),
    .instr(instr)
);

programcounter PROGRAMCOUNTER(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOP),
    .PC(PC)
);

endmodule
