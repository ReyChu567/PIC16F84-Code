// Automatically generated .v file on Sat Nov 30 22:01:57 2024
//

module volt_x3 ( vdd, in, mclr, q1, out ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg [3:0] vdd;
   input reg [0:0] in;
   input reg [0:0] mclr;
   input reg [0:0] q1;
   output reg [3:0] out;

   // Implement the module here
   always @(*) begin
      if (!mclr) begin
         out = 4'b0000;
      end
      else if (mclr && q1) begin
         if(in == 1'b1) begin
            out = vdd;
         end
         else if (in == 1'b0) begin
            out = 4'b0000;
         end

      end

   end


endmodule
