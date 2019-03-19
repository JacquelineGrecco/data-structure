/*
  Arquivo: Tarefa1_JacquelineGrecco.c
  Autor: JACQUELINE GRECCO
  Data: 24/02/19 21:30
  Descrição: Este é um programa que pode utilizado para calcular o número do nome de uma pessoa afim de prever o futuro da mesma.  
  A função HC1 obtém o resto da divisão entre a soma de cada número de letra, do nome do aluno, associada a tabela ASCII e 13. 
  A função HC2 obétm o resto da divisão entre a soma da multiplicação entre cada número obtido por uma potência de 26 elevado pela posição da respectiva letra e 13.   

  Caso queira comprovar efetividade deste programa efetue o teste passado como exemplo : 
    char nome_aluno[] = "CAIO"; 
    
  Os resultados devem ser : 

    NOME: "CAIO"
    HC1 : 11 
    HC2 : 1     
*/

#include <stdio.h> 
#include <string.h>
#include <math.h>

int HC1(char*); 
long long int HC2(char*); 

void main (){
	
	char nome_aluno[] = "JACQUELINE"; 
	int primeiro_resultado = 0;
	long long int segundo_resultado  = 0; 

	primeiro_resultado = HC1(nome_aluno); 
	segundo_resultado  = HC2(nome_aluno); 

	printf("NOME = %s\n", nome_aluno); 
	printf("HC1  = %d\n", primeiro_resultado);
	printf("HC2  = %lld\n", segundo_resultado); 
}

int HC1 (char* nome_aluno){
	int tamanhoVetor = strlen(nome_aluno); 
	int soma = 0; 
	int i;

	for (i=0; i<tamanhoVetor;i++)
		soma = soma + nome_aluno[i];

	soma = soma % 13; 

	return soma; 
} 


long long int HC2 (char* nome_aluno){
	int tamanhoVetor = strlen(nome_aluno); 
	int expoente = 0; 
	long long int potencia = 0;  
	int i;  
	int valor = 26; 
	long long int soma  = 0; 

	for (i=0;  i < tamanhoVetor; i++){
		expoente = tamanhoVetor - i - 1; 
		potencia = pow(valor,expoente); 
 
		soma = soma + (nome_aluno[i] * potencia);
	} 

	soma = soma % 13; 

 	return soma; 
} 