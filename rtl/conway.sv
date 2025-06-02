`timescale 1ns / 1ps

module conway(	
	input logic clk,		// clock signal
	input logic rst,		// reset signal
	input logic state,		// 0 = load, 1 = run
	input logic [15:0]addr,	// address for loading the grid

	output logic next_gen	// output signal to indicate next generation

);

// logic [255:0] mem[255:0];	// 256x256 memory for the grid
// logic [255:0] mem_next[255:0];	// 256x256 memory for the next generation

logic [255:0] mem[0:255];	// 256x256 memory for the grid
logic [255:0] mem_next[0:255];	// 256x256 memory for the next generation

initial begin
	 for (int i = 0; i < 255; i++) begin
		// Initialize the memory to zeroes
		for (int j = 0; j < 255; j++) begin
			mem[i][j] = 0;
		end
	 end
end

logic [7:0] row = 0;
logic [7:0] col = 0;

logic pixel1;
logic pixel2;
logic pixel3;
logic pixel4;
logic pixel5;
logic pixel6;
logic pixel7;
logic pixel8;
logic pixel9;
logic pixel10;
logic pixel11;
logic pixel12;
logic pixel13;
logic pixel14;
logic pixel15;
logic pixel16;


always_ff @(posedge clk) begin
	next_gen <= 0;	// Reset next_gen at the start of each clock cycle

	mem_next[row][col] <= pixel1;
	mem_next[row][col+1] <= pixel2;
	mem_next[row][col+2] <= pixel3;
	mem_next[row][col+3] <= pixel4;
	mem_next[row][col+4] <= pixel5;
	mem_next[row][col+5] <= pixel6;
	mem_next[row][col+6] <= pixel7;
	mem_next[row][col+7] <= pixel8;
	mem_next[row][col+8] <= pixel9;
	mem_next[row][col+9] <= pixel10;
	mem_next[row][col+10] <= pixel11;
	mem_next[row][col+11] <= pixel12;
	mem_next[row][col+12] <= pixel13;
	mem_next[row][col+13] <= pixel14;
	mem_next[row][col+14] <= pixel15;
	mem_next[row][col+15] <= pixel16;
	
	if (rst) begin
		for (int i = 0; i < 256; i++) begin
			for (int j = 0; j < 256; j++) begin
				mem[i][j] <= 0;
			end
		end
	end
	if (!state) mem[addr[15:8]][addr[7:0]] <= 1;

	else begin
		if (col == 0 && row == 0) begin
			$writememb("mem.txt", mem);	// Write memory to file
		end
		if (col >= 239) begin			// If we are at the end of a row
			col <= 0;					// Reset column to 0
			if (row == 255) begin		// If we are at the end of the grid
				row <= 0;				// Reset row to 0
				mem <= mem_next;		// Update the memory with the next generation
				next_gen <= 1;			// Set next_gen to 1 to indicate the next generation is ready
			end else begin
				row <= row + 1;			// Move to the next row
			end
		end else begin
			col <= col + 16;			// Move to the next set of columns
		end
	end




end

// holy """parallelism""" batman
calculator calc1(
		.target(mem[row][col]),
		.top(mem[row-1][col]),
		.top_right(mem[row-1][col+1]),
		.right(mem[row][col+1]),
		.bottom_right(mem[row+1][col+1]),
		.bottom(mem[row+1][col]),
		.bottom_left(mem[row+1][col-1]),
		.left(mem[row][col-1]),
		.top_left(mem[row-1][col-1]),
		.target_next(pixel1)
	);

	calculator calc2(
		.target(mem[row][col+1]),
		.top(mem[row-1][col+1]),
		.top_right(mem[row-1][col+2]),
		.right(mem[row][col+2]),
		.bottom_right(mem[row+1][col+2]),
		.bottom(mem[row+1][col+1]),
		.bottom_left(mem[row+1][col]),
		.left(mem[row][col]),
		.top_left(mem[row-1][col]),
		.target_next(pixel2)
	);

	calculator calc3(
		.target(mem[row][col+2]),
		.top(mem[row-1][col+2]),
		.top_right(mem[row-1][col+3]),
		.right(mem[row][col+3]),
		.bottom_right(mem[row+1][col+3]),
		.bottom(mem[row+1][col+2]),
		.bottom_left(mem[row+1][col+1]),
		.left(mem[row][col+1]),
		.top_left(mem[row-1][col+1]),
		.target_next(pixel3)
	);

	calculator calc4(
		.target(mem[row][col+3]),
		.top(mem[row-1][col+3]),
		.top_right(mem[row-1][col+4]),
		.right(mem[row][col+4]),
		.bottom_right(mem[row+1][col+4]),
		.bottom(mem[row+1][col+3]),
		.bottom_left(mem[row+1][col+2]),
		.left(mem[row][col+2]),
		.top_left(mem[row-1][col+2]),
		.target_next(pixel4)
	);

	calculator calc5(
		.target(mem[row][col+4]),
		.top(mem[row-1][col+4]),
		.top_right(mem[row-1][col+5]),
		.right(mem[row][col+5]),
		.bottom_right(mem[row+1][col+5]),
		.bottom(mem[row+1][col+4]),
		.bottom_left(mem[row+1][col+3]),
		.left(mem[row][col+3]),
		.top_left(mem[row-1][col+3]),
		.target_next(pixel5)
	);

	calculator calc6(
		.target(mem[row][col+5]),
		.top(mem[row-1][col+5]),
		.top_right(mem[row-1][col+6]),
		.right(mem[row][col+6]),
		.bottom_right(mem[row+1][col+6]),
		.bottom(mem[row+1][col+5]),
		.bottom_left(mem[row+1][col+4]),
		.left(mem[row][col+4]),
		.top_left(mem[row-1][col+4]),
		.target_next(pixel6)
	);

	calculator calc7(
		.target(mem[row][col+6]),
		.top(mem[row-1][col+6]),
		.top_right(mem[row-1][col+7]),
		.right(mem[row][col+7]),
		.bottom_right(mem[row+1][col+7]),
		.bottom(mem[row+1][col+6]),
		.bottom_left(mem[row+1][col+5]),
		.left(mem[row][col+5]),
		.top_left(mem[row-1][col+5]),
		.target_next(pixel7)
	);

	calculator calc8(
		.target(mem[row][col+7]),
		.top(mem[row-1][col+7]),
		.top_right(mem[row-1][col+8]),
		.right(mem[row][col+8]),
		.bottom_right(mem[row+1][col+8]),
		.bottom(mem[row+1][col+7]),
		.bottom_left(mem[row+1][col+6]),
		.left(mem[row][col+6]),
		.top_left(mem[row-1][col+6]),
		.target_next(pixel8)
	);

	calculator calc9(
		.target(mem[row][col+8]),
		.top(mem[row-1][col+8]),
		.top_right(mem[row-1][col+9]),
		.right(mem[row][col+9]),
		.bottom_right(mem[row+1][col+9]),
		.bottom(mem[row+1][col+8]),
		.bottom_left(mem[row+1][col+7]),
		.left(mem[row][col+7]),
		.top_left(mem[row-1][col+7]),
		.target_next(pixel9)
	);

	calculator calc10(
		.target(mem[row][col+9]),
		.top(mem[row-1][col+9]),
		.top_right(mem[row-1][col+10]),
		.right(mem[row][col+10]),
		.bottom_right(mem[row+1][col+10]),
		.bottom(mem[row+1][col+9]),
		.bottom_left(mem[row+1][col+8]),
		.left(mem[row][col+8]),
		.top_left(mem[row-1][col+8]),
		.target_next(pixel10)
	);

	calculator calc11(
		.target(mem[row][col+10]),
		.top(mem[row-1][col+10]),
		.top_right(mem[row-1][col+11]),
		.right(mem[row][col+11]),
		.bottom_right(mem[row+1][col+11]),
		.bottom(mem[row+1][col+10]),
		.bottom_left(mem[row+1][col+9]),
		.left(mem[row][col+9]),
		.top_left(mem[row-1][col+9]),
		.target_next(pixel11)
	);

	calculator calc12(
		.target(mem[row][col+11]),
		.top(mem[row-1][col+11]),
		.top_right(mem[row-1][col+12]),
		.right(mem[row][col+12]),
		.bottom_right(mem[row+1][col+12]),
		.bottom(mem[row+1][col+11]),
		.bottom_left(mem[row+1][col+10]),
		.left(mem[row][col+10]),
		.top_left(mem[row-1][col+10]),
		.target_next(pixel12)
	);

	calculator calc13(
		.target(mem[row][col+12]),
		.top(mem[row-1][col+12]),
		.top_right(mem[row-1][col+13]),
		.right(mem[row][col+13]),
		.bottom_right(mem[row+1][col+13]),
		.bottom(mem[row+1][col+12]),
		.bottom_left(mem[row+1][col+11]),
		.left(mem[row][col+11]),
		.top_left(mem[row-1][col+11]),
		.target_next(pixel13)
	);

	calculator calc14(
		.target(mem[row][col+13]),
		.top(mem[row-1][col+13]),
		.top_right(mem[row-1][col+14]),
		.right(mem[row][col+14]),
		.bottom_right(mem[row+1][col+14]),
		.bottom(mem[row+1][col+13]),
		.bottom_left(mem[row+1][col+12]),
		.left(mem[row][col+12]),
		.top_left(mem[row-1][col+12]),
		.target_next(pixel14)
	);

	calculator calc15(
		.target(mem[row][col+14]),
		.top(mem[row-1][col+14]),
		.top_right(mem[row-1][col+15]),
		.right(mem[row][col+15]),
		.bottom_right(mem[row+1][col+15]),
		.bottom(mem[row+1][col+14]),
		.bottom_left(mem[row+1][col+13]),
		.left(mem[row][col+13]),
		.top_left(mem[row-1][col+13]),
		.target_next(pixel15)
	);

	calculator calc16(
		.target(mem[row][col+15]),
		.top(mem[row-1][col+15]),
		.top_right(mem[row-1][col+16]),
		.right(mem[row][col+16]),
		.bottom_right(mem[row+1][col+16]),
		.bottom(mem[row+1][col+15]),
		.bottom_left(mem[row+1][col+14]),
		.left(mem[row][col+14]),
		.top_left(mem[row-1][col+14]),
		.target_next(pixel16)
	);

endmodule