module signExtend # (
    parameter DATA_WIDTH = 32
)(
    //input signals
    input  logic [INSTRUCT_WIDTH-1:7] instr_i, //instruction
    input  logic [1:0] imm_src_i,
    input logic [DATA_WIDTH-1:0] pc_i,
    //output
    output logic [DATA_WIDTH-1:0] imm_ext_o, //output imm extended into 32 bits
    output logic [DATA_WIDTH-1:0] pc_target_o,
);

always_comb
    case(immsrc)

        //type I
        2'b00: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:20]};
        // type S
        2'b01: imm_ext_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};
        //type B
        2'b10: imm_ext_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; 
        //type Jal
        2'b11: imm_ext_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};
        default: imm_ext_o = 32'b0;

    endcase
    assign pc_target_o = imm_ext_o + pc_i;

endmodule