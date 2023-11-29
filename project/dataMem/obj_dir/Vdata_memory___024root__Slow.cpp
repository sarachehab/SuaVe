// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory__Syms.h"
#include "Vdata_memory__Syms.h"
#include "Vdata_memory___024root.h"

void Vdata_memory___024root___ctor_var_reset(Vdata_memory___024root* vlSelf);

Vdata_memory___024root::Vdata_memory___024root(Vdata_memory__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_memory___024root___ctor_var_reset(this);
}

void Vdata_memory___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdata_memory___024root::~Vdata_memory___024root() {
}
