#include<stdio.h>
int main(){
    int x, y, cont = 0;
    printf("Entre com o número que se deseja saber quantos algarismos 7 ele tem: ");
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    y = x;
    while(x > 1){
        if((x % 10) == 7){
            ++cont;
            x = x / 10;
        }
    }
    printf("O número %d tem %d algarismos 7.\n", y, cont);
    return 0;
}