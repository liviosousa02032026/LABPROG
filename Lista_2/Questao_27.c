#include<stdio.h>
int main(){
    int x, maior, menor;
    printf("Entre com o número, um a um. Ao final multiplicaremos o maior pelo menor.\n");
        if(scanf("%d", &x) != 1){
            fprintf(stderr,"Entrada inválida. O programa será encerrado.\n");
            return 1;
        }
        if(x < 0 && x % 2 == 0){
            printf("Você encerrou o programa antes de inserir duas entradas.\n");
            return 1;
        }
    maior = x;
    menor = x;
    while(!(x < 0 && x % 2 == 0)){
        if(x > maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
        printf("Entre com o número, um a um. Ao final multiplicaremos o maior pelo menor.\n");
        if(scanf("%d", &x) != 1){
            fprintf(stderr,"Entrada inválida. O programa será encerrado.\n");
            return 1;
        }
    }
    printf("O maior valor %d multiplicado pelo menor valor %d = %d\n", maior, menor, maior * menor);

    return 0;
}
    
    
