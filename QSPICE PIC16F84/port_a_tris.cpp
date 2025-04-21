// Automatically generated C++ file on Sat Nov 30 21:10:50 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD port_a_tris.cpp Vport_a_tris*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vport_a_tris.h"

extern "C" __declspec(dllexport) void Destroy(Vport_a_tris *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void port_a_tris(Vport_a_tris **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vport_a_tris;
   (*instance)->tris_val = data[0].uc;

   (*instance)->eval();

   data[1].b = (*instance)->ra0;
   data[2].b = (*instance)->ra1;
   data[3].b = (*instance)->ra2;
   data[4].b = (*instance)->ra3;
   data[5].b = (*instance)->ra4;
}
