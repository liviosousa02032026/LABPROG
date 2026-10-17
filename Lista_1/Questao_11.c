#include <stdio.h>

int main() {
    int x, y;
    printf("Como ha uma operaçao de resto, os dados de entrada devem ser numeros inteiros. Entre com os dois numeros inteiros X e Y: ");
    if (scanf("%d %d", &x, &y) != 2) {
        fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
        return 1;
    }
    if (y == 0) {
        fprintf(stderr, "O valor do segundo numero nao pode ser zero. O programa sera encerrado.\n");
        return 1;
    }
    printf("Soma = %d\n", x + y);
    printf("Produto = %d\n", x * y);
    printf("Diferença = %d\n", x - y);
    printf("Quociente = %f\n", ((float)x) / ((float)y));
    printf("Resto = %d\n", x % y);
    return 0;
}
