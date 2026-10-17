#include <stdio.h>

int main() {
    int x, mask;
    puts("Entre com o valor de x:");
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
        return 1;
    }
    mask = x >> 31;
    x = (x ^ mask) - mask;
    printf("O modulo de x = %d\n", x);
    return 0;
}
