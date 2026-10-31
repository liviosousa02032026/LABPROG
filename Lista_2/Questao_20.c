#include<stdio.h>
int main(){
    
    int fat;
    for(unsigned char i = 1; i <= 10; i += 2){
        if(i == 1){
            fat = 1;
        }else{
            for(unsigned char k = 2; k <= i; ++k){
                fat *= k;
            }
        }
        printf("Fatorial de %hhu = %d\n", i, fat);
        fat = 1;
    }
    return 0;
}