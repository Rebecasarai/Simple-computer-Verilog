`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Albeto J. Molina Cantero
// 
// Create Date:    18:52:25 03/10/2012 
// Design Name: 
// Module Name:    UnidadControl 
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
    

module UnidadControl(
    input clk, start, reset, 
	 input [4:0] op, 
	 input [3:0] regestado,
	 input [2:0] condicion,
	 output reg wmem,rmem,clpc, ipc, wir,wmar,inm, wreg, rac,wac,s,r,ta,tb,
	 output reg wpc,rpc,wsreg, isp,dsp,rsp,prsp, enable_mux_carry);

    reg [4:0] state, next_state;
	
	 parameter [4:0]Ins_STOP=5'b10111,
						 Ins_ST =5'b00000,
						 Ins_LD= 5'b00001,
						 Ins_STS=5'b00010,
						 Ins_LDS=5'b00011,
						 Ins_LDI=5'b11111,
						 Ins_ADD=5'b01000,
						 Ins_SUB=5'b01010,
						 Ins_SUBI=5'b11010,
						 Ins_MOV=5'b01111,
						 Ins_CALL=5'b00100,
						 Ins_RET=5'b00101,
						 Ins_BRxx=5'b00110,
						 Ins_JMP=5'b00111,
						 Ins_CP=5'b01011,
						 Ins_CPI=5'b11011,
						 Ins_SBCI= 5'b11100;

	parameter [4:0] State_Stop=0, 
						 State_Execute_S1=1,
						 State_Execute_S2=2,
						 State_Execute_LDS_S1=3,
						 State_Execute_LDS_S2=4,
						 State_Execute_STS_S1=5,
						 State_Execute_STS_S2=6,
						 State_Execute_LD_S1=7,
						 State_Execute_LD_S2=8,
						 State_Execute_ST_S1=9,
						 State_Execute_ST_S2=10,
						 State_Execute_JMP=11,
						 State_Execute_CALL_S1=12,
						 State_Execute_CALL_S2=13,
						 State_Execute_CALL_S3=14,
						 State_Execute_RET_S1=15,
						 State_Fetch = 5'b11111;
						 
						 
	always @(posedge clk, posedge reset)
		if(reset)
			state <= State_Stop;
		else
			state <= next_state;
			
	always @(*)
		begin
			{clpc, ipc, rpc,wpc,inm,wmar,rmem,wmem,wir,rac,wac, wreg,s,r,ta,tb,prsp,isp,dsp,rsp,wsreg}=0;
			next_state=State_Stop;
			case(state)
			State_Stop:  //Estado de espera inicial
				if(start)
					begin
						clpc=1;  //PC <- 0
						prsp=1;
						next_state=State_Fetch;
					end	
			State_Fetch: //Ciclo de Fetch
				begin
					wir=1;  // IR <- CODMEM (PC)
					ipc=1;  // PC <- PC+1
					next_state=State_Execute_S1;
				end
			State_Execute_S1:	/*Este estado está compartido por todas las instrucciones.
									Se consulta el código de operación y se bifurca*/
				begin
					case(op)
					Ins_STOP: 
							next_state = State_Stop;
					Ins_ADD: 
						begin
							wac=1;
							wsreg=1;  //SREG <- CNZV
							s=1;		// AC <- REG[sa]+REG[sb]
							next_state=State_Execute_S2;
						end
					Ins_SUB:
						begin
							wac=1;
							wsreg=1;  //SREG<-CNZV
							r=1;	   // AC <- REG[sa]-REG[sb]
							next_state=State_Execute_S2;
						end
					Ins_SUBI:
						begin
							wac=1;
							wsreg=1; //SREG<-CNZV
							r=1;
							inm=1;	// AC <- REG[sa]-IR[7:0]
							next_state=State_Execute_S2;
						end

					Ins_SBCI: 
						begin
							wac=1;
							r=1;
							inm=1;	// AC <- REG[sa] - dato - c
							wsreg = 1;  //SREG<-CNZV
							enable_mux_carry=1; 		// La unica diferencia entre SUBI, señal de MUX que va a Cin
							next_state=State_Execute_S2;
						end
					Ins_MOV:
						begin
							ta=1;
							wac=1;	//AC <- REG[sa]
							next_state=State_Execute_S2;
						end

					Ins_LDI:
						begin
							wac=1;
							tb=1;
							inm=1;	//AC <- IR[7:0] dato inmediato
							next_state=State_Execute_S2;
						end
					Ins_LDS:
						begin
							wac=1;
							tb=1;
							inm=1;	//AC <- IR[7:0] dirección
							next_state=State_Execute_LDS_S1;
						end

					Ins_STS:
						begin
							wac=1;
							tb=1;
							inm=1; //AC <- IR[7:0] dirección
							next_state=State_Execute_STS_S1;
						end

					Ins_LD:
						begin
							wac=1; //AC <- REG[sb]
							tb=1;
							next_state=State_Execute_LD_S1;
						end
					Ins_ST:
						begin
							wac=1;
							tb=1;	//AC <- REG[sb]
							next_state=State_Execute_ST_S1;
						end
					Ins_CALL:
						begin
							wac=1;
							tb=1;
							dsp=1;  //SP <- SP-1
							inm=1;  //AC <- IR[7:0]
							next_state=State_Execute_CALL_S1;
						end
					Ins_RET:
						begin
							wmar =1;
							rsp =1; //MAR<-SP
							next_state=State_Execute_RET_S1;
						end
				   Ins_BRxx:
						begin
							next_state=State_Fetch;
							case(condicion)
							0: //Salto si Z=1
								if( regestado[1])
									begin
										wac=1;
										tb=1;
										inm=1; //AC <- IR[7:0]
										next_state=State_Execute_JMP;
									end
							1: //Salto si C=1
								if( regestado[3])
									begin
										wac=1;
										tb=1;
										inm=1; //AC <- IR[7:0]
										next_state=State_Execute_JMP;
									end
							2: //Salto si V=1;
								if( regestado[0])
									begin
										wac=1;
										tb=1;
										inm=1; //AC <- IR[7:0]
										next_state=State_Execute_JMP;
									end
							3: //Salto si N^V=1;
								if( regestado[0]^regestado[2])
									begin
										wac=1;
										tb=1;
										inm=1; //AC <- IR[7:0]
										next_state=State_Execute_JMP;
									end
							endcase
						end
					Ins_JMP:
						begin
							wac=1;
							tb=1;	
							inm=1;  //AC <- IR[7:0]
							next_state=State_Execute_JMP;
						end
				   Ins_CP:
						begin
							r=1;   //AluBus = REG[sa]-REG[sb]
							wsreg=1; //SREG<- CNZV
							next_state=State_Fetch;
						end
					Ins_CPI:
						begin
							r=1;  //ALUBUS = REG[sa] - REG[sb]
							wsreg=1; //SREG <-CNZV
							inm=1;
							next_state=State_Fetch;
						end
					
					default: next_state=State_Stop;
					endcase
				end
			State_Execute_RET_S1:
				begin
					wpc=1;
					rmem=1; // PC <- MEMDAT[MAR]
					isp = 1; //SP<- SP+1
					next_state=State_Fetch;
				end
			State_Execute_CALL_S1:
				begin
					wmar=1;
					rsp=1; //MAR<- SP
					next_state=State_Execute_CALL_S2;
				end
			State_Execute_CALL_S2:
				begin
					wmem=1;
					rpc=1;	//MEMDAT[MAR]<-PC
					next_state=State_Execute_CALL_S3;
				end
			State_Execute_CALL_S3:
				begin
					rac=1;
					wpc =1; //PC<-AC
					next_state=State_Fetch;
				end
			State_Execute_JMP:
				begin
					wpc=1;
					rac=1;   //PC <- AC
					next_state=State_Fetch;
				end
			
			State_Execute_S2:/*Este estado es común a las instrucciones
									ADD,SUB,MOV,LDI,SUBI*/
				begin
					wreg=1;
					rac=1;	//REG[sa] <-AC
					next_state=State_Fetch;
				end
				
			State_Execute_LDS_S1: /*Siguiente estado de la instrucción LDS
											En el acumulador se encuentra la dirección*/
				begin
					wmar=1;
					rac=1;	// MAR <- AC
					next_state=State_Execute_LDS_S2;
				end
			State_Execute_LDS_S2:
				begin
					wreg=1;
					rmem=1;	//REG[sa] <- MEMDAT[MAR]
					next_state=State_Fetch;
				end
			State_Execute_STS_S1:
				begin
					rac=1;  
					wmar=1; //MAR<-AC
					wac=1; 
					ta=1; //AC<- REG[sa]
					next_state=State_Execute_STS_S2;
				end
			State_Execute_STS_S2:
				begin
					rac=1;
					wmem=1; //MEMDAT[MAR]<- AC
					next_state=State_Fetch;
				end
			State_Execute_LD_S1:
				begin
					wmar=1;
					rac=1;   //MAR<-AC
					next_state=State_Execute_LD_S2;
				end
			State_Execute_LD_S2:
				begin
					wreg=1;  
					rmem=1; //REG[sa] <- MEMDAT[MAR]
					next_state=State_Fetch;
				end
			State_Execute_ST_S1:
				begin
					wmar=1;
					rac=1;	//MAR <- AC
					wac=1;   //AC <- REG[sa]
					ta=1; 		
					next_state=State_Execute_ST_S2;
				end
			State_Execute_ST_S2:
				begin
					rac=1;   //MEMDAT[MAR]<-AC
					wmem=1;
					next_state=State_Fetch;
				end
				
			default: next_state=State_Stop;
			endcase
		
		end


endmodule

/*
	Formato de instruccin del CS3
	
	
	codop 
	00000fff-----11d     ST Y,Rf  ST Z,Rf
	00001ddd-----11f 		LD	Rd,Y  LD Rd,Z
	00010fffaaaaaaaa		STS direccion,Rf   //Dirección de 8 bits: aaaaaaaa
	00011dddaaaaaaaa		LDS Rd, direccion
	11111dddvvvvvvvv		LDI Rd, dato       //dato de 8 bits: vvvvvvvv
	01000ddd-----fff     ADD  Rd,Rf
	01010ddd-----fff     SUB  Rd,Rf
	11010dddvvvvvvvv     SUBI Rd,dato
	01111ddd-----fff		MOV  Rd,Rf
	10111-----------     STOP
	00111---aaaaaaaa		JMP  direccion
	00110xxxaaaaaaaa		BRxx direccion : xx condición de salto
	00100---aaaaaaaa		CALL direccion
	00101-----------		RET
	01011ddd-----fff		CP Rd,Rf
	11011dddvvvvvvvv	   CPI Rd,dato

*/
