module hazard_unit # (
    parameter REG_ADDR_LENGTH = 5 
)(
    input   logic   [REG_ADDR_LENGTH-1:0]   rs1_d_i, rs2_d_i, rs1_e_i, rs2_e_i, rd_e_i, rd_m_i, rd_w_i,
    input   logic   [1:0]                   result_src_e_i,
    input   logic                           jb_taken_e_i, jalr_e_i, reg_write_m_i, reg_write_w_i,
    output  logic                           stall_f_o, stall_d_o, flush_d_o, flush_e_o, 
    output  logic   [1:0]                   forward1_e_o, forward2_e_o
);

logic lw_stall;

always_comb begin

    // forward to mitigate data hazards

    if ((rs1_e_i == rd_m_i) & reg_write_m_i & (rs1_e_i != 0))          
        forward1_e_o = 2'b01;
    else if ((rs1_e_i == rd_w_i) & reg_write_w_i & (rs1_e_i != 0))    
        forward1_e_o = 2'b10;
    else     
       forward1_e_o = 2'b00;

    if ( (rs2_e_i == rd_m_i) & reg_write_m_i & (rs2_e_i != 0))           
       forward2_e_o = 2'b01;
    else if ((rs2_e_i == rd_w_i) & reg_write_w_i & (rs2_e_i != 0))
       forward2_e_o = 2'b10;
    else                                                                
       forward2_e_o = 2'b00;


    // stall to mitigate load hazard
        lw_stall = (result_src_e_i == 2'b01) & ((rs1_d_i == rd_e_i) | (rs2_d_i == rd_e_i));
        stall_f_o = lw_stall;
        stall_d_o = lw_stall;

    // flush decode stage in case of wrong predictive jump
        flush_d_o = jalr_e_i | jb_taken_e_i;
    
    // flush execute stage if wrong predictive jump or introducing load stall
        flush_e_o = lw_stall | flush_d_o;

end

endmodule

