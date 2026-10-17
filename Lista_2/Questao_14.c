#include<stdio.h>
int main(){
    int lim_inf, lim_sup;
    printf("Entre com a faixa de valores que serão rastreados os múltiplos de 3(limites inferior e superior separados por espaço):");
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

    int lim_inf2 = lim_inf;
    while((lim_inf % 3) != 0){
        ++lim_inf
    } 
    int cont = 0;
    for(int i = lim_inf; i <= lim_sup; i +=3){
            ++cont;
        }
    
    printf("Na faixa de valores de %d a %d existem %d múltiplos de 3.\n", lim_inf2, lim_sup, cont);
    return 0;
}