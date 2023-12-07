// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory___024root.h"

VL_ATTR_COLD void Vdata_memory___024root___initial__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2553e7c1__0;
    // Body
    __Vtemp_h2553e7c1__0[0U] = 0x2e6d656dU;
    __Vtemp_h2553e7c1__0[1U] = 0x7369616eU;
    __Vtemp_h2553e7c1__0[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h2553e7c1__0)
                 ,  &(vlSelf->data_memory__DOT__data_ram)
                 , 0x10000U, 0x10007U);
    vlSelf->data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->data_memory__DOT__data_ram[(0x1ffffU 
                                            & vlSelf->data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->data_memory__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vdata_memory___024root___eval_initial(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_initial\n"); );
    // Body
    Vdata_memory___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

void Vdata_memory___024root___combo__TOP__0(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory___024root___eval_settle(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_settle\n"); );
    // Body
    Vdata_memory___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdata_memory___024root___final(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___final\n"); );
}

VL_ATTR_COLD void Vdata_memory___024root___ctor_var_reset(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->we_i = VL_RAND_RESET_I(1);
    vlSelf->byte_op_i = VL_RAND_RESET_I(1);
    vlSelf->addr_i = VL_RAND_RESET_I(32);
    vlSelf->wd_i = VL_RAND_RESET_I(32);
    vlSelf->rd_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
