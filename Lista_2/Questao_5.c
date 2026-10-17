#include<stdio.h>
int main(){
    int x, menor, maior;
    printf("Digite um número(ao final o programa imprimirá o maior e o menor número digitados). Digite 0 para encerrar o programa: ");
        if(scanf("%d", &x) != 1){
            fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
            return 1;
        }
    menor = maior = x;
    while(1){
        if(x == 0){
            printf("Programa encerrado.\n");
            break;
    }
    if(x < menor){
        menor = x;
    }
    if(x > maior){
        maior = x;
    }
    printf("Digite um número(ao final o programa imprimirá o maior e o menor número digitados). Digite 0 para encerrar o programa: ");
        if(scanf("%d", &x) != 1){
            fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
            return 1;
        }
    }
    printf("O menor número digitado foi %d e o maior número digitado foi %d.\n", menor, maior);
    return 0;
}