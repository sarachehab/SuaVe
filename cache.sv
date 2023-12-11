module cache (
	input logic clk_i,
	input logic [31:0] address_i,
	input logic write_enable_i,
	input logic [31:0] write_data_i,
	//output signals
	output logic [31:0] mem_read_address_o,
	output logic [31:0] read_data_o,
	output logic hit_o
);
	//cache parameters
	parameter set_bits = 4;
	parameter tag_bits = 26;
	parameter data_width = 32;

	// Data and tag
	logic [data_width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];
	logic [1:0] count [((2**set_bits)-1):0][3:0];

	//Signals to control cache access
	logic [tag_bits-1:0] tag;
	logic [3:0] set;
	logic hit;
	//logic [1:0] byte_offset;

	assign tag = address_i[31:6];
	assign set = address_i[5:2];
	//assign byte_offset = address_i[1:0];
	assign hit_o = hit;

	//reset on startup
	initial begin
		hit = 1'b0;
        for (int i = 0; i < (2**set_bits); i = i + 1) begin
            for (int j = 0; j < 4; j = j + 1) begin
                valid[i][j] = 1'b0;
            end
        end
        for (int i = 0; i < (2**set_bits); i = i + 1) begin
            for (int j = 0; j < 4; j = j + 1) begin
                count[i][j] = 8'b0;
            end
        end
	end

always_comb begin

		if (tag == cache_tag[set][0]) begin 
			read_data_o = cache_data[set][0];
			hit = valid[set][0];
			count[set][0]++;
		end
		else if (tag == cache_tag[set][1])begin
			read_data_o = cache_data[set][1];
			hit = valid[set][1];		
			count[set][1]++; 
		end
		else if (tag == cache_tag[set][2])begin
			read_data_o = cache_data[set][2];
			hit = valid[set][2];
			count[set][2]++;
		end
		else if (tag == cache_tag[set][3])begin
			read_data_o = cache_data[set][3];
			hit = valid[set][3];
			count[set][3]++;
		end
		else begin
			mem_read_address = address_i;
			read_data_o = write_data_i
			hit = 1'b0;
		end
end
	always_ff @(negedge clk_i) begin
		//if there is no miss at all
		if(write_enable_i && hit) begin
			if (tag == cache_tag[set][0]) begin 
				cache_data[set][0] <= write_data_i;
			end
			else if (tag == cache_tag[set][1]) begin
				cache_data[set][1] <= write_data_i;
			end
			else if (tag == cache_tag[set][2]) begin
				cache_data[set][2] <= write_data_i;
			end
			else if (tag == cache_tag[set][3]) begin
				cache_data[set][3] <= write_data_i;
			end
			else begin
				//handle what happens for write miss ... 
				//this shouldn't happen technically so what do i do here?
			end
		end
		//miss cases:
		else if (write_enable_i) begin
			//first we must handle a cold miss ... easily done here
			if(~valid[set][0]) begin
				cache_data[set][0] <= write_data_i;
				cache_tag[set][0] <= tag;
				valid[set][0] <= 1'b1;
			end
			else if(~valid[set][1]) begin
				cache_data[set][1] <= write_data_i;
				cache_tag[set][1] <= tag;
				valid[set][1] <= 1'b1;
			end
			else if(~valid[set][2]) begin
				cache_data[set][2] <= write_data_i;
				cache_tag[set][2] <= tag;
				valid[set][2] <= 1'b1;
			end
			else if(~valid[set][3]) begin
				cache_data[set][3] <= write_data_i;
				cache_tag[set][3] <= tag;
				valid[set][3] <= 1'b1;
			end
			//if not cold miss must be a conflict miss so we handle here:
			else begin 
				//handle conflict miss... replace least recently used value 
				 
				//check search count for lowest one and replace that one...

				//then need to handle dirtyness since main memory needs to be updates somehow?

			end
		end
	end

endmodule




