#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 15
#define AMP 100 

int main(){
    
    float vetor[TAM], menor, maior;
    srand(time(NULL));
    
    printf("Aperte ENTER para popular um vetor com %d elementos aleatórios e imprimí-lo: ", TAM);
    getchar();

    //popular vetor
    for(unsigned char i = 0; i < TAM; ++i){
        vetor[i] = rand() % AMP;
    }
    //imprimir vetor criado
    printf("[ %.2f", vetor[0]);
    for(unsigned char i = 1; i < TAM; ++i){
        printf(", %.2f", vetor[i]);
    }
    printf("]\n");

    printf("Aperte ENTER para definir o maior e o menor valor do vetor e somá-los ");
    getchar();

    //definição do maior e menor valor
    menor = maior = vetor[0];
    for(unsigned int i = 1; i < TAM; ++i){
        menor = (menor > vetor[i])?vetor[i]:menor;
        maior = (maior < vetor[i])?vetor[i]:maior;
    }
    //soma entre maior e menor
    printf("A soma entre o maior(%.2f) e o menor(%.2f) valor do vetor = %.2f\n", maior, menor, maior + menor);

    return 0;
}