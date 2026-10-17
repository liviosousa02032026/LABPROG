#include<stdio.h>
int main(){
    int lim_inf, lim_sup, soma = 0;
    printf("Entre com a faixa de valores que serão somados(limites inferior e superior separados por espaço): ");
    if(scanf("%d %d", &lim_inf, &lim_sup) != 2){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    if(lim_inf > lim_sup){
        int aux;
        aux = lim_inf;
        lim_inf = lim_sup;
        lim_sup = aux;
    }
    
    if((lim_inf % 2) != 0){
        ++lim_inf;
    }
    for(int i = lim_inf; i <= lim_sup; i += 2){
        soma = soma + i;
        }
        
    printf("%d\n", soma);
    return 0;
}