/*
  Arquivo: JacquelineGrecco_Sorting.c
  Autor: JACQUELINE PIRES GRECCO
  Date: 02/04/2019 08:10
  Descri��o: Este programa determina o tempo de execu��o de um
  dos algoritmos elementares de ordena��o - bolha, ordena��o por
  sele��o e ordena��o por inser��o.Basta alterar a chamada da fun��o
  de ordena��o.
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define Max 150001
#include "SortingLista.h"

int main( ){
      ListaInt a, b, c;
      double d;
      time_t inicio, fim;    // o tipo time_t est� definido em time.h

      printf(" \n\nConstruir uma lista com inteiros positivos menores que 2000  -  ");
      printf("Tamanho da lista = %d itens", Max-1);    printf(" \n\n\n");
      construirListaAleatoria(&a,Max-1);
	  b = a; 
	  c = a; 
	  		
 //    mostrarLista(&a);
 //    mostrarLista(&b);
 //    mostrarLista(&c);

	 printf(" \n\n\n");     printf(" BubbleSort - ");
	 inicio = time(NULL);
	 ordenarListaCrescenteB(&c); 
     fim = time(NULL);
     d = difftime(fim,inicio); printf("  Tempo de execucao = %f segundos \n\n\n",d);
     printf(" \n\n");
     
	 printf(" \n\n\n");     printf(" Insertion Sort - ");
	 inicio = time(NULL);
	 ordenarListaCrescenteI(&a);
	 fim = time(NULL);
	 d = difftime(fim,inicio); printf("  Tempo de execucao = %f segundos \n\n\n",d);
     printf(" \n\n");
	 
     printf(" \n\n\n");     printf(" SelectionSort - ");
     inicio = time(NULL);       //tempo corrente em uma vari�vel do tipo time_t
     ordenarListaCrescenteS(&b);
     fim = time(NULL);
     d = difftime(fim,inicio); printf("  Tempo de execucao = %f segundos \n\n\n",d);
     printf(" \n\n");

 //    mostrarLista(&a);
 //    mostrarLista(&b);
 //    mostrarLista(&c);
     return 0;
}
