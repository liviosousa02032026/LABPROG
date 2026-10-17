#include<stdio.h>
int main(){
    int x;
    printf("Entre com o número no qual serão mostradas as suas tabuadas: ");
    if(scanf("%d", &x) != 1 || x < 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    for(unsigned char i = 1; i < 11; ++i){
        printf("%d + %hhu = %d\n", x, i, x + i);
    }
    printf("\n");
    for(unsigned i = 1; i < 11; ++i){
        printf("%d * %hhu = %d\n", x, i, x * i);
    }
    return 0;
}