module register_file #(
    parameter   ADDRESS_WIDTH   = 5,
                DATA_WIDTH      = 32
)(
    input   logic                           clk, addr3_we_i,
    input   logic                           trigger_i,
    input   logic   [ADDRESS_WIDTH-1:0]     addr1_i, addr2_i, addr3_i,
    input   logic   [DATA_WIDTH-1:0]        addr3_wd_i,
    output  logic   [DATA_WIDTH-1:0]        rd1_o, rd2_o,
    output  logic   [DATA_WIDTH-1:0]        a0_o
);

    logic   [DATA_WIDTH-1:0]    rf[2**ADDRESS_WIDTH-1:0];

    initial begin
        for (int i = 0; i < 32; i++)
            rf[i] = {DATA_WIDTH{1'b0}};
    end

    assign rd1_o = rf[addr1_i];
    assign rd2_o = rf[addr2_i];
    assign a0_o = rf[5'd10];
    
    always_ff @(negedge clk_i) begin
        rf[19] <= {{31{1'b0}} , trigger_i};
        if (addr3_we_i && addr3_i != 0) begin
            rf[addr3_i] <= addr3_wd_i;
        end
    end

endmodule
