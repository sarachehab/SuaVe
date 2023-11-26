module Extend # (
    parameter  DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:7] Instr, //Instruction ommiting OpCode (last 7 bits)
    input  logic [1:0] ImmSrc,
    output logic [DATA_WIDTH-1:0] ImmExt //output imm extended into 32 bits
);

always_comb
    case(ImmSrc)
        //type I
        2'b00: ImmExt = {{20{Instr[31]}}, Instr[31:20]};
        // type S
        2'b01: ImmExt = {{20{Instr[31]}}, Instr[31:25], Instr[11:7]};
        //type B
        2'b10: ImmExt = {{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0}; 
        //type Jal
        2'b11: ImmExt = {{12{Instr[31]}}, Instr[19:12], Instr[20], Instr[30:21], 1'b0};
        default: ImmExt = {DATA_WIDTH{1b'0}};
    endcase
endmodule