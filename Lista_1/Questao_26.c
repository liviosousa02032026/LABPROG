#include<stdio.h>
#include<math.h>
int main(){
    float x, y, z;
    puts("Entre com os três números separados por espaço:");
    if(scanf("%f %f %f", &x, &y, &z) != 3){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    printf("A média aritmética dos números é %f e a média geométrica é %f.\n", (x + y + z) / 3, pow(x * y * z, 1.0/3.0));
    return 0;
}