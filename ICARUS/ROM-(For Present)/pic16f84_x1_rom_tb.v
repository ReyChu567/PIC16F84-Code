`include "pic16f84_x1_rom.v"

module pic16f84_x1_rom_tb;

    reg [0:0] q1;
    reg [12:0] pc_in;
    reg [0:0] nop_in;
    wire [13:0] inst;

pic16f84_x1_rom uut (
   .q1(q1),
   .pc_in(pc_in),
   .nop_in(nop_in),
   .inst(inst)
);

initial begin
    $dumpfile("pic16f84_x1_rom_tb.vcd");
    $dumpvars(0, pic16f84_x1_rom_tb);

    nop_in = 0;
    q1 = 0;
    #20;

//======1ST CYCLE=====================
    q1 = 1;
    pc_in = 13'h0000;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;
//======2ND CYCLE=====================
    q1 = 1;
    pc_in = 13'h0001;
    #20;

    q1 = 0;
    #10;
    nop_in = 0;
    #10;
//======3RD CYCLE=====================
    q1 = 1;
    pc_in = 13'h03FE;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;
//======4TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h03FF;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;
//======5TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h0400;
    #20;

    q1 = 0;
    #10;
    nop_in = 0;
    #10;
//======6TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h03F1;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;
//======7TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h03F2;
    #20;

    q1 = 0;
    #10;
    nop_in = 0;
    #10;
//======8TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h03F3;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;
//======9TH CYCLE=====================
    q1 = 1;
    pc_in = 13'h03F4;
    #20;

    q1 = 0;
    #10;
    nop_in = 1;
    #10;



    q1 = 0;
    #30;

 $finish;

end

endmodule