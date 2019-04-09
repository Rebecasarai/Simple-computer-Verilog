`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:21:53 03/15/2014 
// Design Name: 
// Module Name:    ComputadorSimple3 
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
module ComputadorSimple3(input clk, reset, start
    );
	wire [4:0] op;
	wire [3:0] regestado;
	wire [2:0] condicion;
	wire [21:0] cables;

	UnidadDatos UD (.clk(clk), .op(op),.regestado(regestado),.condicion(condicion),
		.wreg(cables[0]),.wmem(cables[1]),.rmem(cables[2]),.wir(cables[3]),
		.wmar(cables[4]),.ipc(cables[5]),.clpc(cables[6]),.wpc(cables[7]),
		.rpc(cables[8]),.inm(cables[9]),.rac(cables[10]),.wac(cables[11]),.s(cables[12]),
		.r(cables[13]),.ta(cables[14]),.tb(cables[15]),.wsreg(cables[16]),.isp(cables[17]),
		.dsp(cables[18]),.rsp(cables[19]),.prsp(cables[20]), .enable_mux_carry(cables[21]) );


	UnidadControl UC (.clk(clk),.start(start),.reset(reset), 
		.op(op),.regestado(regestado),.condicion(condicion),
		.wreg(cables[0]),.wmem(cables[1]),.rmem(cables[2]),.wir(cables[3]),
		.wmar(cables[4]),.ipc(cables[5]),.clpc(cables[6]),.wpc(cables[7]),
		.rpc(cables[8]),.inm(cables[9]),.rac(cables[10]),.wac(cables[11]),.s(cables[12]),
		.r(cables[13]),.ta(cables[14]),.tb(cables[15]),.wsreg(cables[16]),.isp(cables[17]),
		.dsp(cables[18]),.rsp(cables[19]),.prsp(cables[20]), .enable_mux_carry(cables[21]) );
	

endmodule
