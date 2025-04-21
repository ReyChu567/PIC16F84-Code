// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatainporta.h for the primary calling header

#include "verilated.h"

#include "Vdatainporta_.h"
#include "Vdatainporta__Syms.h"

void Vdatainporta____ctor_var_reset(Vdatainporta_* vlSelf);

Vdatainporta_::Vdatainporta_(Vdatainporta__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vdatainporta____ctor_var_reset(this);
}

void Vdatainporta_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdatainporta_::~Vdatainporta_() {
}
