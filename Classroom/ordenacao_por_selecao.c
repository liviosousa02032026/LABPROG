#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 20
#define AMP 100

int main(){

    //declarar o vetor
    unsigned char vetor[TAM];

    //interação com o usuário para popular o vetor com dados aleatórios
    puts("Aperte ENTER para popular o vetor com dados aleatórios");
    getchar();

    //chamada da função srand para alterar a semente dos dados pseudo-aleatórios
    srand(time(NULL));

    for(unsigned char i = 0; i < TAM; ++i){
        vetor[i] = rand() % AMP;
    }
    
    //exibir o vetor criado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("[%p]: vetor[%hhu] = %hhu\n", &vetor[i], i, vetor[i]);
    }

    //interação com o usuário para ordenar e exibir o vetor
    puts("Aperte ENTER para exibir o vetor ordenado");
    getchar();

    //ordenação do vetor por seleção
    unsigned char aux;
    for(unsigned char i = 0; i < (TAM - 1); ++i){
        for(unsigned char j = (i + 1); j < TAM; ++j){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //exibir o vetor ordenado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("[%p]: vetor[%hhu] = %hhu\n", &vetor[i], i, vetor[i]);
    }
    return 0;
}