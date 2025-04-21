// Automatically generated C++ file on Mon Apr  7 22:09:50 2025
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD port_out_x1.cpp Vport_out_x1*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vport_out_x1.h"

extern "C" __declspec(dllexport) void Destroy(Vport_out_x1 *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void port_out_x1(Vport_out_x1 **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vport_out_x1;
   (*instance)->tris_stat = data[0].b;
   (*instance)->data_out = data[1].b;

   (*instance)->eval();

   data[2].b = (*instance)->out;
}
