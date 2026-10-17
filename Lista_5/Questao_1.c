#include<stdio.h>
int main(){
    unsigned char x, y, res;
    unsigned char *px = &x, *py = &y, *pres = &res;
    *px = 10;
    *py = 20;
    *pres = *px + *py;
    printf("O resultado da soma de x + y = %hhu. O endereço de res é [%p]\n", *pres, pres);
    return 0;
}