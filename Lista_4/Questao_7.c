#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

#define TAM 3
#define AMP 20

int main(){
    int vetor[TAM];

    srand(time(NULL));

    for(unsigned char i = 0; i < TAM; ++i){
        vetor[i] = rand() % AMP;
    }
    printf("[%d", vetor[0]);
    for(unsigned char i = 1; i < TAM; ++i){
        printf(", %d", vetor[i]);
    }
    printf("]\n");
    int soma = 0;
    double mult = 1;
    for(unsigned char i = 0; i < TAM; ++i){
        soma += vetor[i];
        mult *= vetor[i];
    }
    float media_geometrica;
    media_geometrica = pow(mult, 1.0 / 3.0);
    printf("A média aritmética dos elementos do vetor = %.2f. A média geométrica =  %.2f.\n", (float)soma / TAM, media_geometrica);
    return 0;
}