// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_b.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_b_.h"
#include "Vdata_out_port_b__Syms.h"

void Vdata_out_port_b____ctor_var_reset(Vdata_out_port_b_* vlSelf);

Vdata_out_port_b_::Vdata_out_port_b_(Vdata_out_port_b__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vdata_out_port_b____ctor_var_reset(this);
}

void Vdata_out_port_b_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdata_out_port_b_::~Vdata_out_port_b_() {
}
