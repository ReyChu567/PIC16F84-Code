// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_clock.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_clock_.h"
#include "Vpic16f84_clock__Syms.h"

void Vpic16f84_clock____ctor_var_reset(Vpic16f84_clock_* vlSelf);

Vpic16f84_clock_::Vpic16f84_clock_(Vpic16f84_clock__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vpic16f84_clock____ctor_var_reset(this);
}

void Vpic16f84_clock_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpic16f84_clock_::~Vpic16f84_clock_() {
}
