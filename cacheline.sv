module cacheline #(
    parameter   width = 32,
			 	tag_bits = 30
)(
	input logic clk_i , write_enable_i, cache_enable_i,
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic hit_o,
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o , mem_byte_op_o
);
//--------------------------data_structure---------------------------
	logic [width-1:0] cache_data [3:0];
	logic [tag_bits-1:0] cache_tag [3:0];
	logic valid [3:0]; 
    logic [1:0] counter;

//------------------------internal_signals----------------------------
    logic [tag_bits-1 :0] tag;
    logic hit , readmiss;
    //assign_values
    assign tag = address_i[31:2];
    assign hit_o = hit;
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
    assign mem_byte_op_o = 1'b0; // yet to be handled...
//----------------------------------------------------------------------
    initial begin
        hit = 1'b0;
        readmiss = 1'b0;
        counter = 2'b0;
        for(int i = 0 ; i < 4 ; i++) begin
            valid[i[1:0]] = 1'b0;
        end
    end

    always_comb begin
        if(cache_enable_i) begin
            if(tag == cache_tag[0]) begin
                hit = valid[0];
                readmiss = 0 | ~ valid[0];
                read_data_o = cache_data[0];
            end
            else if(tag == cache_tag[1]) begin
                hit = valid[1];
                readmiss = 0 | ~ valid[1];
                read_data_o = cache_data[1];
            end
            else if(tag == cache_tag[2]) begin
                hit = valid[2];
                readmiss = 0 | ~ valid[2];
                read_data_o = cache_data[2];
            end
            else if(tag == cache_tag[3]) begin
                hit = valid[3];
                readmiss = 0 | ~ valid[3];
                read_data_o = cache_data[3];
            end
            else begin

                hit = 1'b0;

                if(write_enable_i) readmiss = 0;
                else readmiss = 1;

                read_data_o = mem_incoming_data_i;
            end
        end
        else begin
            readmiss = 0;
            hit = 0;
            read_data_o = 32'b0;
        end
    end
//---------------------------------------------------------------------
    always_ff @(negedge clk_i) begin
        if(readmiss) begin
            counter <= counter + 1'b1;
            //$display("%h" , mem_incoming_data_i);
            cache_tag[counter] <= tag;
            cache_data[counter] <= mem_incoming_data_i;
            valid[counter] <= 1'b1;
        end
        else if(write_enable_i && hit) begin
            counter <= counter + 1'b1;
            mem_write_data_o <= write_data_i;

            if(cache_tag[0] == tag) begin
                cache_data[0] <= write_data_i;
                valid[0] <= 1'b1;
            end
            if(cache_tag[1] == tag) begin
                cache_data[1] <= write_data_i;
                valid[1] <= 1'b1;
            end
            if(cache_tag[2] == tag) begin
                cache_data[2] <= write_data_i;
                valid[2] <= 1'b1;
            end
            if(cache_tag[3] == tag) begin
                cache_data[3] <= write_data_i;
                valid[3] <= 1'b1;
            end
        end
        else if(write_enable_i && !hit) begin
            counter <= counter + 1'b1;
            //$display("%h" , write_data_i);
            mem_write_data_o <= write_data_i;
            cache_tag[counter] <= tag;
            cache_data[counter] <= write_data_i;
            valid[counter] <= 1'b1;

        end
    end
endmodule


/*note to self
when there is a write hit it does work 
but in the middle we do get a moment where the read_data_output holds a garbage value
shouldnt technically matter because this is a dont care...? 

for a write miss we have a problem where it takes an extra clock cycle to first write to memory... then write to cache
cannot write simultaeously
*/

