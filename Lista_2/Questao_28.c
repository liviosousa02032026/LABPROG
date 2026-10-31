#include<stdio.h>
int main(){
    unsigned char x, bx, y, mask1, mask2;
    unsigned char vetor[8];

    printf("Entre com o valor de X entre 0 e 255: ");
    if(scanf("%hhu", &x) != 1 || x < 0 || x > 255){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    printf("Entre com o valor de Y entre 5 e 251: ");
    if(scanf("%hhu", &y) != 1 || y < 5 || y > 251){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    
    for(unsigned char i = 0; i <= 3; ++i){
        bx = x >> i;
        mask1 = bx & 1;
        mask2 = (y - (i + 1)) & ~1;
        vetor[i] = mask1 | mask2;
    }

    for(unsigned char i = 4; i <= 7; ++i){
        bx = x >> i;
        mask1 = bx & 1;
        mask2 = (y + (i - 3)) & ~1;
        vetor[i] = mask1 | mask2;
    }
    for(unsigned char i = 0; i < 8; ++i){
        printf("vetor[%hhu] = %b\n", i, vetor[i]);
    }
    return 0;
}