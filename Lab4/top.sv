module top#(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input  logic clk, rst,
    output logic a0,
);

    logic [DATA_WIDTH-1:0] branch_PC, inc_PC, ImmOP, instr, PC;
    logic RegWrite, ALUctrl, ALUsrc, Immsrc, PCsrc, EQ;
    logic [ADDRESS_WIDTH-1 : 0] rs1,rs2,rd;
dataPath DATAPATH(
    .AD1(rs1),
    .AD2(rs2),
    .AD3(rd),
    .WD3(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .EQ(EQ),
    .a0(a0)
);

controlunit CONTROLUNIT(
    .EQ(EQ),
    .instr(instr),
    .eq(EQ),
    .rs1(rs1),
    rs2(rs2),
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
