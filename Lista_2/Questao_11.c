#include<stdio.h>
int main(){
    int lim_inf, lim_sup, aux;
    printf("Entre com a faixa de valores(limites inferior e superior separados por espaço):");
    if(scanf("%d %d", &lim_inf, &lim_sup) != 2){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    if(lim_inf > lim_sup){
        aux = lim_inf;
        lim_inf = lim_sup;
        lim_sup = aux;
    }
    while((lim_inf % 4) != 0){
        ++lim_inf;
    }
    for(int i = lim_inf; i <= lim_sup; i += 4){
        if(i == lim_inf){
            printf("%d", i * i);
        }else{
            printf(", %d", i * i);
        }
    }
printf(".\n");
    return 0;
}