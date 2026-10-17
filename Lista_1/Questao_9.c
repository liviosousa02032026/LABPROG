#include <stdio.h>

int main() {
    float comprimento, altura, largura;
    printf("Entre com o comprimento, altura e largura: ");
    scanf("%f %f %f", &comprimento, &altura, &largura);
    printf("O volume da caixa retangular = %.2f.\n", comprimento * altura * largura);
    return 0;
}
