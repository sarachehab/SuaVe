module controlunit #(
    parameter   I_WIDTH = 32,
                A_WIDTH = 5
)(
    //inputs:
    input logic [I_WIDTH-1 : 0] instr, //intsruction word
    input logic eq, //reads output from ALU
    //register addresses:
    output logic [A_WIDTH-1 : 0] rs1, // input register 1
    output logic [A_WIDTH-1 : 0] rs2, //input register 2
    output logic [A_WIDTH-1 : 0] rd, //destination register
    //control signals:
    output logic regwrite, //write enable for register file
    output logic alusrc,  //source control for ALU whether it should use register data or immediate data
    output logic immsrc, //decides how to construct the immediate...whether it is from branch or imm type operation
    output logic pcsrc //whether we jump or not (is eq signal high or low?)
);
//register address outputs
assign rs1 = instr[19:15];
assign rs2 = instr[24:20];
assign rd = instr[11:7];
//control signals
assign regwrite = ! instr[6];
assign alusrc = ! instr[5];
assign immsrc = ! instr[6]; // if high then I type else B type 
assign pcsrc = ! eq;

endmodule
