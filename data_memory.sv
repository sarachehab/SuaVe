module data_memory # (
    parameter DATA_WIDTH    = 32,
              BYTE_WIDTH    = 8, 
              START_ADDRESS = 32'h10000,
              END_ADDRESS   = 32'h1FFFF
)(
    input  logic                        clk, we_i, byte_op_i,
    input  logic [DATA_WIDTH-1:0]       addr_i,
    input  logic [DATA_WIDTH-1:0]       wd_i,
    output logic [DATA_WIDTH-1:0]       rd_o
);

logic [BYTE_WIDTH-1:0]  data_ram [END_ADDRESS:0];
logic [DATA_WIDTH-1:0]  addr;

assign addr = byte_op_i ? addr_i : (addr_i & 32'hFFFFFFFC);

initial begin
    // $readmemh("gaussian.mem", data_ram, START_ADDRESS);
    $readmemh("gaussian.mem", data_ram, START_ADDRESS);
    // $readmemh("sine.mem", data_ram, START_ADDRESS);
    // $readmemh("noisy.mem", data_ram, START_ADDRESS);
    for (int i = 0; i < START_ADDRESS; i++) begin
        data_ram[i] = {BYTE_WIDTH{1'b0}};
    end
    data_ram[32'h100] = 3;
end

always_comb begin
    case (byte_op_i)
        1'b0: rd_o = {data_ram[addr+3], data_ram[addr+2], data_ram[addr+1], data_ram[addr+0]};
        1'b1: rd_o = {{3*BYTE_WIDTH{1'b0}}, data_ram[addr]};    // only implementing LBU
        default: rd_o = {DATA_WIDTH{1'b0}};
    endcase
end

always_ff @(negedge clk) begin
    if (we_i)
        case (byte_op_i)
            1'b1: data_ram[addr] <= wd_i[BYTE_WIDTH-1:0];
            1'b0: begin
                data_ram[addr+0] <= wd_i[BYTE_WIDTH-1:0];
                data_ram[addr+1] <= wd_i[2*BYTE_WIDTH-1:BYTE_WIDTH];
                data_ram[addr+2] <= wd_i[3*BYTE_WIDTH-1:2*BYTE_WIDTH];
                data_ram[addr+3] <= wd_i[4*BYTE_WIDTH-1:3*BYTE_WIDTH];
            end
        endcase
end

endmodule
