// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_x1_rom.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_x1_rom_.h"
#include "Vpic16f84_x1_rom__Syms.h"

void Vpic16f84_x1_rom____ctor_var_reset(Vpic16f84_x1_rom_* vlSelf);

Vpic16f84_x1_rom_::Vpic16f84_x1_rom_(Vpic16f84_x1_rom__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vpic16f84_x1_rom____ctor_var_reset(this);
}

void Vpic16f84_x1_rom_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpic16f84_x1_rom_::~Vpic16f84_x1_rom_() {
}
