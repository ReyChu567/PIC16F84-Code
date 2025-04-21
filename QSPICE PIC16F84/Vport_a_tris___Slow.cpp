// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_a_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_a_tris_.h"
#include "Vport_a_tris__Syms.h"

void Vport_a_tris____ctor_var_reset(Vport_a_tris_* vlSelf);

Vport_a_tris_::Vport_a_tris_(Vport_a_tris__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vport_a_tris____ctor_var_reset(this);
}

void Vport_a_tris_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vport_a_tris_::~Vport_a_tris_() {
}
