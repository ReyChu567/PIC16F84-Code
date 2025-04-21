// Automatically generated C++ file on Sat Nov 30 21:11:52 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD data_out_port_a.cpp Vdata_out_port_a*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vdata_out_port_a.h"

extern "C" __declspec(dllexport) void Destroy(Vdata_out_port_a *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void data_out_port_a(Vdata_out_port_a **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vdata_out_port_a;
   (*instance)->data_in = data[0].uc;

   (*instance)->eval();

   data[1].b = (*instance)->ra0;
   data[2].b = (*instance)->ra1;
   data[3].b = (*instance)->ra2;
   data[4].b = (*instance)->ra3;
   data[5].b = (*instance)->ra4;
}
