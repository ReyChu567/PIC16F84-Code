// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpic16f84_clock__Syms.h"
#include "Vpic16f84_clock.h"
#include "Vpic16f84_clock_.h"

// FUNCTIONS
Vpic16f84_clock__Syms::~Vpic16f84_clock__Syms()
{
}

Vpic16f84_clock__Syms::Vpic16f84_clock__Syms(VerilatedContext* contextp, const char* namep,Vpic16f84_clock* modelp)
    : VerilatedSyms(contextp)
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(this, namep),
   __Vm_didInit(false)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
