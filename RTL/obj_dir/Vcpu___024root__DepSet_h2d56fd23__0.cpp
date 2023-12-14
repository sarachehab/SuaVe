// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    IData/*25:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v10;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v14;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v18;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v22;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    IData/*25:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5;
    CData/*1:0*/ __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29;
    CData/*3:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    // Body
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30 = 0U;
    if (vlSelf->cpu__DOT__mem_write) {
        if (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op) {
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 
                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 
                = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr);
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op)))) {
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 
                = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr);
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                            >> 8U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                            >> 0x10U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4 
                = (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                   >> 0x18U);
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
        }
    }
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0 
        = vlSelf->trigger_i;
    if (((IData)(vlSelf->cpu__DOT__reg_write) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->cpu__DOT__instr 
                                                     >> 7U))))) {
        __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = ((2U & (IData)(vlSelf->cpu__DOT__result_src))
                ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? vlSelf->cpu__DOT__imm_ext : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? vlSelf->cpu__DOT__datapath__DOT__data_mem_rd
                    : vlSelf->cpu__DOT__alu_out));
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x13U] 
        = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    if (__Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    }
    if (vlSelf->cpu__DOT__cach_enable) {
        if (((~ (IData)(vlSelf->cpu__DOT__mem_write)) 
             & (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit))) {
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk5__DOT__i = 4U;
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0 = 1U;
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            if (((0U != (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit)) 
                 & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][0U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((1U != (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit)) 
                 & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][1U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((2U != (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit)) 
                 & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][2U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((3U != (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit)) 
                 & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))][vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][3U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
        }
        if (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__readmiss) {
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk6__DOT__i = 4U;
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op = 0U;
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 
                = (vlSelf->cpu__DOT__alu_out >> 6U);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 = 1U;
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data;
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            if (((0U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][0U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((1U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][1U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((2U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][2U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((3U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][3U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
        } else if (VL_UNLIKELY(((IData)(vlSelf->cpu__DOT__mem_write) 
                                & (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit)))) {
            VL_WRITEF("write data: %x\n",32,vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk7__DOT__i = 4U;
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op 
                = vlSelf->cpu__DOT__byte_address;
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
            VL_WRITEF("%x %x %x %x\t%x\t%x\n",32,vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                      [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                >> 2U))][3U],32,vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                      [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                >> 2U))][2U],32,vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                      [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                >> 2U))][1U],32,vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                      [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                >> 2U))][0U],4,(0xfU 
                                                & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U)),
                      32,vlSelf->cpu__DOT__alu_out);
            if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U))][0U] == (vlSelf->cpu__DOT__alu_out 
                                            >> 6U))) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if (vlSelf->cpu__DOT__byte_address) {
                    if ((2U & vlSelf->cpu__DOT__alu_out)) {
                        if ((1U & vlSelf->cpu__DOT__alu_out)) {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 0x18U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        } else {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 0x10U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        }
                    } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 8U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 0U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    }
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 
                        = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v10 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [1U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [2U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [3U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
            }
            if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U))][1U] == (vlSelf->cpu__DOT__alu_out 
                                            >> 6U))) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if (vlSelf->cpu__DOT__byte_address) {
                    if ((2U & vlSelf->cpu__DOT__alu_out)) {
                        if ((1U & vlSelf->cpu__DOT__alu_out)) {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 0x18U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        } else {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 0x10U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        }
                    } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 8U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 0U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    }
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 
                        = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v14 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [0U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [2U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [3U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
            }
            if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U))][2U] == (vlSelf->cpu__DOT__alu_out 
                                            >> 6U))) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if (vlSelf->cpu__DOT__byte_address) {
                    if ((2U & vlSelf->cpu__DOT__alu_out)) {
                        if ((1U & vlSelf->cpu__DOT__alu_out)) {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11 = 0x18U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        } else {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12 = 0x10U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        }
                    } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13 = 8U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14 = 0U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    }
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15 
                        = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v18 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [0U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [1U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [3U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
            }
            if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U))][3U] == (vlSelf->cpu__DOT__alu_out 
                                            >> 6U))) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 4U;
                if (vlSelf->cpu__DOT__byte_address) {
                    if ((2U & vlSelf->cpu__DOT__alu_out)) {
                        if ((1U & vlSelf->cpu__DOT__alu_out)) {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16 = 0x18U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        } else {
                            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17 
                                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17 = 1U;
                            __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17 = 0x10U;
                            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17 
                                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U));
                        }
                    } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18 = 8U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19 = 0U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    }
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20 
                        = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v22 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [0U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [1U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                     [(0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U))][3U])) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25 
                        = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                           >> 2U))]
                                 [2U] - (IData)(1U)));
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25 = 1U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
            }
        } else if (((IData)(vlSelf->cpu__DOT__mem_write) 
                    & (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit)))) {
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk9__DOT__i = 4U;
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26 = 1U;
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            if (vlSelf->cpu__DOT__byte_address) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op = 1U;
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                    = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                if ((2U & vlSelf->cpu__DOT__alu_out)) {
                    if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 = 0x18U;
                        __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                            [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                      >> 2U))];
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 = 0x10U;
                        __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                            [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                      >> 2U))];
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22 
                            = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U));
                    }
                } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 = 8U;
                    __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                        [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                  >> 2U))];
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 = 0U;
                    __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                        [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                  >> 2U))];
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24 
                        = (0xfU & (vlSelf->cpu__DOT__alu_out 
                                   >> 2U));
                }
            } else {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op = 0U;
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                    = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25 
                    = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25 = 1U;
                __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25 
                    = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))];
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 
                = (vlSelf->cpu__DOT__alu_out >> 6U);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 = 1U;
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            __Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                [(0xfU & (vlSelf->cpu__DOT__alu_out 
                          >> 2U))];
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5 
                = (0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U));
            if (((0U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [0U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][0U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((1U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [1U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][1U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((2U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [2U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][2U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
            if (((3U != vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))]) & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [3U] > vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]
                                         [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                                         [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                                   >> 2U))]]))) {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30 
                    = (3U & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][3U] 
                             - (IData)(1U)));
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30 
                    = (0xfU & (vlSelf->cpu__DOT__alu_out 
                               >> 2U));
            }
        }
    }
    vlSelf->a0_o = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1][0U] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2][1U] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3][2U] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4][3U] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v5] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1][0U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1]
                [0U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2][0U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2]
                [0U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3][0U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3]
                [0U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4][0U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4]
                [0U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6][1U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6]
                [1U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7][1U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7]
                [1U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8][1U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8]
                [1U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9][1U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9]
                [1U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11][2U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11]
                [2U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v11))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12][2U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12]
                [2U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v12))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13][2U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13]
                [2U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v13))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14][2U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14]
                [2U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v14))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v15;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16][3U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16]
                [3U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v16))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17][3U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17]
                [3U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v17))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18][3U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18]
                [3U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v18))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19][3U] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19]
                [3U]) | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19) 
                                          << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v19))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v20;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21]
                [__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v21))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22]
                [__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v22))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23]
                [__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v23))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24]
                [__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v24))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v25;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v0] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v1;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v2;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v3;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v4;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v5] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v6;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v7;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v8;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v9;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v10][0U] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v11;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v12;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v13;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v14][1U] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v15;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v16;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v17;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v3) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v18][2U] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v19;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v20;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v21;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v4) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v22][3U] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v23;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v24;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v25;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26][__Vdlyvdim1__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v26] = 3U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27][0U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v27;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28][1U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v28;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29][2U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v29;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30][3U] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age__v30;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_ha986a0c0_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha5941d2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h529afe2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_ha1b5330d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h25645c8f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hf32ca493_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h105add6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hd9ece95d_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vcpu__ConstPool__TABLE_h2c28dff1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcpu__ConstPool__TABLE_hfa800c22_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    IData/*31:0*/ __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    // Body
    __Vdly__cpu__DOT__program_counter__DOT__pc_next 
        = vlSelf->cpu__DOT__program_counter__DOT__pc_next;
    if (vlSelf->rst_i) {
        __Vdly__cpu__DOT__program_counter__DOT__pc_next = 0xbfc00000U;
    } else if (vlSelf->cpu__DOT__JALR_instr) {
        if (vlSelf->cpu__DOT__JALR_instr) {
            __Vdly__cpu__DOT__program_counter__DOT__pc_next 
                = vlSelf->cpu__DOT__alu_out;
        }
    } else {
        __Vdly__cpu__DOT__program_counter__DOT__pc_next 
            = ((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                  != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                 & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))
                ? (vlSelf->cpu__DOT__program_counter__DOT__pc_next 
                   + vlSelf->cpu__DOT__imm_ext) : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next));
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next 
        = __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                [(0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)] 
                                << 0x18U) | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xffcU 
                                                    & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffcU 
                                                       & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                [(0xfffU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0xffcU 
                                                      & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))])));
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__instr);
    vlSelf->cpu__DOT__reg_write = Vcpu__ConstPool__TABLE_ha986a0c0_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_src = Vcpu__ConstPool__TABLE_ha5941d2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src = Vcpu__ConstPool__TABLE_h529afe2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write = Vcpu__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src = Vcpu__ConstPool__TABLE_ha1b5330d_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__branch 
        = Vcpu__ConstPool__TABLE_h974edfa5_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op 
        = Vcpu__ConstPool__TABLE_h25645c8f_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__jmp = Vcpu__ConstPool__TABLE_hf32ca493_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__JALR_instr = Vcpu__ConstPool__TABLE_h105add6f_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__cach_enable = Vcpu__ConstPool__TABLE_hd9ece95d_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__instr))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr 
                                         >> 0xaU)) 
                               | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op)));
    vlSelf->cpu__DOT__alu_control = Vcpu__ConstPool__TABLE_h2c28dff1_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__byte_address = Vcpu__ConstPool__TABLE_hfa800c22_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__imm_ext = ((4U & (IData)(vlSelf->cpu__DOT__imm_src))
                                  ? ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & vlSelf->cpu__DOT__instr)))
                                  : ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->cpu__DOT__instr) 
                                                | ((0x800U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->cpu__DOT__instr 
                                                         >> 0x14U)))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->cpu__DOT__instr 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->cpu__DOT__instr 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->cpu__DOT__instr 
                                                >> 0x14U)))));
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0x14U))];
    vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i 
        = ((IData)(vlSelf->cpu__DOT__alu_src) ? vlSelf->cpu__DOT__imm_ext
            : vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
    vlSelf->cpu__DOT__alu_out = ((8U & (IData)(vlSelf->cpu__DOT__alu_control))
                                  ? ((4U & (IData)(vlSelf->cpu__DOT__alu_control))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                                   : 0U))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                   - vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))))
                                  : ((4U & (IData)(vlSelf->cpu__DOT__alu_control))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 | vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 ^ vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? ((QData)((IData)(vlSelf->cpu__DOT__datapath__DOT__reg_rd1)) 
                                                 < (QData)((IData)(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 < vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 + vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))));
    if ((0U == vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
         [(0xfU & (vlSelf->cpu__DOT__alu_out >> 2U))]
         [0U])) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer[(0xfU 
                                                                                & (vlSelf->cpu__DOT__alu_out 
                                                                                >> 2U))] = 0U;
    }
    if ((0U == vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
         [(0xfU & (vlSelf->cpu__DOT__alu_out >> 2U))]
         [1U])) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer[(0xfU 
                                                                                & (vlSelf->cpu__DOT__alu_out 
                                                                                >> 2U))] = 1U;
    }
    if ((0U == vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
         [(0xfU & (vlSelf->cpu__DOT__alu_out >> 2U))]
         [2U])) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer[(0xfU 
                                                                                & (vlSelf->cpu__DOT__alu_out 
                                                                                >> 2U))] = 2U;
    }
    if ((0U == vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__age
         [(0xfU & (vlSelf->cpu__DOT__alu_out >> 2U))]
         [3U])) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer[(0xfU 
                                                                                & (vlSelf->cpu__DOT__alu_out 
                                                                                >> 2U))] = 3U;
    }
    if (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr 
            = vlSelf->cpu__DOT__alu_out;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
            = ((IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op)
                ? vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
               [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr)]
                : 0U);
    } else {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr 
            = (0xfffffffcU & vlSelf->cpu__DOT__alu_out);
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
            = ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                [(0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                << 0x18U) | ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                              [(0x1ffffU & ((IData)(2U) 
                                            + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                              << 0x10U) | ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                                            << 8U) 
                                           | vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                                           [(0x1ffffU 
                                             & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr)])));
    }
    if (vlSelf->cpu__DOT__cach_enable) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i)) {
            if (((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                  [(0xfU & (vlSelf->cpu__DOT__alu_out 
                            >> 2U))][(3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i)] 
                  == (vlSelf->cpu__DOT__alu_out >> 6U)) 
                 & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid
                 [(0xfU & (vlSelf->cpu__DOT__alu_out 
                           >> 2U))][(3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i)])) {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit = 1U;
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__readmiss 
                    = (1U & (~ vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid
                             [(0xfU & (vlSelf->cpu__DOT__alu_out 
                                       >> 2U))][(3U 
                                                 & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i)]));
                vlSelf->cpu__DOT__datapath__DOT__data_mem_rd 
                    = ((IData)(vlSelf->cpu__DOT__byte_address)
                        ? ((2U & vlSelf->cpu__DOT__alu_out)
                            ? ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                   >> 0x18U) : (0xffU 
                                                & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                                   >> 0x10U)))
                            : ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                            >> 8U))
                                : (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data)))
                        : vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data);
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit 
                    = (3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i);
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i = 5U;
            } else {
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit = 0U;
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__readmiss 
                    = (1U & (~ (IData)(vlSelf->cpu__DOT__mem_write)));
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit 
                    = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__LRU_pointer
                    [(0xfU & (vlSelf->cpu__DOT__alu_out 
                              >> 2U))];
                vlSelf->cpu__DOT__datapath__DOT__data_mem_rd 
                    = ((IData)(vlSelf->cpu__DOT__byte_address)
                        ? ((2U & vlSelf->cpu__DOT__alu_out)
                            ? ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                   >> 0x18U) : (0xffU 
                                                & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                                   >> 0x10U)))
                            : ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                            >> 8U))
                                : (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data)))
                        : vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data);
            }
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i 
                = ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk4__DOT__i);
        }
    } else {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__readmiss = 0U;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit = 0U;
        vlSelf->cpu__DOT__datapath__DOT__data_mem_rd = 0U;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__way_hit = 0U;
    }
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcpu___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->trigger_i & 0xfeU))) {
        Verilated::overWidthError("trigger_i");}
}
#endif  // VL_DEBUG
