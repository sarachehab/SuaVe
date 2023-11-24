// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0 = 0U;
    if ((1U & (~ (vlSelf->top__DOT__instr >> 6U)))) {
        __Vdlyvval__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0 
            = (vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
               + vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2);
        __Vdlyvset__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter 
        = ((IData)(vlSelf->rst) ? 0U : (((vlSelf->top__DOT__instr 
                                          >> 6U) & 
                                         (vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                                          != vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2))
                                         ? (vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter 
                                            + vlSelf->top__DOT__ImmOP)
                                         : ((IData)(4U) 
                                            + vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)));
    if (__Vdlyvset__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0) {
        vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[__Vdlyvdim0__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__DATAPATH__DOT__regf__DOT__rf__v0;
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
