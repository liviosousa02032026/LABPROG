#include<stdio.h>
int main(){
    unsigned long long int termo, soma = 0;
    unsigned char base = 2;

    for(unsigned char i = 0; i <= 63; ++i){
        if(i == 0){
            termo = 1;
        }else{
            termo *= base;
        }
    soma += termo;
    }
    printf("A soma dos termos da sequência é %llu.\n", soma);
    return 0;
}