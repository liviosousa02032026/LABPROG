#include<stdio.h>
int main(){
    double x, y, res;
    printf("Entre com os valores do numerador e do denominador, nesta ordem, separados por espaço: ");
    if(scanf("%lf %lf", &x, &y) != 2){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    while(y == 0.0){
        printf("O denominador não pode ser zero. Digite novamente um número válido: ");
        if(scanf("%lf", &y) != 1){
            fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
            return 1;
        }
    }
    res = x / y;
    printf("%.2f / %.2f = %.2f\n", x, y, res);
    return 0;
}