// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvolt_x3.h for the primary calling header

#include "verilated.h"

#include "Vvolt_x3_.h"
#include "Vvolt_x3__Syms.h"

void Vvolt_x3____ctor_var_reset(Vvolt_x3_* vlSelf);

Vvolt_x3_::Vvolt_x3_(Vvolt_x3__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vvolt_x3____ctor_var_reset(this);
}

void Vvolt_x3_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvolt_x3_::~Vvolt_x3_() {
}
