#include<stdio.h>
int main(){
    int x, y;
    puts("Entre com o número maior:");
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    puts("Entre com o número menor:");
    if(scanf("%d", &y) != 1 || y == 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    while(x % y){
        puts("O maior não é múltiplo do menor");
        return 0;
    }
    puts("O maior é múltiplo do menor");
    return 0;
}