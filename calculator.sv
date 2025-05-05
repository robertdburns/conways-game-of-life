`timescale 1ns / 1ps

module calculator(
	input logic target,
	input logic top,
	input logic top_right,
	input logic right,
	input logic bottom_right,
	input logic bottom,
	input logic bottom_left,
	input logic left,
	input logic top_left,

	output logic target_next
);

logic [2:0] count;	// Count of live neighbors;

always_comb begin
	count = 0;
	if (top) count++;
	if (top_right) count++;
	if (right) count++;
	if (bottom_right) count++;
	if (bottom) count++;
	if (bottom_left) count++;
	if (left) count++;
	if (top_left) count++;
end

// The rules of Conway's Game of Life
always_comb begin
	if (target) begin
		if (count == 2 || count == 3) target_next = 1;
		else target_next = 0;
	end else begin
		if (count == 3) target_next = 1;
		else target_next = 0;
	end
end

endmodule