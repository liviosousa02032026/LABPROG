#include<stdio.h>

int main(){
    float peso_ideal, altura;
    unsigned char sexo;
    puts("Entre com o sexo da pessoa - digite 0 para homem ou 1 para mulher:");
    scanf("%hhu", &sexo);
    if(sexo != 0 && sexo != 1){
        puts("Voce digitou um valor invalido. O programa sera encerrado.");
        return 1;
    }
    puts("Entre com a altura da pessoa em metros:");
    scanf("%f", &altura);
    switch(sexo){
        case 0:
            peso_ideal = 72.7 * altura - 58;
            break;
        case 1:
            peso_ideal = 62.1 * altura -44.7;
            break;
    }
    printf("O peso ideal da pessoa em quilogramas = %.1f\n", peso_ideal);
    return 0;
}
