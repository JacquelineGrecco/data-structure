/*
  Arquivo: Tarefa1_JacquelineGrecco.c
  Autor: JACQUELINE GRECCO
  Data: 24/02/19 21:30
  Descrição: Este é um programa que pode utilizado para calcular alguns exercicios passados em sala. 
*/

#include <stdio.h> 
#include <string.h>
#include <math.h>

long long int HC1(int , int); 
void HC2 (double, double); 

void main (){
	
	int x = 40545; 
	int y = 70226; 
	long long int resultado_1 = 0; 
	
	double a = 1.547; 
	double b = 3.276; 
	double c = 4.823; 
	double d = a + b; 
	
//	resultado_1 = HC1(x,y); 	
//	printf("\nHC1  = %d\n", resultado_1);
	
	HC2(c,d); 
	
	
}

long long int HC1 (int x, int y){
	
    long long int funcao = 0; 
    long long int varx   = 9 * x*x*x*x; 
    long long int vary   = y*y*y*y; 
    long long int var2y  = 2*y*y; 
    
    funcao = varx - vary + var2y; 
    
	return funcao; 
} 

void HC2 (double c, double d){
	int igual; 
	
	printf("\nValor de C: %f\n", c); 
	printf("\nValor de D: %f\n", d); 
	
	
	if (c == d)
		igual = 1; 
	else 
		igual = 0; 
			
	if (igual == 0)	
		printf("\n\nDIFERENTE\n"); 
		
	else 
		printf("\n\nIGUAL\n"); 	
}
