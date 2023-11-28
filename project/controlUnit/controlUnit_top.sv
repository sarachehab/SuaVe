module controlUnit_top(
    //input signals
    input logic zero,
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic funct7_5,
    //output signal
    output logic PCSrc,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc,
    output logic [1:0] ImmSrc,
    output logic RegWrite,
    output logic [2:0] ALUControl
);
    //internal signals
    logic [1:0] ALUOp;
    logic Branch;
    logic jmp;

mainDecoder mainDecoder(
    .op(op),
    .branch(Branch),
    .jump(jmp),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .ALUOp(ALUOp)
);

aluDecoder aluDecoder(
    .ALUOp(ALUOp),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .op_5(op[5]),
    .ALUControl(ALUControl)
);

//only assert PCSrc if Alu determines if two values are equal and branch instruction is requested
//also this is or-ed with jump since PCSrc could also be asserted if jump intruction is requested
assign PCSrc = ((zero & Branch) | jmp);

endmodule
