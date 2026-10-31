#include<stdio.h>
int main(){
    int lim_inf, lim_sup, soma = 0, cont = 0;
    
    printf("Entre com o limite inferior da faixa de valores que será calculada a média aritmética: ");
    if(scanf("%d", &lim_inf) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    printf("Entre com o limite superior da faixa de valores que será calculada a média aritmética: ");
    if(scanf("%d", &lim_sup) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }

    if(lim_inf > lim_sup){
        int aux;
        aux = lim_inf;
        lim_inf = lim_sup;
        lim_sup = aux;
    }

    for(int i = lim_inf; i <= lim_sup; ++i){
        soma += i;
        ++cont;
    }

    printf("A média aritmética dos valores localizados na faixa dada é %.2f.\n", (float)soma/cont);
    return 0;
}