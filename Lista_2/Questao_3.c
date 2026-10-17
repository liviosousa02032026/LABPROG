#include<stdio.h>
int main(){
    short x;//unsigned alteraria o valor de x negativo tornando positivo, dando overflow
    unsigned long long int fatorial = 1;
    printf("Entre com o número que se deseja calcular seu fatorial:");
    if(scanf("%hd", &x) != 1 || x < 0 || x > 20){
        fprintf(stderr, "Número inválido. O programa será encerrado.\n");
        return 1;
    }
    for(unsigned char i = 2; i <= x; ++i){
        fatorial *= i;
    }
    printf("O fatorial de %hd é %llu.\n", x, fatorial);
    return 0;
}