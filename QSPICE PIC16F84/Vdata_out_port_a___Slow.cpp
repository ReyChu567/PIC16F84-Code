// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_out_port_a.h for the primary calling header

#include "verilated.h"

#include "Vdata_out_port_a_.h"
#include "Vdata_out_port_a__Syms.h"

void Vdata_out_port_a____ctor_var_reset(Vdata_out_port_a_* vlSelf);

Vdata_out_port_a_::Vdata_out_port_a_(Vdata_out_port_a__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vdata_out_port_a____ctor_var_reset(this);
}

void Vdata_out_port_a_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdata_out_port_a_::~Vdata_out_port_a_() {
}
