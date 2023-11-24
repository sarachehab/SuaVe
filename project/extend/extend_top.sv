module signextend  # (
    parameter   I_WIDTH = 32,
                D_WIDTH = 32
)(
    //input signals
    input logic [I_WIDTH-1 : 0] instr, //instruction
    input logic[1:0] immsrc, //is B type or I type? if high then I type
    //output immediate
    output logic [D_WIDTH-1 : 0] immOp //output immediate in 12 bits
);

always_comb begin
    if(immsrc==00) //type I
        assign immOp = {{20{instr[31]}} , instr[31:20]};
    if
    if(immsrc==01)  //type s
    assign immOp = {19b'1, instr[31:25], instr[11:7]};
    
    if(immsrc==10)  //type b
        assign immOp = {{20{instr[31]}} , instr[7] , instr[30:25] , instr[11:8] , 1'b0}; 

    if(immsrc==11) //type j
        assign immOp = {12'instr[31], instr[19:12], instr[20], instr[30:21], 1b'0};
end


endmodule