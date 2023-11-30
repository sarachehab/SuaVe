module pc # (
    parameter PC_WIDTH = 32
)(
    input                 clk_i, pcsrc_i, rst_i,
    input  [PC_WIDTH-1:0] imm_ext_i,
    output [PC_WIDTH-1:0] pc_o
);

    logic [PC_WIDTH-1:0] pc_next;

    initial begin 
        pc_next = 32'hBFC00000;
    end

    always_ff @ (negedge clk_i) begin
        if (rst_i)  pc_next <= 32'hBFC00000;
        else        pc_next <= pcsrc_i ? pc_o + 32'd4 : pc_o + imm_ext_i;
    end 

    assign pc_o = pc_next;

endmodule

