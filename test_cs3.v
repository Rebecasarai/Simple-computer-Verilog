`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Alberto J. Molina									
// 
// Create Date:    12:46:32 03/11/2012 
// Design Name: 
// Module Name:    test_cs2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_cs3(
    );
	reg clk, reset,start;

	ComputadorSimple3 uut(.clk(clk),.reset(reset),.start(start));
	
	always #10 clk= !clk;
	
	initial
		begin
			clk=0;
			reset=0;
			start=0;
			@(posedge clk);
			reset=1;
			@(posedge clk);
			reset=0;
			start=1;
			@(posedge clk);
			start=0;
			repeat(100) @(posedge clk);
			$finish;
		end
	
endmodule
