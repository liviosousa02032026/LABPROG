#include<stdio.h>
int main(){
    float a, b, cheby, maior = 0, aux;
    
    for(unsigned char k = 0; k <= 2; ++k){
        printf("Entre com a métrica(área, perímetro ou vértices) de A: \n");
        scanf("%f", &a);
        printf("Entre com a métrica(área, perímetro ou vértices) de B: \n");
        scanf("%f", &b);
        if(b < a){
            aux = a;
            a = b;
            b = aux;
        }
        cheby = b - a;
        if(k == 0 || cheby > maior){
            maior = cheby;
        }
    }
    printf("A distância de Chebyshev entre A e B é %f.\n", maior);


    return 0;
}