// Automatically generated .v file on Sat Nov 30 21:21:29 2024
//

module datain_portb ( rb0, rb1, rb2, rb3, rb4, rb5, rb6, rb7, data_out ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [0:0] rb0;
   input reg [0:0] rb1;
   input reg [0:0] rb2;
   input reg [0:0] rb3;
   input reg [0:0] rb4;
   input reg [0:0] rb5;
   input reg [0:0] rb6;
   input reg [0:0] rb7;
   output reg [7:0] data_out;

   // Implement the module here
   assign data_out[0] = rb0;
   assign data_out[1] = rb1;
   assign data_out[2] = rb2;
   assign data_out[3] = rb3;
   assign data_out[4] = rb4;
   assign data_out[5] = rb5;
   assign data_out[6] = rb6;
   assign data_out[7] = rb7;


endmodule
