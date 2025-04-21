// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_input_x1.h for the primary calling header

#include "verilated.h"

#include "Vport_input_x1_.h"
#include "Vport_input_x1__Syms.h"

void Vport_input_x1____ctor_var_reset(Vport_input_x1_* vlSelf);

Vport_input_x1_::Vport_input_x1_(Vport_input_x1__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vport_input_x1____ctor_var_reset(this);
}

void Vport_input_x1_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vport_input_x1_::~Vport_input_x1_() {
}
