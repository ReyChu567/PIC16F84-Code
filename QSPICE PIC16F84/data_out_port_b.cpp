// Automatically generated C++ file on Sat Nov 30 21:21:07 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD data_out_port_b.cpp Vdata_out_port_b*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vdata_out_port_b.h"

extern "C" __declspec(dllexport) void Destroy(Vdata_out_port_b *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void data_out_port_b(Vdata_out_port_b **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vdata_out_port_b;
   (*instance)->data_in = data[0].uc;

   (*instance)->eval();

   data[1].b = (*instance)->rb0;
   data[2].b = (*instance)->rb1;
   data[3].b = (*instance)->rb2;
   data[4].b = (*instance)->rb3;
   data[5].b = (*instance)->rb4;
   data[6].b = (*instance)->rb5;
   data[7].b = (*instance)->rb6;
   data[8].b = (*instance)->rb7;
}
