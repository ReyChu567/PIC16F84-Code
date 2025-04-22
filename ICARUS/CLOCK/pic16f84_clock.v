// Automatically generated .v file on Mon Nov 18 14:49:02 2024
//

module pic16f84_clock ( clk, vdd, vss, mclr, q1, q2, q3, q4, clk_out ) ;
   input wire [0:0] clk;
   input wire [3:0] vdd;
   input wire [3:0] vss;
   input wire [0:0] mclr;
   output reg [0:0] q1;
   output reg [0:0] q2;
   output reg [0:0] q3;
   output reg [0:0] q4;
   output reg [0:0] clk_out;

   // Implement the module here
   reg [1:0] phase_counter = 2'b00;

   // Initialize or reset the phase counter and outputs
always @(posedge clk) begin
   // if VSS is 2.0V - 6.0V and VSS is 0V
   if ((vdd <= 4'b0110 && vdd >= 4'b0010) && vss == 4'b0000 ) begin
      // resets if mclr is active low
      if (!mclr) begin
        phase_counter <= 2'b00;
        q1 <= 1'b0;
        q2 <= 1'b0;
        q3 <= 1'b0;
        q4 <= 1'b0;
        clk_out <= 1'b0;
      end
      else begin
         case (phase_counter)
            2'b00: begin
               q1 <= 1'b1;
               q2 <= 1'b0;
               q3 <= 1'b0;
               q4 <= 1'b0;
               clk_out <= 1'b0;
            end
            2'b01: begin
               q1 <= 1'b0;
               q2 <= 1'b1;
               q3 <= 1'b0;
               q4 <= 1'b0;
               clk_out <= 1'b0;
            end
            2'b10: begin
               q1 <= 1'b0;
               q2 <= 1'b0;
               q3 <= 1'b1;
               q4 <= 1'b0;
               clk_out <= 1'b1;
            end
            2'b11: begin
               q1 <= 1'b0;
               q2 <= 1'b0;
               q3 <= 1'b0;
               q4 <= 1'b1;
               clk_out <= 1'b1;
            end
         endcase
         phase_counter <= phase_counter + 1'b1;
      end
   end
   else begin
      phase_counter <= 2'b00;
      q1 <= 1'b0;
      q2 <= 1'b0;
      q3 <= 1'b0;
      q4 <= 1'b0;
      clk_out <= 1'b0;
   end

end

endmodule
