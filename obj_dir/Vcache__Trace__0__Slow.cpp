// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache__Syms.h"


VL_ATTR_COLD void Vcache___024root__trace_init_sub__TOP__0(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk_i", false,-1);
    tracep->declBus(c+6,"address_i", false,-1, 31,0);
    tracep->declBit(c+7,"write_enable_i", false,-1);
    tracep->declBus(c+8,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+9,"read_data_o", false,-1, 31,0);
    tracep->declBit(c+10,"hit_o", false,-1);
    tracep->pushNamePrefix("cache ");
    tracep->declBit(c+5,"clk_i", false,-1);
    tracep->declBus(c+6,"address_i", false,-1, 31,0);
    tracep->declBit(c+7,"write_enable_i", false,-1);
    tracep->declBus(c+8,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+9,"read_data_o", false,-1, 31,0);
    tracep->declBit(c+10,"hit_o", false,-1);
    tracep->declBus(c+14,"set_bits", false,-1, 31,0);
    tracep->declBus(c+15,"tag_bits", false,-1, 31,0);
    tracep->declBus(c+16,"data_width", false,-1, 31,0);
    tracep->declBus(c+11,"tag", false,-1, 25,0);
    tracep->declBus(c+12,"set", false,-1, 3,0);
    tracep->declBit(c+13,"hit", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+4,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcache___024root__trace_init_top(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_init_top\n"); );
    // Body
    Vcache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache___024root__trace_register(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcache___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcache___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache___024root__trace_full_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_full_top_0\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcache___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache___024root__trace_full_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelf->cache__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullBit(oldp+5,(vlSelf->clk_i));
    bufp->fullIData(oldp+6,(vlSelf->address_i),32);
    bufp->fullBit(oldp+7,(vlSelf->write_enable_i));
    bufp->fullIData(oldp+8,(vlSelf->write_data_i),32);
    bufp->fullIData(oldp+9,(vlSelf->read_data_o),32);
    bufp->fullBit(oldp+10,(vlSelf->hit_o));
    bufp->fullIData(oldp+11,((vlSelf->address_i >> 6U)),26);
    bufp->fullCData(oldp+12,((0xfU & (vlSelf->address_i 
                                      >> 2U))),4);
    bufp->fullBit(oldp+13,(vlSelf->cache__DOT__hit));
    bufp->fullIData(oldp+14,(4U),32);
    bufp->fullIData(oldp+15,(0x1aU),32);
    bufp->fullIData(oldp+16,(0x20U),32);
}
