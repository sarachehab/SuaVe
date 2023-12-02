// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "verilated.h"

#include "Vinstruction_memory___024root.h"

VL_ATTR_COLD void Vinstruction_memory___024root___initial__TOP__0(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he5f77a3e__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_he5f77a3e__0[0U] = 0x2e6d656dU;
    __Vtemp_he5f77a3e__0[1U] = 0x696f6e73U;
    __Vtemp_he5f77a3e__0[2U] = 0x72756374U;
    __Vtemp_he5f77a3e__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_he5f77a3e__0)
                 ,  &(vlSelf->instruction_memory__DOT__rom)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
}

VL_ATTR_COLD void Vinstruction_memory___024root___eval_initial(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_initial\n"); );
    // Body
    Vinstruction_memory___024root___initial__TOP__0(vlSelf);
}

void Vinstruction_memory___024root___combo__TOP__0(Vinstruction_memory___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory___024root___eval_settle(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___eval_settle\n"); );
    // Body
    Vinstruction_memory___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vinstruction_memory___024root___final(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___final\n"); );
}

VL_ATTR_COLD void Vinstruction_memory___024root___ctor_var_reset(Vinstruction_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->addr_i = VL_RAND_RESET_I(32);
    vlSelf->instr_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->instruction_memory__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
}
