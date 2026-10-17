#include<stdio.h>
int main(){
    printf("Aperte ENTER para gerar a série de Fibonacci até o 20º termo: ");
    getchar();
    unsigned int x1, x2, x3;
    x1 = 1;
    x2 = 1;
    printf("A sequência de Fibonacci até o 20º termo é %u, %u", x1, x2);
    for(unsigned char i = 3; i < 21; ++i){
        x3 = x1 + x2;
        printf(", %u", x3);
        x1 = x2;
        x2 = x3;
    }
    printf(".\n");
    return 0;
}