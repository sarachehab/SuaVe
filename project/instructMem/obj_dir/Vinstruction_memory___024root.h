// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_memory.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_
#define VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_  // guard

#include "verilated.h"

class Vinstruction_memory__Syms;

class Vinstruction_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(addr_i,31,0);
    VL_OUT(instr_o,31,0);
    VlUnpacked<CData/*7:0*/, 4096> instruction_memory__DOT__rom;

    // INTERNAL VARIABLES
    Vinstruction_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstruction_memory___024root(Vinstruction_memory__Syms* symsp, const char* name);
    ~Vinstruction_memory___024root();
    VL_UNCOPYABLE(Vinstruction_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
