#include <stdio.h>
//#include <Booleano.h>
#define Maximo 6
#define Fantasma 0


typedef struct {
	int tamanho; 
	int vetor[Maximo]; 
} ListaInt; 



ListaInt criarLista();
ListaInt construirLista(int, int); 
//ListaInt construirListaRam(int, int, int); 
ListaInt esvaziarLista(ListaInt); 


int  obterTamanho(ListaInt);
bool verificarListaVazia(ListaInt); 
int  obterElemento(ListaInt, int, int); 
int  buscarElemento(ListaInt, int); 
void mostrarLista (ListaInt); 

ListaInt inserir(ListaInt, int); 
//ListaInt removerLocal(ListaInt, int); 



void main (){
	ListaInt A; 
	
	A = criarLista(); 
	A = construirLista(6,5); 
	mostrarLista(A); 
	
}


ListaInt criarLista (){
	ListaInt lista; 
	lista.tamanho = 0; 	
	return lista;  
}

ListaInt construirLista(int tamanho, int valor){
	ListaInt lista; 
	int i; 
	
	if ((tamanho > 0 ) && (tamanho < Maximo))
		lista.tamanho = tamanho; 
	else 
		lista.tamanho = Maximo - 1; 	
	
	for (i=1;i<=lista.tamanho;i++)
		lista.vetor[i] = valor; 
		
	return lista; 	
}

ListaInt esvaziarLista (ListaInt lista){
	lista.tamanho = Fantasma; 
	
	return lista; 
}

ListaInt inserir (Lista lista, int elemento){
	int tamanho = lista.tamanho; 
	
	if(tamanho < Maximo - 1){
		lista.vetor[tamanho + 1] = elemento; 
		lista.tamanho ++; 
	}
	
	return lista;	
}



int obterTamanho (ListaInt lista){
	return lista.tamanho; 
}

int obterElemento(ListaInt lista, int elemento, int posicao){
	
	if (( posicao => 1 ) && (posicao <= lista.tamanho) ) 
		elemento = lista.vetor[posicao]; 
	else 
		elemento = Fantasma; 
		
				
	return elemento; 
}

int buscarElemento (ListaInt lista, int elemento, int posicao){
	posicao = Fantasma; 
	
	if(lista.tamanho != 0){
		int i = 1; 
		while ((lista.vetor[i] != elemento) && (i < lista.tamanho))
			i++; 
		if (lista.vetor[i] = elemento)
			posicao = i; 	
	}

	return posicao; 
}

bool verificarListaVazia(Lista lista){
	bool listaVazia; 
	
	if(lista.tamanho == 0) 
		listaVazia = true; 
	else 
		listaVazia = false; 
	
	return listaVazia; 				
}


void mostrarLista (ListaInt lista){
	int tamanho; 
	int i; 
	
	tamanho = lista.tamanho; 
		
	if (tamanho != 0){
		printf("\nTamanho da Lista: %d\n\n", tamanho); 
		for (i = 1; i <= tamanho ; i++){
			printf("Elemento: %d\n", lista.vetor[i]); 
			printf("Indice do vetor: %d\n", i); 
		}
	}
	
	else 
		printf("\nLista Vazia!\n"); 	
}

