`timescale 1ns / 1ps

module conway_tb;

    // Signals
    logic clk;
    logic rst;

    logic state;		// 0 = load, 1 = run
    logic [15:0] addr;

	logic next_gen;

    // Unit Under Test
    conway #(
    ) uut (
        .clk(clk),
        .rst(rst),
        .state(state),
        .addr(addr),
		.next_gen(next_gen)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz clock
    end

	initial begin
    // Name as needed
    $dumpfile("tb_.vcd");
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
		addr = 16'h02ff; // Load address
		#10;
		addr = 16'h01fd; // Load address
		#10;
		addr = 16'h02fd; // Load address
		#10;
		addr = 16'h03fd; // Load address
		#10;
		addr = 16'h03fe; // Load address
		#10;
        state = 1; // Start running

		#20;
		 wait(next_gen == 1);
		 #20;
		 wait(next_gen == 1);
		 #20;
		 wait(next_gen == 1);
		 #20;
		 wait(next_gen == 1);
		 #20;
        $finish;
    end

endmodule