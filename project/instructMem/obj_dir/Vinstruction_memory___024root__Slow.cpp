// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory.h for the primary calling header

#include "verilated.h"

#include "Vinstruction_memory__Syms.h"
#include "Vinstruction_memory___024root.h"

void Vinstruction_memory___024root___ctor_var_reset(Vinstruction_memory___024root* vlSelf);

Vinstruction_memory___024root::Vinstruction_memory___024root(Vinstruction_memory__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinstruction_memory___024root___ctor_var_reset(this);
}

void Vinstruction_memory___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vinstruction_memory___024root::~Vinstruction_memory___024root() {
}
