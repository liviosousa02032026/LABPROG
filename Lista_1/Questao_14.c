#include <stdio.h>

int main() {
    int dias;
    float bruto;
    printf("Entre com a quantidade de dias que o vendedor trabalhou: ");
    if (scanf("%d", &dias) != 1 || dias <= 0) {
        fprintf(stderr, "Entrada invalida. O programa sera encerrado.");
        return 1;
    }
    bruto = 50.25f * dias;
    if (dias <= 10) {
        printf("O salario liquido do vendedor = %.2f.\n", bruto - bruto * 0.1f);
    } else if (dias <= 20) {
        printf("O salario liquido do vendedor = %.2f.\n", (bruto + bruto * 20 / 100) - ((bruto + bruto * 20 / 100) * 0.1f));
    } else {
        printf("O salario liquido do vendedor = %.2f.\n", (bruto + bruto * 30 / 100) - ((bruto + bruto * 30 / 100) * 0.1f));
    }
    return 0;
}
