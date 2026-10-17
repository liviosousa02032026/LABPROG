#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 20
#define AMP 100

int main(){
    
    //declaração do vetor
    unsigned char vetor[TAM];

    //interação com o usuário para popular o vetor com dados aleatórios
    puts("Aperte ENTER para popular o vetor com dados aleatórios");
    getchar();

    //chamada da função srand para alterar a semente dos dados pseudo-aleatórios
    srand(time(NULL));

    //populando o vetor com dados aleatórios
    for(unsigned char i = 0; i < TAM; ++i){
        vetor[i] = rand() % AMP;
    }

    //exibir o vetor criado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("[%p]: vetor[%hhu] = %hhu\n", &vetor[i], i, vetor[i]);
    }

    //interação com usuario para exibir vetor ordenado
    puts("Aperte ENTER para exibir o vetor ordenado pelo método bolha");
    getchar();

    //ordenação do vetor pelo método bolha
    unsigned char aux;
    for(unsigned char i = 0; i < TAM; ++i){
        for(unsigned char j = 0; j < (TAM - 1); ++j){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    //exibir o vetor ordenado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("[%p]: vetor[%hhu] = %hhu\n", &vetor[i], i, vetor[i]);
    }
    return 0;
}
