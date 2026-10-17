#include<stdio.h>
int main(){
    unsigned char dia;
    printf("Digite de 1 a 7 para definir o dia da semana ou 0 para sair:");
    if(scanf("%hhu", &dia) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    do{
        switch(dia){
            case 1:
            printf("Domingo\n\n");
            break;
            case 2:
            printf("Segunda\n\n");
            break;
            case 3:
            printf("Terça\n\n");
            break;
            case 4:
            printf("Quarta\n\n");
            break;
            case 5:
            printf("Quinta\n\n");
            break;
            case 6:
            printf("Sexta\n\n");
            break;
            case 7:
            printf("Sábado\n\n");
            break;
            default:
            printf("Número de dia não válido\n\n");
            break;
        }
    printf("Digite de 1 a 7 para definir o dia da semana ou 0 para sair:");
    if(scanf("%hhu", &dia) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;    
    }
    }while(dia != 0);
    printf("O programa foi encerrado.\n");
    return 0;
}