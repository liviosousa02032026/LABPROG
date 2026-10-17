#include<stdio.h>
int main(){
    for(unsigned char i = 16; i < 91; i += 4){
        if(i == 16){
            printf("%d", i * i);
        }else{
            printf(", %d", i * i);
        }
    }
printf(".\n");
    return 0;
}