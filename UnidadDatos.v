`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Alberto J. Molina Cantero
// 
// Create Date:    17:46:12 03/10/2012 
// Design Name: 
// Module Name:    UnidadDatos 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Este fichero contiene la descripcin de la unidad de datos del
//     CS2. En la memoria de programa se ha cargado un programa cuya ejecucin
//		 se puede comprobar en la simulacin.  
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module UnidadDatos(
    input clk,  output [4:0] op, output [3:0] regestado, output [2:0] condicion,
	 input wreg, wmem, rmem, wir, wmar, ipc, clpc, wpc,rpc, inm, rac, wac, s, r, ta, tb,wsreg,
	 input isp,dsp,rsp,prsp, enable_mux_carry
    );
   //sa es destino y sb es fuente
	wire [7:0] AluWire, AddressBus, BusComp, AcWire, DataRam, AddressRam, MuxBus,ImmBus;
	wire [15:0] DataBus;

	wire [7:0] carryBus; // Bus de salida de mux a C (Carry) de alu

	reg [7:0] FileReg [7:0];  //Fichero de registros.
	wire [2:0] sa;
	wire [2:0] sb;
	wire c,n,z,v;
	wire cin;
	
	muxtype mux(.canal0(FileReg[sb]), .canal1(ImmBus), .sel(inm), .sal(MuxBus));

	alutype alu (.ia(FileReg[sa]), .ib(MuxBus),.s(s),.r(r),.ta(ta),.tb(tb), .out(AluWire),.c(c),.n(n),.z(z),.v(v), .cin(carryBus) );
	
	actype  ac (.clk(clk),.w(wac),.r(rac),.in(AluWire),.out(BusComp));
	regestado sr (.clk(clk), .w(wsreg), .in({c,n,z,v}), .out(regestado));

	regsp sp(.clk(clk), .bus(BusComp),.i(isp), .d(dsp),.r(rsp),.pr(prsp));

	muxtype muxCarry(.canal0(8'b0), .canal1( {7'b0000000,regestado[3]}), .sel(enable_mux_carry), .sal(carryBus));


	assign sb= ImmBus[2:0];
	assign condicion = sa;
	always @(posedge clk)
		if(wreg)
			FileReg[sa]<= BusComp;
	
	irtype regir (.in(DataBus),.out({op,sa,ImmBus}),.w(wir),.clk(clk));
	pctype regpc (.out(AddressBus),.up(ipc),.cl(clpc),.clk(clk),.w(wpc),.r(rpc),.bus(BusComp));
	romtype codmem (.adress(AddressBus), .data(DataBus));
	ramtype datamem (.address(AddressRam),.data(BusComp),.w(wmem),.r(rmem));
	martype mar (.clk(clk),.w(wmar),.in(BusComp),.out(AddressRam));
	

endmodule

module regestado ( input clk, input w, input [3:0] in, output [3:0] out);
	reg [3:0] q;
	always @(posedge clk)
		if (w)
			q <= in;
	assign out = q;
endmodule

module regsp (input clk, i, d, r, pr, output [7:0] bus );
	reg [7:0] q;
	always @(posedge clk or posedge pr)
	begin
		if (pr == 1)
			q<= 8'hff;
		else if (i ==1)
			q<= q+1;
			else if (d == 1)
				q<= q+1;
	end
	assign bus = r ? q : 'hz;
	
endmodule

module irtype (input [15:0] in, input clk, output [15:0] out, input w);
	reg [15:0] q;
	always @(posedge clk)
		if(w)
			q<= in;
	assign out = q;
endmodule

module pctype (input clk, up, cl, output [7:0] out, input r, w, inout [7:0] bus);
	reg [7:0] q;
	always @(posedge clk)
		if(cl)
			q<=0;
		else
			if (up)
				q<=q+1;
			else if (w)
					q<= bus;					
	assign out = q;
	assign bus = r ? q: 'hz;
endmodule

module romtype (input [7:0] adress, output reg [15:0] data);
		always @(adress)
			case(adress)
			/*
				Substituya el código de ejemplo que hay
				a continuación por los que se les pide
				en el ejercicio práctico. Use el formato
				de instrucción que se acompaña inmediatamente
				detrás de la descripción de la ROM.
			
			0: data = 16'b1111111000000000;	//	LDI R6,0 Y<-0
			1: data = 16'b1111111100000010;	//	LDI R7,2 Z<-2
			2: data = 16'b1111101000000001;	//	LDI R2,1 R2<-1
			3: data = 16'b0000101100000110; //LD R3,Y   R3 <- (Y)
			4: data = 16'b0000110000000111; //LD R4,Z   R4 <- (Z)
			5: data = 16'b0000001100000111; //ST Z,R3   
			6: data = 16'b0000010000000110; //ST Y,R4
			7: data = 16'b0100011000000010; //ADD R6,R2
			8: data = 16'b0100011100000010; //ADD R7,R2
			9: data = 16'b0000101100000110; //LD R3 ,Y
		  10: data = 16'b0000110000000111; //LD R4,Z
		  11: data = 16'b0000001100000111; //ST Z,R3
		  12: data = 16'b0000010000000110; //ST Y,R4	
		  13: data = 16'b1011100000000000; //STOP
			*/

			0: data = 16'b11111 100 00001010;		//	LDI R4, 10
			1: data = 16'b11111 101 00000100;		//	LDI R5, 4
			2: data = 16'b01010 101 00000 100;	//	SUB R5,R4
			3: data = 16'b11100 100 00000001; 	//  SBCI R4,1   
			4: data = 16'b10111 000 00000000; 	//  STOP
			default: data = 0;

			endcase
endmodule

/*
	Formato de instruccin del CS3
	
	codop destino fuente
	
	codop 
	00000fff-----11d     ST Y,Rf  ST Z,Rf
	00001ddd-----11f 		LD	Rd,Y  LD Rd,Z
	00010fffaaaaaaaa		STS direccion,Rf
	00011dddaaaaaaaa		LDS Rd, direccion
	11111dddvvvvvvvv		LDI Rd, dato
	01000ddd-----fff     ADD  Rd,Rf
	01010ddd-----fff     SUB  Rd,Rf
	11010dddvvvvvvvv     SUBI Rd,dato
	01111ddd-----fff		MOV  Rd,Rf
	10111-----------     STOP
	00111---aaaaaaaa		JMP  direccion
	00110xxxaaaaaaaa		BRxx direccion : xxx condición de salto
							 0 para BREQ
							 1 para BRCS o BRLO
							 2 para BRVS
							 3 para BRLT
	00100---aaaaaaaa		CALL direccion
	00101-----------		RET
	01011ddd-----fff		CP Rd,Rf
	11011dddvvvvvvvv	   CPI Rd,dato
*/


module actype (input [7:0] in, input clk, r, w, output [7:0] out);

	reg [7:0] q;
	always @(posedge clk)
			if(w)
					q<= in;
	assign out = r ? q : 'bz;
endmodule


module martype(input clk, input [7:0] in , output [7:0] out , input w);
	reg [7:0] q;
	always @(posedge clk)
		if(w)
			q<= in;
	assign out=q;
endmodule

module alutype (input [7:0] ia, input [7:0] ib, input s,r,ta,tb, 
	input [7:0] cin,
	output reg [7:0] out, output c, n,z,v); 
	
	reg signed [8:0] sal;
	
	always @*
	begin
		casex({cin, s,r,ta,tb})

		4'b1xxx: sal = ia + ib + cin; // Suma 
		4'b01xx: sal = ia - ib - cin;

		4'b001x: sal = {1'b0,ia}; // Transferencia
		default: sal = {1'b0,ib};
		endcase
		out=sal[7:0];
	end

	assign c = sal[8];
	assign n = sal[7];
	assign z = ~|sal[7:0];
	assign v = sal[8]^sal[7];
	
endmodule

module ramtype (input [7:0] address, inout [7:0] data, input r, w);
	reg [7:0] q [255:0];
	always @(*)
		if(w)
			q[address] <= data;
	
	assign data = (r & !w) ? q[address]: 'bz  ;
	
	//Sólo para simulación
	initial
		begin
			q[8'h0]=0;
			q[8'h1]=1;
			q[8'h2]=7;
			q[8'h3]=6;
		end
	
endmodule

module muxtype(input [7:0] canal0, input [7:0] canal1, input sel, output [7:0] sal);
	assign sal = sel ? canal1 : canal0;
endmodule
