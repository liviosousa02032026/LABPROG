#include<stdio.h>
int main(){
    for(unsigned int i = 1; i <= 256; ++i){
        printf("O número %u em binário é %b\n", i, i);
        printf("O número %u em octal é %o\n", i, i);
        printf("O número %u em hexadecimal é %X\n", i, i);
    }

    return 0;
}