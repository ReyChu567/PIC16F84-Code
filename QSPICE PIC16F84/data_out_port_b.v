// Automatically generated .v file on Sat Nov 30 21:20:19 2024
//

module data_out_port_b ( data_in, rb0, rb1, rb2, rb3, rb4, rb5, rb6, rb7 ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [7:0] data_in;
   output reg [0:0] rb0;
   output reg [0:0] rb1;
   output reg [0:0] rb2;
   output reg [0:0] rb3;
   output reg [0:0] rb4;
   output reg [0:0] rb5;
   output reg [0:0] rb6;
   output reg [0:0] rb7;

   // Implement the module here
   assign rb0 = data_in[0];
   assign rb1 = data_in[1];
   assign rb2 = data_in[2];
   assign rb3 = data_in[3];
   assign rb4 = data_in[4];
   assign rb5 = data_in[5];
   assign rb6 = data_in[6];
   assign rb7 = data_in[7];


endmodule
