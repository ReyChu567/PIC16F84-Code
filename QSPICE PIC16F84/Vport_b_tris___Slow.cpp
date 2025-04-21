// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_b_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_b_tris_.h"
#include "Vport_b_tris__Syms.h"

void Vport_b_tris____ctor_var_reset(Vport_b_tris_* vlSelf);

Vport_b_tris_::Vport_b_tris_(Vport_b_tris__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vport_b_tris____ctor_var_reset(this);
}

void Vport_b_tris_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vport_b_tris_::~Vport_b_tris_() {
}
