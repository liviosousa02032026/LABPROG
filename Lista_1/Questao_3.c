#include <stdio.h>

int main() {
    int x;
    printf("Entre com o valor de x: ");
    scanf("%d", &x);
    printf("O triplo de %d = %d. O quadrado = %d. E o meio = %.2f\n", x, 3*x, x*x, (float)x/2);
    return 0;
}
