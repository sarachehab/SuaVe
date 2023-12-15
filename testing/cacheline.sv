
module cacheline #(
    parameter   width = 32,
			 	tag_bits = 30
               // BYTE_WIDTH = 8
)(
	input logic clk_i, write_enable_i, cache_enable_i, byte_op_i,
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o , mem_byte_op_o
);
//--------------------------data_structure---------------------------

	logic [width-1:0] cache_data[3:0];
	logic [tag_bits-1:0] cache_tag [3:0];
	logic valid [3:0];
    logic [1:0] counter;
//------------------------internal_signals----------------------------
    logic [tag_bits-1 :0] tag;
    logic [1:0] byteoffset;
    logic hit;
    logic [1:0] wayhit;

//-------------------------assign_values--------------------------------
    assign tag = address_i[31:2];
    assign mem_byte_op_o = 1'b0;
    assign byteoffset = address_i[1:0];
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
//----------------------------------------------------------------------
    initial begin
        hit = 1'b0;
        for(int i = 0 ; i<4 ; i++) begin
            valid[i[1:0]] = 1'b0;
            cache_data[i[1:0]] = 32'b0;
            cache_tag [i[1:0]] = 30'b0;
        end
    end

    always_comb begin
        if(cache_enable_i) begin
            
            //load word
            if(!write_enable_i) begin
                mem_byte_op_o = 0;
                //mem_write_enable_o <= 1'b0;
                if(hit) begin
                    if(byte_op_i)begin
                        case(byteoffset)
                        2'b00 : read_data_o = { {24'b0},mem_incoming_data_i[7:0]};
                        2'b01 : read_data_o = { {24'b0},mem_incoming_data_i[15:8]};
                        2'b10 : read_data_o = { {24'b0},mem_incoming_data_i[23:16]};
                        2'b11 : read_data_o = { {24'b0},mem_incoming_data_i[31:24]};
                        endcase
                    end
                    else begin
                        read_data_o = cache_data[wayhit];   
                    end
                end
                else begin
                    //counter = counter + 1'b1;
                    if(byte_op_i)begin
                        case(byteoffset)
                        2'b00 : read_data_o = { {24'b0},mem_incoming_data_i[7:0]};
                        2'b01 : read_data_o = { {24'b0},mem_incoming_data_i[15:8]};
                        2'b10 : read_data_o = { {24'b0},mem_incoming_data_i[23:16]};
                        2'b11 : read_data_o = { {24'b0},mem_incoming_data_i[31:24]};
                        endcase
                    end
                    else begin
                    //mem_address_o <= address_i;
                        read_data_o = mem_incoming_data_i;
                    end
                end
            end
            //store word
            else begin
                //counter = counter + 1'b1;
                mem_byte_op_o = byte_op_i;
                //mem_address_o <= address_i;
                //mem_write_enable_o <= 1'b1;
                if(hit) begin

                    mem_write_data_o = write_data_i;
                end
                else begin
                    // cache_tag[counter] = tag;
                    // cache_data[counter] = write_data_i;
                    // valid[counter] = 1'b1;
                    mem_write_data_o = write_data_i;
                end
            end
        end
    end

    always_ff@(negedge clk_i) begin
        if (cache_enable_i==1'b1)begin
            //check for tag match
            for(int i = 0 ; i < 4 ; i++) begin
                if(cache_tag[i[1:0]] == tag) begin
                    hit <= valid[i[1:0]];
                    wayhit <= i[1:0];
                    break;
                end
                else
                    hit <= 1'b0;
            end
            
            if((write_enable_i==1'b1) || (hit==1'b0)) begin
                counter <= counter + 1'b1;
            end
            if((write_enable_i == 1'b0) && (hit==1'b0))begin //load word and not in cache
                cache_data[counter] <= mem_incoming_data_i;
                cache_tag[counter] <= tag;
                //cache_data[counter] <= mem_incoming_data_i;
                valid[counter] <= 1'b1;
            end
            else if((write_enable_i==1'b1) &&(hit==1'b1)) begin
                if(byte_op_i) begin
                    case(byteoffset)
                        2'b00 : cache_data[wayhit][7:0] <= write_data_i[7:0];
                        2'b01 : cache_data[wayhit][15:8] <= write_data_i[7:0];
                        2'b10 : cache_data[wayhit][23:16] <= write_data_i[7:0];
                        2'b11 : cache_data[wayhit][31:24] <= write_data_i[7:0];
                    endcase
                end
                else begin
                    
                    cache_data[wayhit] <= write_data_i;
                end
                //cache_tag[wayhit] <= tag;
                //cache_data[wayhit] <= write_data_i;
                valid[wayhit] <= 1'b1;
            end
            else if((write_enable_i==1'b1)&& (hit==1'b0))begin
                if(byte_op_i) begin
                    case(byteoffset)
                        2'b00 : cache_data[counter][7:0] <= write_data_i[7:0];
                        2'b01 : cache_data[counter][15:8] <= write_data_i[7:0];
                        2'b10 : cache_data[counter][23:16] <= write_data_i[7:0];
                        2'b11 : cache_data[counter][31:24] <= write_data_i[7:0];
                    endcase
                end
                else begin
                    cache_data[counter] <= write_data_i;
                end
                
                cache_tag[counter] <= tag;
                //cache_data[counter] <= write_data_i;
                valid[counter] <= 1'b1;
            end
        end
        //also add cache data 
        //cache tag
        //valid
    end
endmodule

/*note to self
if load instruction with byteop and there is a miss fetch whole word so mem_byte_op_o will be 0
but output must be correct so we need a condition for outputing the correct byte...

if load instruction with byteop and there is a hit we just use the logic from before...

if store instruction mem_byte_op_o = byte_op_i...
it doesnt matter if there is a hit or a miss we need some logic to write to the correct bits in our cache_data...
31    24 23    16 15     8 7      0
11001001 11100111 11011111 11010101


also need to make read_data_o 32'b0 for non read instructions...

00 01 10 11
00 11 01 10          
00 10 11 01    


if(byte_op_i) begin
    case(byteoffset)
        2'b00 : cache_data[set][counter][7:0] <= write_data_i[7:0];
        2'b01 : cache_data[set][counter][15:8] <= write_data_i[7:0];
        2'b10 : cache_data[set][counter][23:16] <= write_data_i[7:0];
        2'b11 : cache_data[set][counter][31:24] <= write_data_i[7:0];
    endcase
end
else begin
    cache_data[set][counter] <= write_data_i;
end
*/


