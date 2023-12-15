// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdatapath__Syms.h"


VL_ATTR_COLD void Vdatapath___024root__trace_init_sub__TOP__0(Vdatapath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+39,"clk_i", false,-1);
    tracep->declBus(c+40,"reg_addr1_i", false,-1, 4,0);
    tracep->declBus(c+41,"reg_addr2_i", false,-1, 4,0);
    tracep->declBus(c+42,"reg_addr3_i", false,-1, 4,0);
    tracep->declBit(c+43,"reg_we_i", false,-1);
    tracep->declBit(c+44,"trigger_i", false,-1);
    tracep->declBus(c+45,"result_src_i", false,-1, 1,0);
    tracep->declBus(c+46,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+47,"pc_next_i", false,-1, 31,0);
    tracep->declBit(c+48,"data_mem_we_i", false,-1);
    tracep->declBit(c+49,"data_mem_byte_op_i", false,-1);
    tracep->declBus(c+50,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+51,"alu_src_i", false,-1);
    tracep->declBit(c+52,"eq_o", false,-1);
    tracep->declBus(c+53,"a0_o", false,-1, 31,0);
    tracep->declBus(c+54,"alu_out_o", false,-1, 31,0);
    tracep->pushNamePrefix("datapath ");
    tracep->declBus(c+57,"REG_ADDR_LENGTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+39,"clk_i", false,-1);
    tracep->declBus(c+40,"reg_addr1_i", false,-1, 4,0);
    tracep->declBus(c+41,"reg_addr2_i", false,-1, 4,0);
    tracep->declBus(c+42,"reg_addr3_i", false,-1, 4,0);
    tracep->declBit(c+43,"reg_we_i", false,-1);
    tracep->declBit(c+44,"trigger_i", false,-1);
    tracep->declBus(c+45,"result_src_i", false,-1, 1,0);
    tracep->declBus(c+46,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+47,"pc_next_i", false,-1, 31,0);
    tracep->declBit(c+48,"data_mem_we_i", false,-1);
    tracep->declBit(c+49,"data_mem_byte_op_i", false,-1);
    tracep->declBus(c+50,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+51,"alu_src_i", false,-1);
    tracep->declBit(c+52,"eq_o", false,-1);
    tracep->declBus(c+53,"a0_o", false,-1, 31,0);
    tracep->declBus(c+54,"alu_out_o", false,-1, 31,0);
    tracep->declBus(c+35,"reg_rd1", false,-1, 31,0);
    tracep->declBus(c+36,"reg_rd2", false,-1, 31,0);
    tracep->declBus(c+55,"data_mem_rd", false,-1, 31,0);
    tracep->declBus(c+56,"reg_wd", false,-1, 31,0);
    tracep->pushNamePrefix("datapath_alu ");
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"src1_i", false,-1, 31,0);
    tracep->declBus(c+37,"src2_i", false,-1, 31,0);
    tracep->declBus(c+50,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+52,"eq_o", false,-1);
    tracep->declBus(c+54,"alu_result_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath_data_memory ");
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+61,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+39,"clk_i", false,-1);
    tracep->declBit(c+48,"we_i", false,-1);
    tracep->declBit(c+49,"byte_op_i", false,-1);
    tracep->declBus(c+54,"addr_i", false,-1, 31,0);
    tracep->declBus(c+36,"wd_i", false,-1, 31,0);
    tracep->declBus(c+55,"rd_o", false,-1, 31,0);
    tracep->declBus(c+38,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath_register_file ");
    tracep->declBus(c+57,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+43,"addr3_we_i", false,-1);
    tracep->declBit(c+39,"clk_i", false,-1);
    tracep->declBit(c+44,"trigger_i", false,-1);
    tracep->declBus(c+40,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+41,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+42,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+56,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+35,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+36,"rd2_o", false,-1, 31,0);
    tracep->declBus(c+53,"a0_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vdatapath___024root__trace_init_top(Vdatapath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_init_top\n"); );
    // Body
    Vdatapath___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdatapath___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdatapath___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdatapath___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdatapath___024root__trace_register(Vdatapath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdatapath___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdatapath___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdatapath___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdatapath___024root__trace_full_sub_0(Vdatapath___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdatapath___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_full_top_0\n"); );
    // Init
    Vdatapath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath___024root*>(voidSelf);
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdatapath___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdatapath___024root__trace_full_sub_0(Vdatapath___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    bufp->fullIData(oldp+35,(vlSelf->datapath__DOT__reg_rd1),32);
    bufp->fullIData(oldp+36,(vlSelf->datapath__DOT__reg_rd2),32);
    bufp->fullIData(oldp+37,(vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
    bufp->fullIData(oldp+38,(vlSelf->datapath__DOT__datapath_data_memory__DOT__addr),32);
    bufp->fullBit(oldp+39,(vlSelf->clk_i));
    bufp->fullCData(oldp+40,(vlSelf->reg_addr1_i),5);
    bufp->fullCData(oldp+41,(vlSelf->reg_addr2_i),5);
    bufp->fullCData(oldp+42,(vlSelf->reg_addr3_i),5);
    bufp->fullBit(oldp+43,(vlSelf->reg_we_i));
    bufp->fullBit(oldp+44,(vlSelf->trigger_i));
    bufp->fullCData(oldp+45,(vlSelf->result_src_i),2);
    bufp->fullIData(oldp+46,(vlSelf->imm_ext_i),32);
    bufp->fullIData(oldp+47,(vlSelf->pc_next_i),32);
    bufp->fullBit(oldp+48,(vlSelf->data_mem_we_i));
    bufp->fullBit(oldp+49,(vlSelf->data_mem_byte_op_i));
    bufp->fullCData(oldp+50,(vlSelf->alu_control_i),4);
    bufp->fullBit(oldp+51,(vlSelf->alu_src_i));
    bufp->fullBit(oldp+52,(vlSelf->eq_o));
    bufp->fullIData(oldp+53,(vlSelf->a0_o),32);
    bufp->fullIData(oldp+54,(vlSelf->alu_out_o),32);
    bufp->fullIData(oldp+55,(((IData)(vlSelf->data_mem_byte_op_i)
                               ? ((IData)(vlSelf->data_mem_byte_op_i)
                                   ? vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                  [(0x1ffffU & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]
                                   : 0U) : ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                             [(0x1ffffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                             << 0x18U) 
                                            | ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                << 0x10U) 
                                               | ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                   << 8U) 
                                                  | vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]))))),32);
    bufp->fullIData(oldp+56,(((2U & (IData)(vlSelf->result_src_i))
                               ? ((1U & (IData)(vlSelf->result_src_i))
                                   ? vlSelf->imm_ext_i
                                   : vlSelf->pc_next_i)
                               : ((1U & (IData)(vlSelf->result_src_i))
                                   ? ((IData)(vlSelf->data_mem_byte_op_i)
                                       ? ((IData)(vlSelf->data_mem_byte_op_i)
                                           ? vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                          [(0x1ffffU 
                                            & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]
                                           : 0U) : 
                                      ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & ((IData)(3U) 
                                             + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                        << 0x18U) | 
                                       ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                         [(0x1ffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                         << 0x10U) 
                                        | ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                            << 8U) 
                                           | vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                           [(0x1ffffU 
                                             & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]))))
                                   : vlSelf->alu_out_o))),32);
    bufp->fullIData(oldp+57,(5U),32);
    bufp->fullIData(oldp+58,(0x20U),32);
    bufp->fullIData(oldp+59,(8U),32);
    bufp->fullIData(oldp+60,(0x10000U),32);
    bufp->fullIData(oldp+61,(0x1ffffU),32);
}
