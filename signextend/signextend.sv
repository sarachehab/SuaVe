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
    if(instr[31])begin
        if(immsrc)
            assign immop = {20'hfffff , instr[31:20]};
        else
            assign immop = {19'h7ffff , instr[31] , instr[7] , instr[30:25] , instr[11:8] , 1'h0};
    end
    else begin
        if(immsrc)
            assign immop = {20'h0 , instr[31:20]};
        else
            assign immop = {19'h0 , instr[31] , instr[7] , instr[30:25] , instr[11:8] , 1'h0};
    end
end
endmodule

