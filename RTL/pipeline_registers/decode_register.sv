module decode_register # (
    parameter DATA_WIDTH = 32
)(
    input   logic                       clk,
    input   logic   [DATA_WIDTH-1:0]    instr_f_i, pc_f_i, pc_plus4_f_i,
    input   logic                       rst_i, en_i,
    output  logic   [DATA_WIDTH-1:0]    instr_d_o, pc_d_o, pc_plus4_d_o
);

always_ff @ (posedge clk) begin
    case (rst_i)
        1'b0: begin
            if (en_i) begin
                instr_d_o <= instr_f_i;
                pc_d_o <= pc_f_i;
                pc_plus4_d_o <= pc_plus4_f_i;
            end
        end
        1'b1: begin    
            instr_d_o <= {DATA_WIDTH{1'b0}};
            pc_d_o <= {DATA_WIDTH{1'b0}};
            pc_plus4_d_o <={DATA_WIDTH{1'b0}};
        end
    endcase
end

endmodule

