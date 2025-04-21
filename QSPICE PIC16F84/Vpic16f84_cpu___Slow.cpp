// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_cpu.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_cpu_.h"
#include "Vpic16f84_cpu__Syms.h"

void Vpic16f84_cpu____ctor_var_reset(Vpic16f84_cpu_* vlSelf);

Vpic16f84_cpu_::Vpic16f84_cpu_(Vpic16f84_cpu__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vpic16f84_cpu____ctor_var_reset(this);
}

void Vpic16f84_cpu_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpic16f84_cpu_::~Vpic16f84_cpu_() {
}
