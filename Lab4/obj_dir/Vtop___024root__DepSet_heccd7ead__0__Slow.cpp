// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he5f77a3e__0;
    // Body
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[1U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[2U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[3U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[4U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[5U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[6U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[7U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[8U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[9U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xaU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xbU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xcU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xdU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xeU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0xfU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x10U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x11U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x12U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x13U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x14U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x15U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x16U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x17U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x18U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x19U] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1aU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1bU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1cU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1dU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1eU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0x1fU] = 0U;
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Loading rom.\n");
    __Vtemp_he5f77a3e__0[0U] = 0x2e6d656dU;
    __Vtemp_he5f77a3e__0[1U] = 0x696f6e73U;
    __Vtemp_he5f77a3e__0[2U] = 0x72756374U;
    __Vtemp_he5f77a3e__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_he5f77a3e__0)
                 ,  &(vlSelf->top__DOT__INSTRMEM__DOT__rom_array)
                 , 0, ~0ULL);
    vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf
        [0xaU];
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__INSTRMEM__DOT__rom_array
                                [(0x1cU & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)] 
                                << 0x18U) | ((vlSelf->top__DOT__INSTRMEM__DOT__rom_array
                                              [(0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x1cU 
                                                    & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__INSTRMEM__DOT__rom_array
                                                 [(0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x1cU 
                                                       & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__INSTRMEM__DOT__rom_array
                                                [(0x1fU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0x1cU 
                                                      & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)))])));
    vlSelf->top__DOT__DATAPATH__DOT__ALUop1 = vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__ImmOP = ((0x40U & vlSelf->top__DOT__instr)
                                ? (((- (IData)((vlSelf->top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xdU) | ((0x1000U 
                                                 & (vlSelf->top__DOT__instr 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__instr 
                                                            >> 7U))))))
                                : (((- (IData)((vlSelf->top__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->top__DOT__instr 
                                                >> 0x14U)));
    vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2 
        = ((0x20U & vlSelf->top__DOT__instr) ? vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf
           [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))]
            : vlSelf->top__DOT__ImmOP);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOP = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DATAPATH__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__INSTRMEM__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
