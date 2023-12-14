module cacheline #(
    parameter   width = 32,
                set_bits = 4,
			 	tag_bits = 26,
                BYTE_WIDTH = 8
)(
	input logic clk_i , write_enable_i, cache_enable_i, byte_op_i,
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o , mem_byte_op_o
);
//--------------------------data_structure---------------------------

	logic [width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];
	logic [1:0] age [((2**set_bits)-1):0][3:0];
    logic [1:0] LRU_pointer[((2**set_bits)-1):0];
//------------------------internal_signals----------------------------
    logic [tag_bits-1 :0] tag;
    logic [1:0] byteoffset;
    logic hit , readmiss;
    logic [3:0] set;
    logic [1:0] way_hit;
//-------------------------assign_values--------------------------------
    assign set = address_i[5:2];
    assign tag = address_i[31:6];
    assign byteoffset = address_i[1:0];
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
//----------------------------------------------------------------------
    initial begin
        hit = 1'b0;
        readmiss = 1'b1;
        for(int j = 0; j<16; j++)begin
            LRU_pointer[j] = 2'b00;
            for(int i = 0 ; i<4 ; i++) begin
                valid[j[3:0]][i[1:0]] = 1'b0;
                age[j[3:0]][i[1:0]]=i[1:0];
            end
        end
    end

    always_latch begin
        for(int i = 0 ; i < 4 ; i++) begin
            if(age[set][i[1:0]] == 2'b00)begin 
                LRU_pointer[set] = i[1:0];
            end
        end
    end

    always_comb begin
        if(cache_enable_i) begin
            
            for(int i=0; i<4; i++)begin
                if((cache_tag[set][i[1:0]]==tag) && (valid[set][i[1:0]]))begin
                    hit = 1'b1;
                    readmiss =  0 | ~ valid[set][i[1:0]];

                    if(byte_op_i)begin
                        case(byteoffset)
                            2'b00 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[7:0]};
                            2'b01 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[15:8]};
                            2'b10 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[23:16]};
                            2'b11 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[31:24]};
                        endcase
                    end
                    else begin
                        read_data_o = mem_incoming_data_i;
                    end
                    //$display("%h %h", cache_tag[set][i], tag);
                    way_hit = i[1:0];
                    i=5;
                end
                else begin
                    hit = 1'b0;
                    if(!write_enable_i && !hit) readmiss = 1;
                    else readmiss = 0;
                    way_hit = LRU_pointer[set]; // it is a dont care
                    if(byte_op_i)begin
                        case(byteoffset)
                            2'b00 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[7:0]};
                            2'b01 : read_data_o = {{3*BYTE_WIDTH{1'b0}} , mem_incoming_data_i[15:8]};
                            2'b10 : read_data_o = {{3*BYTE_WIDTH{1'b0}}, mem_incoming_data_i[23:16]};
                            2'b11 : read_data_o = {{3*BYTE_WIDTH{1'b0}}, mem_incoming_data_i[31:24]};
                        endcase
                    end
                    else begin
                        read_data_o = mem_incoming_data_i;
                    end
                end   
            end
        end
        else begin
            readmiss = 0;
            hit = 0;
            read_data_o = 32'b0;
            way_hit = 2'b0;
        end
    end
//---------------------------------------------------------------------
    always_ff @(negedge clk_i) begin

        if(!write_enable_i && hit)begin
            age[set][way_hit] <= 2'b11;
            for(int i = 0 ; i < 4 ; i++) begin
                if((i[1:0] != way_hit) && (age[set][i[1:0]] > age[set][way_hit])) begin
                    $display("we got a read hit");
                    age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
                end
            end
        end
        if(readmiss) begin
            mem_byte_op_o <= 1'b0;
            cache_tag[set][LRU_pointer[set]] <= tag;
            $display("set cache tag %h", tag);
            cache_data[set][LRU_pointer[set]] <= mem_incoming_data_i;
            valid[set][LRU_pointer[set]] <= 1'b1;            
            age[set][LRU_pointer[set]] <= 2'b11;

            for(int i = 0 ; i < 4 ; i++) begin
                if((i[1:0] != LRU_pointer[set]) && (age[set][i[1:0]] > age[set][LRU_pointer[set]])) begin
                    $display("success");
                    age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
                end
            end
        end
        else if(write_enable_i && hit) begin
            mem_byte_op_o <= byte_op_i;
            mem_write_data_o <= write_data_i;

            for(int i=0; i<4; i++)begin
                if(cache_tag[set][i]==tag)begin
                    if(byte_op_i) begin
                        case(byteoffset)
                            2'b00 : cache_data[set][i[1:0]][7:0] <= write_data_i[7:0];
                            2'b01 : cache_data[set][i[1:0]][15:8] <= write_data_i[7:0];
                            2'b10 : cache_data[set][i[1:0]][23:16] <= write_data_i[7:0];
                            2'b11 : cache_data[set][i[1:0]][31:24] <= write_data_i[7:0];
                        endcase
                    end
                    else begin
                        cache_data[set][i[1:0]] <= write_data_i;
                    end
                    valid[set][i[1:0]] <= 1'b1;
                    age[set][i[1:0]] <= 2'b11;
                    for(int j=0; j< 4; j++)begin
                        if((j[1:0] != i[1:0]) && (age[set][j[1:0]] > age[set][i[1:0]]))begin
                            age[set][j[1:0]] <= age[set][j[1:0]] - 1'b1;
                        end
                    end
                    
                end
            end

        end
        else if(write_enable_i && !hit) begin
            age[set][LRU_pointer[set]] <= 2'b11;
            for(int i = 0 ; i < 4 ; i++) begin
			    if((i[1:0] != LRU_pointer[set]) && (age[set][i[1:0]] > age[set][LRU_pointer[set]])) begin
			        age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
			    end
			end
            mem_byte_op_o <= byte_op_i;
            mem_write_data_o <= write_data_i;
            if(byte_op_i) begin
                case(byteoffset)
                    2'b00 : cache_data[set][LRU_pointer[set]][7:0] <= write_data_i[7:0];
                    2'b01 : cache_data[set][LRU_pointer[set]][15:8] <= write_data_i[7:0];
                    2'b10 : cache_data[set][LRU_pointer[set]][23:16] <= write_data_i[7:0];
                    2'b11 : cache_data[set][LRU_pointer[set]][31:24] <= write_data_i[7:0];
                endcase
            end
            else begin
                cache_data[set][LRU_pointer[set]] <= write_data_i;
            end
            cache_tag[set][LRU_pointer[set]] <= tag;

            valid[set][LRU_pointer[set]] <= 1'b1;

        end
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
*/



