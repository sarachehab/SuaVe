module signextend  # (
    parameter   I_WIDTH = 32,
                D_WIDTH = 32
)(
    //input signals
    input logic [I_WIDTH-1 : 7] instr, //instruction
    input logic[1:0] immsrc,
    //output immediate
    output logic [D_WIDTH-1 : 0] immext //output imm extended into 32 bits
);

always_comb
    case(immsrc)
    //type I
    2'b00: immext= {{20{instr[31]}} , instr[31:20]};
    // type S
    2b'01: immext = {20instr[31], instr[31:25], instr[11:7]};
    //type B
    2b'10: immext = {{20{instr[31]}} , instr[7] , instr[30:25] , instr[11:8] , 1'b0}; 
    //type Jal
    2b'11: immext = {12'instr[31], instr[19:12], instr[20], instr[30:21], 1b'0};

    defualt: immext = 31'b0;
    endcase
endmodule
