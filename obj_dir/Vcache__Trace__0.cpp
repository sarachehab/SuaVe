// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache__Syms.h"


void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_top_0\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcache___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cache__DOT__line__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cache__DOT__memory__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->cache__DOT__mem_incoming_data),32);
        bufp->chgIData(oldp+3,(vlSelf->cache__DOT__mem_address),32);
        bufp->chgIData(oldp+4,(vlSelf->cache__DOT__mem_write_data),32);
        bufp->chgBit(oldp+5,(vlSelf->cache__DOT__mem_write_enable));
        bufp->chgIData(oldp+6,(vlSelf->cache__DOT__line__DOT__cache_data[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->cache__DOT__line__DOT__cache_data[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->cache__DOT__line__DOT__cache_data[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->cache__DOT__line__DOT__cache_data[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->cache__DOT__line__DOT__cache_tag[0]),30);
        bufp->chgIData(oldp+11,(vlSelf->cache__DOT__line__DOT__cache_tag[1]),30);
        bufp->chgIData(oldp+12,(vlSelf->cache__DOT__line__DOT__cache_tag[2]),30);
        bufp->chgIData(oldp+13,(vlSelf->cache__DOT__line__DOT__cache_tag[3]),30);
        bufp->chgBit(oldp+14,(vlSelf->cache__DOT__line__DOT__valid[0]));
        bufp->chgBit(oldp+15,(vlSelf->cache__DOT__line__DOT__valid[1]));
        bufp->chgBit(oldp+16,(vlSelf->cache__DOT__line__DOT__valid[2]));
        bufp->chgBit(oldp+17,(vlSelf->cache__DOT__line__DOT__valid[3]));
        bufp->chgBit(oldp+18,(vlSelf->cache__DOT__line__DOT__hit));
        bufp->chgCData(oldp+19,(vlSelf->cache__DOT__line__DOT__wayhit),2);
        bufp->chgIData(oldp+20,(vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+21,((0xfffffffcU & vlSelf->cache__DOT__mem_address)),32);
    }
    bufp->chgBit(oldp+22,(vlSelf->clk_i));
    bufp->chgBit(oldp+23,(vlSelf->write_enable_i));
    bufp->chgBit(oldp+24,(vlSelf->cache_enable_i));
    bufp->chgIData(oldp+25,(vlSelf->address_i),32);
    bufp->chgIData(oldp+26,(vlSelf->write_data_i),32);
    bufp->chgIData(oldp+27,(vlSelf->read_data_o),32);
    bufp->chgCData(oldp+28,(vlSelf->cache__DOT__line__DOT__counter),2);
    bufp->chgIData(oldp+29,((vlSelf->address_i >> 2U)),30);
}

void Vcache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_cleanup\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
