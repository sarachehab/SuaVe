module pc # (
    parameter PC_WIDTH = 32
)(
    input                           clk, jump_taken_i, rst_i, en_i, jalr_instr_i,
    input   logic   [PC_WIDTH-1:0]  imm_ext_i, jta_jalr_i,
    output  logic   [PC_WIDTH-1:0]  pc_o, pc_plus4_o
);

    logic [PC_WIDTH-1:0] pc_next;

    initial begin 
        pc_next = 32'hBFC00000;
    end

    always_ff @ (posedge clk_i) begin
        if (rst_i)  pc_next <= 32'hBFC00000;
        else begin
            if (en_i)
                case (jalr_instr_i)
                    1'b0: pc_next <= jump_taken_i ?  (pc_next + imm_ext_i) : (pc_next + 32'd4);
                    1'b1: pc_next <= jta_jalr_i;
                endcase
        end
        
    end 

    assign pc_o = pc_next;
    assign pc_plus4_o = pc_o + 32'd4;

endmodule

