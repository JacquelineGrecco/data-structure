/*
  Arquivo: Tarefa2_JacquelineGrecco.c
  Autor: JACQUELINE GRECCO
  Data: 24/02/19 22:30
  Descri��o: Este � um programa que utiliza os dados da Tarefa 1 para encontrar o exercicio previsto para aquele aluno. 
  
  Dados recebidos da Tarefa 1 : 
        NOME DO ALUNO: JACQUELINE
        HC1 : 9
        HC2 : 2   
*/

#include <stdio.h> 
#include <string.h>
#include <math.h>

int HC3(int);  
void HC13(); 

void main (){
    
    int HC1 = 11; 
    int E   = 0;

    E = HC3(HC1); 
    
    printf("O exercicio misterioso e: %d\n\n",E); 

    printf("\nRESULTADO DO EXERCICIO 13");
    HC13(); 
}


int HC3 (int HC1){
    int E = 0; 

    if((HC1 % 2) != 0) 
        E = ((3 * HC1) - 1) / 2; 
    else 
        E = HC1 / 2;      

    if( E == 7)
        E = E * 2; 
    else if (E == 10)
        E = E + 5; 

    return E; 
}

void HC13(){
    char ch = -13; 
    int  y  = ch; 

    printf("\n\n y = %d\n",y);
    printf("\n\n ch = %d\n",ch);
    printf("\n\n ch = %c\n",ch);
}


/*
    TAREFA INICIAL - data : 26.02.2019
    NOME : JACQUELINE 
    HC1  : 9 
    
    QUEST�O 13 - Qual a sa�da apresentada na tela? 
    1    char ch = -13; 
    2    int  y  = ch; 
    3
    4   printf("\n\n y = %d\n",y);
    5   printf("\n\n ch = %d\n",ch);
    6   printf("\n\n ch = %c\n",ch);
    
    
    RESPOSTA :
         y  = -13 
         ch = -13 
         ch = ?
    JUSTIFICATIVA: 
        Como podemos ver na primeira linha � declarado uma variavel que � denominada de ch e � do tipo char e � atribuido o valor -13. 
        Na segunda linha � decladado uma variavel denominada y que � do tipo int (inteiro) e recebe a atribui��o do valor de ch, ou seja, o valor de y � -13 tamb�m. 
        Conforme dito a cima a variavel ch � do tipo char e isso significa que � possivel representar-la de duas maneiras: 
            1� Apresentando o seu valor n�merico de acordo com a tabela ASCII. 
            2� Apresentando o caractere correspondente ao valor n�mero de acordo com a tabela ASCII. 
        Com isso, podemos afirmar que a linha 5 e 6 do programa corresponde em apresentar as possiveis formas da variavel ch. 
        J� a variavel y n�o possui uma outra representa��o a n�o ser a n�merica, pois o seu tipo (int) s� permite que a variavel apresente o seu valor numerico e � exatamente isso que acontece na linha 4 do programa. 
*/ 
