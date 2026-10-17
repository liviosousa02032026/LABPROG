#include <stdio.h>

int main() {
    float x;
    printf("Entre com o valor de x com pelo menos duas casas decimais: ");
    scanf("%f", &x);
    printf("O valor de x = %f que voce digitou, pode ser arredondado para uma casa decimal usando .1 na mascara de saida, onde x fica = %.1f\n", x, x);
    return 0;
}
