module pc # (
    parameter PC_WIDTH = 32
)(
    input                           clk, rst_i, en_i, jalr_e_i, jb_taken_e_i,
    input   logic   [PC_WIDTH-1:0]  jta_jalr_e_i, pc_target_e_i,
    output  logic   [PC_WIDTH-1:0]  pc_f_o, pc_plus4_f_o
);

    logic [PC_WIDTH-1:0] pc_next;

    initial begin 
        pc_next = 32'hBFC00000;
    end

    always_ff @ (posedge clk) begin
        if (rst_i)  pc_next <= 32'hBFC00000;
        else begin
            if (en_i)
                case (jalr_e_i)
                    1'b0: pc_next <= jb_taken_e_i ?  (pc_target_e_i) : (pc_next + 32'd4);
                    1'b1: pc_next <= jta_jalr_e_i;
                endcase
        end
        
    end 

    assign pc_f_o = pc_next;
    assign pc_plus4_f_o = pc_f_o + 32'd4;

endmodule

