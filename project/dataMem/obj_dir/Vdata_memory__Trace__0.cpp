// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_memory__Syms.h"


void Vdata_memory___024root__trace_chg_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdata_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_chg_top_0\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdata_memory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdata_memory___024root__trace_chg_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->data_memory__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+1,(vlSelf->clk_i));
    bufp->chgBit(oldp+2,(vlSelf->we_i));
    bufp->chgBit(oldp+3,(vlSelf->byte_op_i));
    bufp->chgIData(oldp+4,(vlSelf->addr_i),32);
    bufp->chgIData(oldp+5,(vlSelf->wd_i),32);
    bufp->chgIData(oldp+6,(vlSelf->rd_o),32);
    bufp->chgIData(oldp+7,(vlSelf->data_memory__DOT__addr),32);
}

void Vdata_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_cleanup\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
