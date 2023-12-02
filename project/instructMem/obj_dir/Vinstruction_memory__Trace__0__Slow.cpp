// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstruction_memory__Syms.h"


VL_ATTR_COLD void Vinstruction_memory___024root__trace_init_sub__TOP__0(Vinstruction_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"instr_o", false,-1, 31,0);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBus(c+4,"ADDR_EXP", false,-1, 31,0);
    tracep->declBus(c+5,"BYTE_SIZE", false,-1, 31,0);
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"FIRST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+8,"LAST_INSTR_ADDR", false,-1, 31,0);
    tracep->declBus(c+1,"addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"instr_o", false,-1, 31,0);
    tracep->declBus(c+3,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vinstruction_memory___024root__trace_init_top(Vinstruction_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_init_top\n"); );
    // Body
    Vinstruction_memory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinstruction_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstruction_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstruction_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinstruction_memory___024root__trace_register(Vinstruction_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vinstruction_memory___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vinstruction_memory___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vinstruction_memory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinstruction_memory___024root__trace_full_sub_0(Vinstruction_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinstruction_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_full_top_0\n"); );
    // Init
    Vinstruction_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstruction_memory___024root*>(voidSelf);
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vinstruction_memory___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinstruction_memory___024root__trace_full_sub_0(Vinstruction_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->addr_i),32);
    bufp->fullIData(oldp+2,(vlSelf->instr_o),32);
    bufp->fullIData(oldp+3,((0xfffffffcU & vlSelf->addr_i)),32);
    bufp->fullIData(oldp+4,(0xcU),32);
    bufp->fullIData(oldp+5,(8U),32);
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullIData(oldp+7,(0xbfc00000U),32);
    bufp->fullIData(oldp+8,(0xbfc00fffU),32);
}
