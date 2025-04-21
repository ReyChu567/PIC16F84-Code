// Automatically generated C++ file on Sat Nov 30 21:20:10 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD port_b_tris.cpp Vport_b_tris*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vport_b_tris.h"

extern "C" __declspec(dllexport) void Destroy(Vport_b_tris *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void port_b_tris(Vport_b_tris **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vport_b_tris;
   (*instance)->tris_val = data[0].uc;

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
