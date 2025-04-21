// Automatically generated C++ file on Sat Nov 30 21:12:49 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD datainporta.cpp Vdatainporta*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vdatainporta.h"

extern "C" __declspec(dllexport) void Destroy(Vdatainporta *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void datainporta(Vdatainporta **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vdatainporta;
   (*instance)->ra0 = data[0].b;
   (*instance)->ra1 = data[1].b;
   (*instance)->ra2 = data[2].b;
   (*instance)->ra3 = data[3].b;
   (*instance)->ra4 = data[4].b;

   (*instance)->eval();

   data[5].uc = (*instance)->data_out;
}
