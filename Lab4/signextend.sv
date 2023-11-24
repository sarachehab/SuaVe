module signextend  # (
    parameter   I_WIDTH = 32,
                D_WIDTH = 32
)(
    //input signals
    input logic [I_WIDTH-1 : 0] instr, //instruction
    input logic immsrc, //is B type or I type? if high then I type
    //output immediate
    output logic [D_WIDTH-1 : 0] immop //output immediate in 12 bits
);

always_comb begin
    if(immsrc)
        assign immop = {{20{instr[31]}} , instr[31:20]};
    else
        assign immop = {{19{instr[31]}} , instr[31] , instr[7] , instr[30:25] , instr[11:8] , 1'b0};
end

endmodule
