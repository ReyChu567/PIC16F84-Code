`include "pic16f84_clock.v"


module pic16f84_clock_tb;

    reg [0:0] clk;
    reg [3:0] vdd;
    reg [3:0] vss;
    reg [0:0] mclr;
    wire [0:0] q1;
    wire [0:0] q2;
    wire [0:0] q3;
    wire [0:0] q4;
    wire [0:0] clk_out;

    pic16f84_clock uut (
    .clk(clk),
    .vdd(vdd),
    .vss(vss),
    .mclr(mclr),
    .q1(q1),
    .q2(q2),
    .q3(q3),
    .q4(q4),
    .clk_out(clk_out) 
    );

    always begin
        #10 clk = ~clk; 
    end

    initial begin
        $dumpfile("pic16f84_clock_tb.vcd");
        $dumpvars(0, pic16f84_clock_tb);

        vdd = 4'h5;
        vss = 4'h0;
        mclr = 1;
        clk = 0;

        #35;
        mclr = 1;
        
        // #15;
        // mclr = 0;
        
        // #50;
        // mclr = 1;

        // Run the simulation for a few clock cycles
        #300;

        // End the simulation
        $finish;

    end
endmodule
