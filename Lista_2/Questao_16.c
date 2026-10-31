#include<stdio.h>

int main(){
    unsigned int soma3 = 0, soma5 = 100;

    for(soma3, soma5; soma3 <= 100 || soma5 <= 200){
        soma3 += 3
        soma3 += soma3;
        soma5 += 5;
        }
    
printf("O somatório dos divisíveis por 3 = %u e o somatório dos divisíveis por 5 = %u\n", soma3, soma5);
    return 0;
}