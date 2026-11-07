#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 100

int main(){
    int vetor[TAM];
    unsigned int amp;

    printf("Qual a amplitude dos valores que comporão o vetor?");
    scanf("%d", &amp);
    
    printf("Aperte ENTER para popular um vetor com 100 números inteiros aleatórios: ");
    getchar();
    
    //popular vetor
    srand(time(NULL));
    for(unsigned char i = 0; i < TAM; ++i){
        vetor[i] = rand() % amp;
    }
    //exibição do vetor criado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("%d, ", vetor[i]);
    }

    printf("\n\n\n");

    //vetor ordenado
    int aux;
    for(unsigned char i = 0; i < TAM - 1; ++i){
        for(unsigned char k = i + 1; k < TAM; ++k){
            if(vetor[i] > vetor[k]){
                aux = vetor[i];
                vetor[i] = vetor[k];
                vetor[k] = aux;
            }
        }
    }

    //exibição do vetor ordenado
    for(unsigned char i = 0; i < TAM; ++i){
        printf("%d, ", vetor[i]);
    }

    return 0;
}