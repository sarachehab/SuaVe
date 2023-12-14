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
    tracep->declBit(c+23,"clk_i", false,-1);
    tracep->declBit(c+24,"write_enable_i", false,-1);
    tracep->declBit(c+25,"cache_enable_i", false,-1);
    tracep->declBus(c+26,"address_i", false,-1, 31,0);
    tracep->declBus(c+27,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+28,"read_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("cache ");
    tracep->declBit(c+23,"clk_i", false,-1);
    tracep->declBit(c+24,"write_enable_i", false,-1);
    tracep->declBit(c+25,"cache_enable_i", false,-1);
    tracep->declBus(c+26,"address_i", false,-1, 31,0);
    tracep->declBus(c+27,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+28,"read_data_o", false,-1, 31,0);
    tracep->declBus(c+3,"mem_incoming_data", false,-1, 31,0);
    tracep->declBus(c+4,"mem_address", false,-1, 31,0);
    tracep->declBus(c+5,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+6,"mem_write_enable", false,-1);
    tracep->declBit(c+31,"mem_byte_op", false,-1);
    tracep->pushNamePrefix("line ");
    tracep->declBus(c+32,"width", false,-1, 31,0);
    tracep->declBus(c+33,"tag_bits", false,-1, 31,0);
    tracep->declBit(c+23,"clk_i", false,-1);
    tracep->declBit(c+24,"write_enable_i", false,-1);
    tracep->declBit(c+25,"cache_enable_i", false,-1);
    tracep->declBus(c+26,"address_i", false,-1, 31,0);
    tracep->declBus(c+27,"write_data_i", false,-1, 31,0);
    tracep->declBus(c+28,"read_data_o", false,-1, 31,0);
    tracep->declBus(c+3,"mem_incoming_data_i", false,-1, 31,0);
    tracep->declBus(c+4,"mem_address_o", false,-1, 31,0);
    tracep->declBus(c+5,"mem_write_data_o", false,-1, 31,0);
    tracep->declBit(c+6,"mem_write_enable_o", false,-1);
    tracep->declBit(c+31,"mem_byte_op_o", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"cache_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,"cache_tag", true,(i+0), 29,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+15+i*1,"valid", true,(i+0));
    }
    tracep->declBus(c+29,"counter", false,-1, 1,0);
    tracep->declBus(c+30,"tag", false,-1, 29,0);
    tracep->declBit(c+19,"hit", false,-1);
    tracep->declBus(c+20,"wayhit", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+21,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"START_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+36,"END_ADDRESS", false,-1, 31,0);
    tracep->declBit(c+23,"clk_i", false,-1);
    tracep->declBit(c+6,"we_i", false,-1);
    tracep->declBit(c+31,"byte_op_i", false,-1);
    tracep->declBus(c+4,"addr_i", false,-1, 31,0);
    tracep->declBus(c+5,"wd_i", false,-1, 31,0);
    tracep->declBus(c+3,"rd_o", false,-1, 31,0);
    tracep->declBus(c+22,"addr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->cache__DOT__line__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cache__DOT__memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cache__DOT__mem_incoming_data),32);
    bufp->fullIData(oldp+4,(vlSelf->cache__DOT__mem_address),32);
    bufp->fullIData(oldp+5,(vlSelf->cache__DOT__mem_write_data),32);
    bufp->fullBit(oldp+6,(vlSelf->cache__DOT__mem_write_enable));
    bufp->fullIData(oldp+7,(vlSelf->cache__DOT__line__DOT__cache_data[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->cache__DOT__line__DOT__cache_data[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->cache__DOT__line__DOT__cache_data[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->cache__DOT__line__DOT__cache_data[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->cache__DOT__line__DOT__cache_tag[0]),30);
    bufp->fullIData(oldp+12,(vlSelf->cache__DOT__line__DOT__cache_tag[1]),30);
    bufp->fullIData(oldp+13,(vlSelf->cache__DOT__line__DOT__cache_tag[2]),30);
    bufp->fullIData(oldp+14,(vlSelf->cache__DOT__line__DOT__cache_tag[3]),30);
    bufp->fullBit(oldp+15,(vlSelf->cache__DOT__line__DOT__valid[0]));
    bufp->fullBit(oldp+16,(vlSelf->cache__DOT__line__DOT__valid[1]));
    bufp->fullBit(oldp+17,(vlSelf->cache__DOT__line__DOT__valid[2]));
    bufp->fullBit(oldp+18,(vlSelf->cache__DOT__line__DOT__valid[3]));
    bufp->fullBit(oldp+19,(vlSelf->cache__DOT__line__DOT__hit));
    bufp->fullCData(oldp+20,(vlSelf->cache__DOT__line__DOT__wayhit),2);
    bufp->fullIData(oldp+21,(vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+22,((0xfffffffcU & vlSelf->cache__DOT__mem_address)),32);
    bufp->fullBit(oldp+23,(vlSelf->clk_i));
    bufp->fullBit(oldp+24,(vlSelf->write_enable_i));
    bufp->fullBit(oldp+25,(vlSelf->cache_enable_i));
    bufp->fullIData(oldp+26,(vlSelf->address_i),32);
    bufp->fullIData(oldp+27,(vlSelf->write_data_i),32);
    bufp->fullIData(oldp+28,(vlSelf->read_data_o),32);
    bufp->fullCData(oldp+29,(vlSelf->cache__DOT__line__DOT__counter),2);
    bufp->fullIData(oldp+30,((vlSelf->address_i >> 2U)),30);
    bufp->fullBit(oldp+31,(0U));
    bufp->fullIData(oldp+32,(0x20U),32);
    bufp->fullIData(oldp+33,(0x1eU),32);
    bufp->fullIData(oldp+34,(8U),32);
    bufp->fullIData(oldp+35,(0U),32);
    bufp->fullIData(oldp+36,(0x1ffffU),32);
}
