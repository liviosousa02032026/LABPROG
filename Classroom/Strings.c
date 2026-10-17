#include<stdio.h>
#include<string.h>

#define TAM 30

int main(){
    char str[TAM];
    puts("Digite seu nome:");
    fgets(str, TAM, stdin);
    for(unsigned char i = 0; i < TAM; ++i){
        printf("%x\n", str[i]);
    }
    
    return 0;
}