#include<stdio.h>
#include<math.h>

int main(){
    float x1, y1, x2, y2, d;
    puts("Entre com as coordenadas x1 e y1 do ponto 1 separadas por espaço:");
    if(scanf("%f %f", &x1, &y1) != 2){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    puts("Entre com as coordenadas x2 e y2 do ponto 2 separadas por espaço:");
    if(scanf("%f %f", &x2, &y2) != 2){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    d = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("A distância entre os dois pontos é %f.\n", d);

    return 0;
}