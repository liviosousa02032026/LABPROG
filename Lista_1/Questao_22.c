#include<stdio.h>
int main(){
    int x, y, w, z, inv;
    puts("Entre com o número que terá suas posições invertidas:");
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    y = x / 100;
    w = (x - y * 100) / 10;
    z = (x - y * 100) - (w * 10);
    inv = z * 100 + w * 10 + y;

    printf("O número %d, após ter seus dígitos invertidos, tornou-se o número %d\n", x, inv);

    return 0;
}