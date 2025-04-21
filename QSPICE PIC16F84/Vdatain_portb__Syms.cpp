// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdatain_portb__Syms.h"
#include "Vdatain_portb.h"
#include "Vdatain_portb_.h"

// FUNCTIONS
Vdatain_portb__Syms::~Vdatain_portb__Syms()
{
}

Vdatain_portb__Syms::Vdatain_portb__Syms(VerilatedContext* contextp, const char* namep,Vdatain_portb* modelp)
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
