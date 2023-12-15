// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdatapath__Syms.h"


void Vdatapath___024root__trace_chg_sub_0(Vdatapath___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdatapath___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_chg_top_0\n"); );
    // Init
    Vdatapath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath___024root*>(voidSelf);
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdatapath___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdatapath___024root__trace_chg_sub_0(Vdatapath___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->datapath__DOT__reg_rd1),32);
        bufp->chgIData(oldp+35,(vlSelf->datapath__DOT__reg_rd2),32);
        bufp->chgIData(oldp+36,(vlSelf->datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
        bufp->chgIData(oldp+37,(vlSelf->datapath__DOT__datapath_data_memory__DOT__addr),32);
    }
    bufp->chgBit(oldp+38,(vlSelf->clk_i));
    bufp->chgCData(oldp+39,(vlSelf->reg_addr1_i),5);
    bufp->chgCData(oldp+40,(vlSelf->reg_addr2_i),5);
    bufp->chgCData(oldp+41,(vlSelf->reg_addr3_i),5);
    bufp->chgBit(oldp+42,(vlSelf->reg_we_i));
    bufp->chgBit(oldp+43,(vlSelf->trigger_i));
    bufp->chgCData(oldp+44,(vlSelf->result_src_i),2);
    bufp->chgIData(oldp+45,(vlSelf->imm_ext_i),32);
    bufp->chgIData(oldp+46,(vlSelf->pc_next_i),32);
    bufp->chgBit(oldp+47,(vlSelf->data_mem_we_i));
    bufp->chgBit(oldp+48,(vlSelf->data_mem_byte_op_i));
    bufp->chgCData(oldp+49,(vlSelf->alu_control_i),4);
    bufp->chgBit(oldp+50,(vlSelf->alu_src_i));
    bufp->chgBit(oldp+51,(vlSelf->eq_o));
    bufp->chgIData(oldp+52,(vlSelf->a0_o),32);
    bufp->chgIData(oldp+53,(vlSelf->alu_out_o),32);
    bufp->chgIData(oldp+54,(((IData)(vlSelf->data_mem_byte_op_i)
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
                                                 [(0x1ffffU 
                                                   & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]))))),32);
    bufp->chgIData(oldp+55,(((2U & (IData)(vlSelf->result_src_i))
                              ? ((1U & (IData)(vlSelf->result_src_i))
                                  ? vlSelf->imm_ext_i
                                  : vlSelf->pc_next_i)
                              : ((1U & (IData)(vlSelf->result_src_i))
                                  ? ((IData)(vlSelf->data_mem_byte_op_i)
                                      ? ((IData)(vlSelf->data_mem_byte_op_i)
                                          ? vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                         [(0x1ffffU 
                                           & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]
                                          : 0U) : (
                                                   (vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->datapath__DOT__datapath_data_memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
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
                                                          & vlSelf->datapath__DOT__datapath_data_memory__DOT__addr)]))))
                                  : vlSelf->alu_out_o))),32);
}

void Vdatapath___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath___024root__trace_cleanup\n"); );
    // Init
    Vdatapath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath___024root*>(voidSelf);
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
