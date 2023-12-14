module cache # (
    parameter   DATA_WIDTH = 32,
                SET_SIZE = 3
)(
    input   logic                       clk,
    input   logic                       memory_instruction_i, write_enable_i,
    input   logic   [DATA_WIDTH-1:0]    address_i, write_data_i,
    output  logic   [1:0]               hit_miss_indicator_o,
    output  logic   [DATA_WIDTH-1:0]    read_data_o
);

    logic   [DATA_WIDTH-1:0]            memory_read;
    logic   [SET_SIZE-1:0]              current_set;
    logic   [DATA_WIDTH-SET_SIZE-3:0]   current_tag;

    assign current_set = address_i[SET_SIZE+1:2];
    assign current_tag = address_i[DATA_WIDTH-1:SET_SIZE+2];

    typedef struct packed {
        logic verification;
        logic [31:0] saved_data;
        logic [(DATA_WIDTH-SET_SIZE-2)-1:0] tag;
    } cache_structure;

    cache_structure cache_mem [2**SET_SIZE-1:0];

    //logic define cache_array

    always_latch begin
        if (memory_instruction_i) begin
            if (cache_mem[current_set].verification && cache_mem[current_set].tag == current_tag) begin
                read_data_o = cache_mem[current_set].saved_data;
                hit_miss_indicator_o = 2'b01;
            end
            else begin
                read_data_o = memory_read;
                hit_miss_indicator_o = 2'b10;
            end
        end
        else begin
            hit_miss_indicator_o = 2'b00; 
        end
    end

    always_ff@(posedge clk) begin
        if (memory_instruction_i) begin 
            if (write_enable_i) begin
                cache_mem[current_set].saved_data <= write_data_i;
                cache_mem[current_set].verification <= 1'b1;
                cache_mem[current_set].tag <= current_tag;
            end
            else if (!(cache_mem[current_set].verification) || !(cache_mem[current_set].tag == current_tag)) begin
                cache_mem[current_set].saved_data <= memory_read;
                cache_mem[current_set].verification <= 1'b1;
                cache_mem[current_set].tag <= current_tag;
            end
        end
    end

ram ram_mem (
    .clk(clk),
    .we_i(write_enable_i),
    .use_mem_i(memory_instruction_i),
    .addr_i(address_i),
    .wd_i(write_data_i),
    .rd_o(memory_read)
);


endmodule

