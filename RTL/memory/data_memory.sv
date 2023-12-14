module data_memory # (
    parameter DATA_WIDTH = 32
)(
    input   logic                       clk,
    input   logic                       memory_instruction_i, write_enable_i, byte_op_i,
    input   logic   [DATA_WIDTH-1:0]    address_i, write_data_i,
    output  logic   [1:0]               hit_miss_indicator_o,
    output  logic   [DATA_WIDTH-1:0]    rd_o

);

logic   [DATA_WIDTH-1:0]    read, write;

always_comb begin
    case (byte_op_i)
        1'b0: begin // word operation
            rd_o = read;
            write = write_data_i;
        end
        1'b1: begin // byte operation
            case (address_i[1:0])
                2'b00: begin
                    rd_o = {{24'b0}, read[7:0]};
                    write = {read[31:8], write_data_i[7:0]};
                end
                2'b01: begin
                    rd_o = {{24'b0}, read[15:8]};
                    write = {read[31:16], write_data_i[7:0], read[7:0]};
                end
                2'b10: begin
                    rd_o = {{24'b0}, read[23:16]};
                    write = {read[31:24], write_data_i[7:0], read[15:0]};
                end
                2'b11: begin
                    rd_o = {{24'b0}, read[31:24]};
                    write = {write_data_i[7:0], read[23:0]};
                end
            endcase
        end
        default: begin
            rd_o = read;
            write = write_data_i;
        end
    endcase
end


cache cache_memory (
    .clk(clk),
    .memory_instruction_i(memory_instruction_i),
    .write_enable_i(write_enable_i),
    .address_i(address_i),
    .write_data_i(write),
    .read_data_o(read),
    .hit_miss_indicator_o(hit_miss_indicator_o)
);

endmodule


