#include <stdio.h>

int main() {
    float celsius;
    puts("Entre com a temperatura em graus Celsius:");
    if (scanf("%f", &celsius) != 1) {
        fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
        return 1;
    }
    printf("%.2f graus Celsius equivalem a %.2f graus Farenheit.\n", celsius, (9.0f * celsius + 160.0f) / 5.0f);
    return 0;
}
