#include<stdio.h>

int main(){
    unsigned char base = 3;
    unsigned int res = 1;

    for(unsigned char i = 0; i < 8; ++i){
        if(i == 0){
            printf("[ %u", res);
        }else{
            res *= base;
            printf(", %u", res);
        }
    }
    printf(" ]\n");

    return 0;
}