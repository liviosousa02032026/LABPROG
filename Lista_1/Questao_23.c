#include<stdio.h>
int main(){

    int x, n, y;

    puts("Entre com o número X que será multiplicado pela potência de 2:");
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    puts("Entre com o expoente da base 2:");
    if(scanf("%d", &n) != 1 || n < 0 || n > 31){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }

    y = x << n;

    printf("O número %d multiplicado por 2 elevado a %d = %d\n", x, n, y);
    return 0;
}