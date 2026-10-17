#include<stdio.h>
int main(){
    unsigned int x, horas;
    unsigned char minutos, segundos;
    puts("Entre com o tempo em segundos:");
    if(scanf("%u", &x) != 1 || x < 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }

    horas = x / 3600;
    minutos = (x - horas * 3600) / 60;
    segundos = (x - horas * 3600) % 60;

    printf("%u segundos correspondem a %u horas, %hhu minutos e %hhu segundos.\n", x, horas, minutos, segundos);

    return 0;
}