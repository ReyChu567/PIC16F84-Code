// Automatically generated .v file on Sat Nov 30 21:11:04 2024
//

module data_out_port_a ( data_in, ra0, ra1, ra2, ra3, ra4 ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [4:0] data_in;
   output reg [0:0] ra0;
   output reg [0:0] ra1;
   output reg [0:0] ra2;
   output reg [0:0] ra3;
   output reg [0:0] ra4;

   // Implement the module here
   assign ra0 = data_in[0];
   assign ra1 = data_in[1];
   assign ra2 = data_in[2];
   assign ra3 = data_in[3];
   assign ra4 = data_in[4];

endmodule
