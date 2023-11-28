// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file__Syms.h"


VL_ATTR_COLD void Vregister_file___024root__trace_init_sub__TOP__0(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,"addr3_we_i", false,-1);
    tracep->declBit(c+35,"clk_i", false,-1);
    tracep->declBus(c+36,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+37,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+38,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+39,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+40,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+41,"rd2_o", false,-1, 31,0);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+42,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"addr3_we_i", false,-1);
    tracep->declBit(c+35,"clk_i", false,-1);
    tracep->declBus(c+36,"addr1_i", false,-1, 4,0);
    tracep->declBus(c+37,"addr2_i", false,-1, 4,0);
    tracep->declBus(c+38,"addr3_i", false,-1, 4,0);
    tracep->declBus(c+39,"addr3_wd_i", false,-1, 31,0);
    tracep->declBus(c+40,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+41,"rd2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vregister_file___024root__trace_init_top(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_init_top\n"); );
    // Body
    Vregister_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregister_file___024root__trace_register(Vregister_file___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregister_file___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregister_file___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregister_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregister_file___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_top_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregister_file___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregister_file___024root__trace_full_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->reg_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+34,(vlSelf->addr3_we_i));
    bufp->fullBit(oldp+35,(vlSelf->clk_i));
    bufp->fullCData(oldp+36,(vlSelf->addr1_i),5);
    bufp->fullCData(oldp+37,(vlSelf->addr2_i),5);
    bufp->fullCData(oldp+38,(vlSelf->addr3_i),5);
    bufp->fullIData(oldp+39,(vlSelf->addr3_wd_i),32);
    bufp->fullIData(oldp+40,(vlSelf->rd1_o),32);
    bufp->fullIData(oldp+41,(vlSelf->rd2_o),32);
    bufp->fullIData(oldp+42,(5U),32);
    bufp->fullIData(oldp+43,(0x20U),32);
}
