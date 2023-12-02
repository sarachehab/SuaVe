// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_memory__Syms.h"


VL_ATTR_COLD void Vdata_memory___024root__trace_init_sub__TOP__0(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2,"clk_i", false,-1);
    tracep->declBit(c+3,"we_i", false,-1);
    tracep->declBit(c+4,"byte_op_i", false,-1);
    tracep->declBus(c+5,"addr_i", false,-1, 31,0);
    tracep->declBus(c+6,"wd_i", false,-1, 31,0);
    tracep->declBus(c+7,"rd_o", false,-1, 31,0);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+9,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+13,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+2,"clk_i", false,-1);
    tracep->declBit(c+3,"we_i", false,-1);
    tracep->declBit(c+4,"byte_op_i", false,-1);
    tracep->declBus(c+5,"addr_i", false,-1, 31,0);
    tracep->declBus(c+6,"wd_i", false,-1, 31,0);
    tracep->declBus(c+7,"rd_o", false,-1, 31,0);
    tracep->declBus(c+8,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_init_top(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_init_top\n"); );
    // Body
    Vdata_memory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_memory___024root__trace_register(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdata_memory___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdata_memory___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdata_memory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_full_top_0\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_memory___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->data_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->clk_i));
    bufp->fullBit(oldp+3,(vlSelf->we_i));
    bufp->fullBit(oldp+4,(vlSelf->byte_op_i));
    bufp->fullIData(oldp+5,(vlSelf->addr_i),32);
    bufp->fullIData(oldp+6,(vlSelf->wd_i),32);
    bufp->fullIData(oldp+7,(vlSelf->rd_o),32);
    bufp->fullIData(oldp+8,(vlSelf->data_memory__DOT__addr),32);
    bufp->fullIData(oldp+9,(5U),32);
    bufp->fullIData(oldp+10,(0x20U),32);
    bufp->fullIData(oldp+11,(8U),32);
    bufp->fullIData(oldp+12,(0x10000U),32);
    bufp->fullIData(oldp+13,(0x1ffffU),32);
}
