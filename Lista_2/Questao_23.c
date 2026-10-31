#include<stdio.h>
int main(){
    int x, y;
    printf("Entre com o número:");
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    y = x;
    printf("X com decremento antes da impressão(--x): %d.\n", --x);
    x = y;
    puts("Repare  que houve decremento.");
    printf("X com decremento depois da impressão(x--): %d.\n", x--);
    puts("Repare que não houve decremento.");
    printf("Visualização de x após o printf x--: %d\n", x);
    return 0;
}