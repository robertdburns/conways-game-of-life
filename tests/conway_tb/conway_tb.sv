`timescale 1ns / 1ps

module conway_tb;

    // Signals
    logic clk;
    logic rst;

    logic state;        // 0 = load, 1 = run
    logic [8:0] addr;
    logic [7:0] data;    // data input for loading the byte at addr

    logic next_gen;
    logic INIT_DONE;

    // Unit Under Test
    conway_new #(
    ) uut (
        .clk(clk),
        .rst(rst),
        .run(state),
        .addr(addr),
        .data(data),
        .next_gen(next_gen),
        .INIT_DONE(INIT_DONE)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz clock
    end

    initial begin
    // Name as needed
    $dumpfile("tb_conway.vcd");
    $dumpvars(0);
end

    // Testbench logic
    initial begin
        // Initialize signals
        rst = 1;
        state = 0;


        // Reset the UUT
        #10 rst = 0;

        // Add stimulus here
        // simple glider design found on google
        wait(INIT_DONE == 1); // Wait for initialization to complete
        #10;
        data = 'd255;
        addr = {7'b0000000, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000001, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000010, 2'b11}; // Load address
        #10;
        data = 'd255;
        addr = {7'b0000011, 2'b11}; // Load address
        #10;
        state = 1; // Start running
        #20

        // for (logic [7:0] i = 0; i <= 8'd0; i++) begin
        //     wait(next_gen == 1);        // generation 1
        //     $display("Generation %0d", i);
        //      #20;
        // end

         wait(next_gen == 1);        // generation 1
         #20;
         wait(next_gen == 1);         // generation 2
         #20;
         wait(next_gen == 1);        // generation 3
         #20;
         wait(next_gen == 1);        // generation 4
         #20;
        $finish;
    end

endmodule
