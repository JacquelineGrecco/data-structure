/* TAD ListaInt */
/*
  Arquivo: APD_ListaInt.h
  Autor: Pato Donald
  Date: 09/09/13
  Descrição: Implementa o tipo ListaInt
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define fantasma 0
#define Maximo 1001
typedef struct{
  int tamanho;
  int tab[Maximo];
}ListaInt;

//Interface
// construtores
    ListaInt criarLista();                    // criar uma lista vazia
    ListaInt construirListaRam(int,int,int);  // construir uma lista aleatória com n itens na faixa [a,b]
//  acesso
    void mostrarLista(ListaInt);              // mostra a lista
    int obterTamanho(ListaInt);               // obter o tamanho da lista
    int obterElemento(ListaInt, int);         // obter o item de ordem p
    int buscarLista(ListaInt, int);           // busca um elemento, devolve posição
// manipulação
    ListaInt inserirNoFim(ListaInt,int);      // inserir um item no final da lista

//Implementação

ListaInt criarLista(){
         // em desenvolvimento
}

ListaInt construirListaRam(int M,int lo, int hi){   // M é a quantidade de números
         ListaInt L;                                // [lo..hi] é a faixa de valores
         int j,r;
         double g;
         if((M>0)&&(M<Maximo-1))L.tamanho = M; else L.tamanho = Maximo-1;
         srand((int) time(NULL));
         for(j=1;j<=M;j++){
                  g = (double)rand()/((double)RAND_MAX + 1);
                  r = g*(hi-lo+1) + lo;
                  L.tab[j] = r;
         }
         return L;
}

void mostrarLista(ListaInt L){
     int k, n;
     n = L.tamanho;
     if (n==0) printf(" \n lista vazia \n");
     else {
            printf("\n");
            for(k=1;k<=n;k++)printf(" %d ", L.tab[k]);
     }
     printf("\n");
}

int obterTamanho(ListaInt L){
     // em desenvolvimento
}

int obterElemento(ListaInt L, int p){
    int item, t;
    t = L.tamanho;
    if((p>=1)&&(p<=t)) item = L.tab[p]; else item = fantasma;
    return item;
}

int buscarLista(ListaInt L, int y){
     // em desenvolvimento
}

ListaInt inserirNoFim(ListaInt L,int y){
          // em desenvolvimento
}


