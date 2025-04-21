// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatain_portb.h for the primary calling header

#include "verilated.h"

#include "Vdatain_portb_.h"
#include "Vdatain_portb__Syms.h"

void Vdatain_portb____ctor_var_reset(Vdatain_portb_* vlSelf);

Vdatain_portb_::Vdatain_portb_(Vdatain_portb__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vdatain_portb____ctor_var_reset(this);
}

void Vdatain_portb_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdatain_portb_::~Vdatain_portb_() {
}
