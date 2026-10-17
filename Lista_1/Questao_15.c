#include <stdio.h>

#define INSS (14.0f/100.0f)
#define HORA_AULA 89.29f

int main() {
    unsigned char horas_trab;
    float salario_bruto;
    puts("Entre com a quantidade de horas trabalhadas no mes pelo professor:");
    if (scanf("%hhu", &horas_trab) != 1) {
        fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
        return 1;
    }
    salario_bruto = (float)horas_trab * (HORA_AULA);
    printf("O salario bruto do professor = %.2f. O salario liquido do professor = %.2f\n", salario_bruto, salario_bruto - (salario_bruto * (INSS)));
    return 0;
}
