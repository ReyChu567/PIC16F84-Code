// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvolt_x3__Syms.h"
#include "Vvolt_x3.h"
#include "Vvolt_x3_.h"

// FUNCTIONS
Vvolt_x3__Syms::~Vvolt_x3__Syms()
{
}

Vvolt_x3__Syms::Vvolt_x3__Syms(VerilatedContext* contextp, const char* namep,Vvolt_x3* modelp)
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
