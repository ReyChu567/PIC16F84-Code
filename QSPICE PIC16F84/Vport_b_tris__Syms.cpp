// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vport_b_tris__Syms.h"
#include "Vport_b_tris.h"
#include "Vport_b_tris_.h"

// FUNCTIONS
Vport_b_tris__Syms::~Vport_b_tris__Syms()
{
}

Vport_b_tris__Syms::Vport_b_tris__Syms(VerilatedContext* contextp, const char* namep,Vport_b_tris* modelp)
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
