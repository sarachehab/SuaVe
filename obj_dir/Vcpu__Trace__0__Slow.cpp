// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+117,"trigger", false,-1);
    tracep->declBus(c+118,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"REG_ADDR_LENGTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst", false,-1);
    tracep->declBit(c+117,"trigger", false,-1);
    tracep->declBus(c+118,"a0", false,-1, 31,0);
    tracep->declBus(c+35,"pc_f", false,-1, 31,0);
    tracep->declBus(c+36,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+37,"instr_f", false,-1, 31,0);
    tracep->declBus(c+38,"pc_d", false,-1, 31,0);
    tracep->declBus(c+39,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+40,"instr_d", false,-1, 31,0);
    tracep->declBus(c+119,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+120,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+41,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+43,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+44,"rd_d", false,-1, 4,0);
    tracep->declBus(c+45,"alu_control_d", false,-1, 3,0);
    tracep->declBus(c+46,"imm_src_d", false,-1, 2,0);
    tracep->declBus(c+47,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+48,"jump_d", false,-1);
    tracep->declBit(c+49,"branch_d", false,-1);
    tracep->declBit(c+50,"jalr_d", false,-1);
    tracep->declBit(c+51,"mem_write_d", false,-1);
    tracep->declBit(c+52,"alu_src_d", false,-1);
    tracep->declBit(c+53,"reg_write_d", false,-1);
    tracep->declBit(c+54,"byte_op_d", false,-1);
    tracep->declBus(c+55,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+56,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+57,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+58,"pc_e", false,-1, 31,0);
    tracep->declBus(c+59,"pc_plus4_e", false,-1, 31,0);
    tracep->declBus(c+60,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+61,"pc_target_e", false,-1, 31,0);
    tracep->declBus(c+62,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+64,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+65,"rd_e", false,-1, 4,0);
    tracep->declBus(c+66,"alu_control_e", false,-1, 3,0);
    tracep->declBus(c+67,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+68,"reg_write_e", false,-1);
    tracep->declBit(c+69,"mem_write_e", false,-1);
    tracep->declBit(c+70,"jump_e", false,-1);
    tracep->declBit(c+71,"branch_e", false,-1);
    tracep->declBit(c+72,"jalr_e", false,-1);
    tracep->declBit(c+73,"alu_src_e", false,-1);
    tracep->declBit(c+74,"byte_op_e", false,-1);
    tracep->declBit(c+75,"zero_e", false,-1);
    tracep->declBus(c+76,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+77,"result_m", false,-1, 31,0);
    tracep->declBus(c+78,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+79,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+80,"imm_ext_m", false,-1, 31,0);
    tracep->declBus(c+121,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+81,"rd_m", false,-1, 4,0);
    tracep->declBus(c+82,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+83,"reg_write_m", false,-1);
    tracep->declBit(c+84,"mem_write_m", false,-1);
    tracep->declBit(c+85,"byte_op_m", false,-1);
    tracep->declBus(c+86,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+87,"pc_plus4_w", false,-1, 31,0);
    tracep->declBus(c+88,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+89,"imm_ext_w", false,-1, 31,0);
    tracep->declBus(c+90,"result_w", false,-1, 31,0);
    tracep->declBus(c+91,"rd_w", false,-1, 4,0);
    tracep->declBus(c+92,"result_src_w", false,-1, 1,0);
    tracep->declBit(c+93,"reg_write_w", false,-1);
    tracep->declBus(c+94,"forward1_e", false,-1, 1,0);
    tracep->declBus(c+95,"forward2_e", false,-1, 1,0);
    tracep->declBit(c+96,"stall_f", false,-1);
    tracep->declBit(c+97,"stall_d", false,-1);
    tracep->declBit(c+98,"flush_d", false,-1);
    tracep->declBit(c+99,"flush_e", false,-1);
    tracep->declBit(c+100,"jb_taken_e", false,-1);
    tracep->pushNamePrefix("pipeline_control_unit ");
    tracep->declBus(c+101,"op_i", false,-1, 6,0);
    tracep->declBus(c+102,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+103,"funct7_5_i", false,-1);
    tracep->declBit(c+48,"jump_o", false,-1);
    tracep->declBit(c+49,"branch_o", false,-1);
    tracep->declBit(c+50,"jalr_o", false,-1);
    tracep->declBus(c+47,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+51,"mem_write_o", false,-1);
    tracep->declBit(c+52,"alu_src_o", false,-1);
    tracep->declBus(c+46,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+53,"reg_write_o", false,-1);
    tracep->declBus(c+45,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+54,"byte_address_o", false,-1);
    tracep->declBus(c+104,"alu_op", false,-1, 1,0);
    tracep->pushNamePrefix("aluDecoder ");
    tracep->declBus(c+104,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+102,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+103,"funct7_b5_i", false,-1);
    tracep->declBit(c+105,"op_5_i", false,-1);
    tracep->declBus(c+45,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+54,"byte_address_o", false,-1);
    tracep->declBit(c+106,"rTypeSub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mainDecoder ");
    tracep->declBus(c+101,"op_i", false,-1, 6,0);
    tracep->declBit(c+49,"branch_o", false,-1);
    tracep->declBit(c+48,"jump_o", false,-1);
    tracep->declBit(c+50,"jalr_o", false,-1);
    tracep->declBus(c+47,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+51,"mem_write_o", false,-1);
    tracep->declBit(c+52,"alu_src_o", false,-1);
    tracep->declBus(c+46,"imm_src_o", false,-1, 2,0);
    tracep->declBit(c+53,"reg_write_o", false,-1);
    tracep->declBus(c+104,"alu_op_o", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pipeline_data_memory ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+126,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+84,"we_i", false,-1);
    tracep->declBit(c+85,"byte_op_i", false,-1);
    tracep->declBus(c+76,"addr_i", false,-1, 31,0);
    tracep->declBus(c+78,"wd_i", false,-1, 31,0);
    tracep->declBus(c+121,"rd_o", false,-1, 31,0);
    tracep->declBus(c+107,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pipeline_decode_register ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBus(c+37,"instr_f_i", false,-1, 31,0);
    tracep->declBus(c+35,"pc_f_i", false,-1, 31,0);
    tracep->declBus(c+36,"pc_plus4_f_i", false,-1, 31,0);
    tracep->declBit(c+98,"rst_i", false,-1);
    tracep->declBit(c+108,"en_i", false,-1);
    tracep->declBus(c+40,"instr_d_o", false,-1, 31,0);
    tracep->declBus(c+38,"pc_d_o", false,-1, 31,0);
    tracep->declBus(c+39,"pc_plus4_d_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_execute_register ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBus(c+119,"rd1_d_i", false,-1, 31,0);
    tracep->declBus(c+120,"rd2_d_i", false,-1, 31,0);
    tracep->declBus(c+41,"ext_imm_d_i", false,-1, 31,0);
    tracep->declBus(c+38,"pc_d_i", false,-1, 31,0);
    tracep->declBus(c+39,"pc_plus4_d_i", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_d_i", false,-1, 4,0);
    tracep->declBus(c+43,"rs2_d_i", false,-1, 4,0);
    tracep->declBus(c+44,"rd_d_i", false,-1, 4,0);
    tracep->declBus(c+45,"alu_control_d_i", false,-1, 3,0);
    tracep->declBus(c+47,"result_src_d_i", false,-1, 1,0);
    tracep->declBit(c+99,"rst_i", false,-1);
    tracep->declBit(c+53,"reg_write_d_i", false,-1);
    tracep->declBit(c+51,"mem_write_d_i", false,-1);
    tracep->declBit(c+48,"jump_d_i", false,-1);
    tracep->declBit(c+50,"jalr_d_i", false,-1);
    tracep->declBit(c+49,"branch_d_i", false,-1);
    tracep->declBit(c+52,"alu_src_d_i", false,-1);
    tracep->declBit(c+54,"byte_op_d_i", false,-1);
    tracep->declBus(c+55,"rd1_e_o", false,-1, 31,0);
    tracep->declBus(c+56,"rd2_e_o", false,-1, 31,0);
    tracep->declBus(c+57,"ext_imm_e_o", false,-1, 31,0);
    tracep->declBus(c+58,"pc_e_o", false,-1, 31,0);
    tracep->declBus(c+59,"pc_plus4_e_o", false,-1, 31,0);
    tracep->declBus(c+63,"rs1_e_o", false,-1, 4,0);
    tracep->declBus(c+64,"rs2_e_o", false,-1, 4,0);
    tracep->declBus(c+65,"rd_e_o", false,-1, 4,0);
    tracep->declBus(c+66,"alu_control_e_o", false,-1, 3,0);
    tracep->declBus(c+67,"result_src_e_o", false,-1, 1,0);
    tracep->declBit(c+68,"reg_write_e_o", false,-1);
    tracep->declBit(c+69,"mem_write_e_o", false,-1);
    tracep->declBit(c+70,"jump_e_o", false,-1);
    tracep->declBit(c+71,"branch_e_o", false,-1);
    tracep->declBit(c+72,"jalr_e_o", false,-1);
    tracep->declBit(c+73,"alu_src_e_o", false,-1);
    tracep->declBit(c+74,"byte_op_e_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_execute_stage ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"rd1_e_i", false,-1, 31,0);
    tracep->declBus(c+56,"rd2_e_i", false,-1, 31,0);
    tracep->declBus(c+58,"pc_e_i", false,-1, 31,0);
    tracep->declBus(c+57,"imm_ext_e_i", false,-1, 31,0);
    tracep->declBus(c+77,"result_m_i", false,-1, 31,0);
    tracep->declBus(c+90,"result_w_i", false,-1, 31,0);
    tracep->declBus(c+66,"alu_control_e_i", false,-1, 3,0);
    tracep->declBus(c+94,"forward1_e_i", false,-1, 1,0);
    tracep->declBus(c+95,"forward2_e_i", false,-1, 1,0);
    tracep->declBit(c+73,"alu_src_e_i", false,-1);
    tracep->declBus(c+60,"alu_result_e_o", false,-1, 31,0);
    tracep->declBus(c+61,"pc_target_e_o", false,-1, 31,0);
    tracep->declBus(c+62,"write_data_e_o", false,-1, 31,0);
    tracep->declBit(c+75,"zero_e_o", false,-1);
    tracep->declBus(c+109,"src1", false,-1, 31,0);
    tracep->declBus(c+110,"src2", false,-1, 31,0);
    tracep->pushNamePrefix("execute_alu ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+109,"src1_i", false,-1, 31,0);
    tracep->declBus(c+110,"src2_i", false,-1, 31,0);
    tracep->declBus(c+66,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+75,"eq_o", false,-1);
    tracep->declBus(c+60,"alu_result_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pipeline_extend_unit ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"instr_i", false,-1, 31,7);
    tracep->declBus(c+46,"imm_src_i", false,-1, 2,0);
    tracep->declBus(c+41,"imm_ext_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_hazard_unit ");
    tracep->declBus(c+123,"REG_ADDR_LENGTH", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_d_i", false,-1, 4,0);
    tracep->declBus(c+43,"rs2_d_i", false,-1, 4,0);
    tracep->declBus(c+63,"rs1_e_i", false,-1, 4,0);
    tracep->declBus(c+64,"rs2_e_i", false,-1, 4,0);
    tracep->declBus(c+65,"rd_e_i", false,-1, 4,0);
    tracep->declBus(c+81,"rd_m_i", false,-1, 4,0);
    tracep->declBus(c+91,"rd_w_i", false,-1, 4,0);
    tracep->declBus(c+67,"result_src_e_i", false,-1, 1,0);
    tracep->declBit(c+100,"jb_taken_e_i", false,-1);
    tracep->declBit(c+72,"jalr_e_i", false,-1);
    tracep->declBit(c+83,"reg_write_m_i", false,-1);
    tracep->declBit(c+93,"reg_write_w_i", false,-1);
    tracep->declBit(c+96,"stall_f_o", false,-1);
    tracep->declBit(c+97,"stall_d_o", false,-1);
    tracep->declBit(c+98,"flush_d_o", false,-1);
    tracep->declBit(c+99,"flush_e_o", false,-1);
    tracep->declBus(c+94,"forward1_e_o", false,-1, 1,0);
    tracep->declBus(c+95,"forward2_e_o", false,-1, 1,0);
    tracep->declBit(c+112,"lw_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_instruction_memory ");
    tracep->declBus(c+124,"BYTE_SIZE", false,-1, 31,0);
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"FIRST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+128,"LAST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+35,"addr_f_i", false,-1, 31,0);
    tracep->declBus(c+37,"instr_f_o", false,-1, 31,0);
    tracep->declBus(c+113,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_memory_register ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBus(c+60,"alu_result_e_i", false,-1, 31,0);
    tracep->declBus(c+62,"write_data_e_i", false,-1, 31,0);
    tracep->declBus(c+59,"pc_plus4_e_i", false,-1, 31,0);
    tracep->declBus(c+57,"imm_ext_e_i", false,-1, 31,0);
    tracep->declBus(c+65,"rd_e_i", false,-1, 4,0);
    tracep->declBus(c+67,"result_src_e_i", false,-1, 1,0);
    tracep->declBit(c+68,"reg_write_e_i", false,-1);
    tracep->declBit(c+69,"mem_write_e_i", false,-1);
    tracep->declBit(c+74,"byte_op_e_i", false,-1);
    tracep->declBus(c+76,"alu_result_m_o", false,-1, 31,0);
    tracep->declBus(c+78,"write_data_m_o", false,-1, 31,0);
    tracep->declBus(c+79,"pc_plus4_m_o", false,-1, 31,0);
    tracep->declBus(c+80,"imm_ext_m_o", false,-1, 31,0);
    tracep->declBus(c+81,"rd_m_o", false,-1, 4,0);
    tracep->declBus(c+82,"result_src_m_o", false,-1, 1,0);
    tracep->declBit(c+83,"reg_write_m_o", false,-1);
    tracep->declBit(c+84,"mem_write_m_o", false,-1);
    tracep->declBit(c+85,"byte_op_m_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_program_counter ");
    tracep->declBus(c+122,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+116,"rst_i", false,-1);
    tracep->declBit(c+114,"en_i", false,-1);
    tracep->declBit(c+72,"jalr_e_i", false,-1);
    tracep->declBit(c+100,"jb_taken_e_i", false,-1);
    tracep->declBus(c+60,"jta_jalr_e_i", false,-1, 31,0);
    tracep->declBus(c+61,"pc_target_e_i", false,-1, 31,0);
    tracep->declBus(c+35,"pc_f_o", false,-1, 31,0);
    tracep->declBus(c+36,"pc_plus4_f_o", false,-1, 31,0);
    tracep->declBus(c+35,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_register_file ");
    tracep->declBus(c+123,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+93,"addr3_we_i", false,-1);
    tracep->declBit(c+117,"trigger_i", false,-1);
    tracep->declBus(c+42,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+43,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+91,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+90,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+119,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+120,"rd2_o", false,-1, 31,0);
    tracep->declBus(c+118,"a0_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pipeline_write_register ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBus(c+76,"alu_result_m_i", false,-1, 31,0);
    tracep->declBus(c+79,"pc_plus4_m_i", false,-1, 31,0);
    tracep->declBus(c+121,"read_data_m_i", false,-1, 31,0);
    tracep->declBus(c+80,"imm_ext_m_i", false,-1, 31,0);
    tracep->declBus(c+81,"rd_m_i", false,-1, 4,0);
    tracep->declBus(c+82,"result_src_m_i", false,-1, 1,0);
    tracep->declBit(c+83,"reg_write_m_i", false,-1);
    tracep->declBus(c+86,"alu_result_w_o", false,-1, 31,0);
    tracep->declBus(c+87,"pc_plus4_w_o", false,-1, 31,0);
    tracep->declBus(c+88,"read_data_w_o", false,-1, 31,0);
    tracep->declBus(c+89,"imm_ext_w_o", false,-1, 31,0);
    tracep->declBus(c+91,"rd_w_o", false,-1, 4,0);
    tracep->declBus(c+92,"result_src_w_o", false,-1, 1,0);
    tracep->declBit(c+93,"reg_write_w_o", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__pipeline_register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[31]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next),32);
    bufp->fullIData(oldp+36,(((IData)(4U) + vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)),32);
    bufp->fullIData(oldp+37,(((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                               [(0xffcU & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)] 
                               << 0x18U) | ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                             [(0xfffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xffcU 
                                                   & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                [(0xfffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffcU 
                                                      & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                                << 8U) 
                                               | vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                               [(0xfffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0xffcU 
                                                     & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))])))),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__pc_d),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__pc_plus4_d),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__instr_d),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__imm_ext_d),32);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,(vlSelf->cpu__DOT__alu_control_d),4);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__imm_src_d),3);
    bufp->fullCData(oldp+47,(vlSelf->cpu__DOT__result_src_d),2);
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__jump_d));
    bufp->fullBit(oldp+49,(vlSelf->cpu__DOT__branch_d));
    bufp->fullBit(oldp+50,(vlSelf->cpu__DOT__jalr_d));
    bufp->fullBit(oldp+51,(vlSelf->cpu__DOT__mem_write_d));
    bufp->fullBit(oldp+52,(vlSelf->cpu__DOT__alu_src_d));
    bufp->fullBit(oldp+53,(vlSelf->cpu__DOT__reg_write_d));
    bufp->fullBit(oldp+54,(vlSelf->cpu__DOT__byte_op_d));
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__rd1_e),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__rd2_e),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__imm_ext_e),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__pc_e),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__pc_plus4_e),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__alu_result_e),32);
    bufp->fullIData(oldp+61,((vlSelf->cpu__DOT__pc_e 
                              + vlSelf->cpu__DOT__imm_ext_e)),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__write_data_e),32);
    bufp->fullCData(oldp+63,(vlSelf->cpu__DOT__rs1_e),5);
    bufp->fullCData(oldp+64,(vlSelf->cpu__DOT__rs2_e),5);
    bufp->fullCData(oldp+65,(vlSelf->cpu__DOT__rd_e),5);
    bufp->fullCData(oldp+66,(vlSelf->cpu__DOT__alu_control_e),4);
    bufp->fullCData(oldp+67,(vlSelf->cpu__DOT__result_src_e),2);
    bufp->fullBit(oldp+68,(vlSelf->cpu__DOT__reg_write_e));
    bufp->fullBit(oldp+69,(vlSelf->cpu__DOT__mem_write_e));
    bufp->fullBit(oldp+70,(vlSelf->cpu__DOT__jump_e));
    bufp->fullBit(oldp+71,(vlSelf->cpu__DOT__branch_e));
    bufp->fullBit(oldp+72,(vlSelf->cpu__DOT__jalr_e));
    bufp->fullBit(oldp+73,(vlSelf->cpu__DOT__alu_src_e));
    bufp->fullBit(oldp+74,(vlSelf->cpu__DOT__byte_op_e));
    bufp->fullBit(oldp+75,((vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                            == vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)));
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__alu_result_m),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__result_m),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__write_data_m),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__pc_plus4_m),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu__DOT__imm_ext_m),32);
    bufp->fullCData(oldp+81,(vlSelf->cpu__DOT__rd_m),5);
    bufp->fullCData(oldp+82,(vlSelf->cpu__DOT__result_src_m),2);
    bufp->fullBit(oldp+83,(vlSelf->cpu__DOT__reg_write_m));
    bufp->fullBit(oldp+84,(vlSelf->cpu__DOT__mem_write_m));
    bufp->fullBit(oldp+85,(vlSelf->cpu__DOT__byte_op_m));
    bufp->fullIData(oldp+86,(vlSelf->cpu__DOT__alu_result_w),32);
    bufp->fullIData(oldp+87,(vlSelf->cpu__DOT__pc_plus4_w),32);
    bufp->fullIData(oldp+88,(vlSelf->cpu__DOT__read_data_w),32);
    bufp->fullIData(oldp+89,(vlSelf->cpu__DOT__imm_ext_w),32);
    bufp->fullIData(oldp+90,(vlSelf->cpu__DOT__result_w),32);
    bufp->fullCData(oldp+91,(vlSelf->cpu__DOT__rd_w),5);
    bufp->fullCData(oldp+92,(vlSelf->cpu__DOT__result_src_w),2);
    bufp->fullBit(oldp+93,(vlSelf->cpu__DOT__reg_write_w));
    bufp->fullCData(oldp+94,(vlSelf->cpu__DOT__forward1_e),2);
    bufp->fullCData(oldp+95,(vlSelf->cpu__DOT__forward2_e),2);
    bufp->fullBit(oldp+96,(vlSelf->cpu__DOT__stall_f));
    bufp->fullBit(oldp+97,(vlSelf->cpu__DOT__stall_d));
    bufp->fullBit(oldp+98,(vlSelf->cpu__DOT__flush_d));
    bufp->fullBit(oldp+99,(vlSelf->cpu__DOT__flush_e));
    bufp->fullBit(oldp+100,(vlSelf->cpu__DOT__jb_taken_e));
    bufp->fullCData(oldp+101,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
    bufp->fullCData(oldp+102,((7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+103,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+104,(vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op),2);
    bufp->fullBit(oldp+105,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 5U))));
    bufp->fullBit(oldp+106,((IData)((0x40000020U == 
                                     (0x40000020U & vlSelf->cpu__DOT__instr_d)))));
    bufp->fullIData(oldp+107,(vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr),32);
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelf->cpu__DOT__stall_d)))));
    bufp->fullIData(oldp+109,(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1),32);
    bufp->fullIData(oldp+110,(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2),32);
    bufp->fullIData(oldp+111,((vlSelf->cpu__DOT__instr_d 
                               >> 7U)),25);
    bufp->fullBit(oldp+112,(vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall));
    bufp->fullIData(oldp+113,((0xfffffffcU & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)),32);
    bufp->fullBit(oldp+114,((1U & (~ (IData)(vlSelf->cpu__DOT__stall_f)))));
    bufp->fullBit(oldp+115,(vlSelf->clk));
    bufp->fullBit(oldp+116,(vlSelf->rst));
    bufp->fullBit(oldp+117,(vlSelf->trigger));
    bufp->fullIData(oldp+118,(vlSelf->a0),32);
    bufp->fullIData(oldp+119,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+120,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+121,(((IData)(vlSelf->cpu__DOT__byte_op_m)
                                ? ((IData)(vlSelf->cpu__DOT__byte_op_m)
                                    ? vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                   [(0x1ffffU & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]
                                    : 0U) : ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                              << 0x18U) 
                                             | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                    << 8U) 
                                                   | vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]))))),32);
    bufp->fullIData(oldp+122,(0x20U),32);
    bufp->fullIData(oldp+123,(5U),32);
    bufp->fullIData(oldp+124,(8U),32);
    bufp->fullIData(oldp+125,(0x10000U),32);
    bufp->fullIData(oldp+126,(0x1ffffU),32);
    bufp->fullIData(oldp+127,(0xbfc00000U),32);
    bufp->fullIData(oldp+128,(0xbfc00fffU),32);
}
