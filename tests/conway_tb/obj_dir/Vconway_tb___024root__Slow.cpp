// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconway_tb.h for the primary calling header

#include "Vconway_tb__pch.h"
#include "Vconway_tb__Syms.h"
#include "Vconway_tb___024root.h"

void Vconway_tb___024root___ctor_var_reset(Vconway_tb___024root* vlSelf);

Vconway_tb___024root::Vconway_tb___024root(Vconway_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconway_tb___024root___ctor_var_reset(this);
}

void Vconway_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconway_tb___024root::~Vconway_tb___024root() {
}
