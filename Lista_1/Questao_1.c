#include <stdio.h>

int main(){
    unsigned char x;
    puts("Entre com o valor em decimal:");
    scanf("%hhu", &x);
    printf("O valor em hexadecimal = %#02X e em octal = %o.\n", x, x);
    return 0;
}
