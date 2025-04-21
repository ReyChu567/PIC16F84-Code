// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_out_x1.h for the primary calling header

#include "verilated.h"

#include "Vport_out_x1_.h"
#include "Vport_out_x1__Syms.h"

void Vport_out_x1____ctor_var_reset(Vport_out_x1_* vlSelf);

Vport_out_x1_::Vport_out_x1_(Vport_out_x1__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vport_out_x1____ctor_var_reset(this);
}

void Vport_out_x1_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vport_out_x1_::~Vport_out_x1_() {
}
