// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+34,(vlSelf->cpu__DOT__JALR_instr));
        bufp->chgBit(oldp+35,(vlSelf->cpu__DOT__mem_write));
        bufp->chgBit(oldp+36,(vlSelf->cpu__DOT__alu_src));
        bufp->chgBit(oldp+37,(vlSelf->cpu__DOT__reg_write));
        bufp->chgBit(oldp+38,(vlSelf->cpu__DOT__byte_address));
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__instr),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__program_counter__DOT__pc_next),32);
        bufp->chgIData(oldp+41,(((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__imm_ext),32);
        bufp->chgCData(oldp+43,(vlSelf->cpu__DOT__result_src),2);
        bufp->chgCData(oldp+44,(vlSelf->cpu__DOT__imm_src),3);
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__alu_control),4);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->cpu__DOT__instr)),7);
        bufp->chgCData(oldp+47,((7U & (vlSelf->cpu__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+48,((1U & (vlSelf->cpu__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+49,(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op),2);
        bufp->chgBit(oldp+50,(vlSelf->cpu__DOT__controlUnit_top__DOT__branch));
        bufp->chgBit(oldp+51,(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp));
        bufp->chgBit(oldp+52,((1U & (vlSelf->cpu__DOT__instr 
                                     >> 5U))));
        bufp->chgBit(oldp+53,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->cpu__DOT__instr)))));
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelf->cpu__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+57,((vlSelf->cpu__DOT__instr 
                                 >> 7U)),25);
        bufp->chgIData(oldp+58,((0xfffffffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+59,((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                               == vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)));
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__datapath__DOT__reg_rd1),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__datapath__DOT__reg_rd2),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr),32);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk_i));
    bufp->chgBit(oldp+66,(vlSelf->rst_i));
    bufp->chgBit(oldp+67,(vlSelf->trigger_i));
    bufp->chgIData(oldp+68,(vlSelf->a0_o),32);
    bufp->chgBit(oldp+69,((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                             != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                            & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                           | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))));
    bufp->chgIData(oldp+70,(((IData)(vlSelf->cpu__DOT__byte_address)
                              ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                  ? vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                 [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                                  : 0U) : ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                            [(0x1ffffU 
                                              & ((IData)(3U) 
                                                 + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                            << 0x18U) 
                                           | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                               [(0x1ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                               << 0x10U) 
                                              | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                  << 8U) 
                                                 | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                 [(0x1ffffU 
                                                   & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]))))),32);
    bufp->chgIData(oldp+71,(((2U & (IData)(vlSelf->cpu__DOT__result_src))
                              ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                  ? vlSelf->cpu__DOT__imm_ext
                                  : ((IData)(4U) + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                              : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                                  ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                      ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                          ? vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                         [(0x1ffffU 
                                           & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                                          : 0U) : (
                                                   (vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                          << 8U) 
                                                         | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                         [
                                                         (0x1ffffU 
                                                          & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]))))
                                  : vlSelf->cpu__DOT__alu_out))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
