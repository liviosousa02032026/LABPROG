#include<stdio.h>
int main(){
    int x, menor, controle;
    int *px = &x, *pmenor = &menor, *pcontrole = &controle;
    puts("Entre com o número:");
    if(scanf("%d", px) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    *pcontrole = 1;
    *pmenor = x;
    while(*pcontrole == 1){
        puts("Entre com o número ou digite sair para encerrar o programa:");
        *pcontrole = scanf("%d", px);
        if(*pcontrole == 1){
            if(*px < *pmenor){
                *pmenor = *px;
            }
        }
    }
    printf("O menor número digitado foi %d", *pmenor);
    return 0;
}