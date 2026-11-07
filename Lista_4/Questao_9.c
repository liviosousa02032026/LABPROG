#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LIN 3
#define COL 3
#define AMP 10
#define BASE -10

int main(){
    int matriz[LIN][COL];

    srand(time(NULL));
    for(unsigned char i = 0; i < LIN; ++i){
        for(unsigned char k = 0; k < COL; ++k){
            matriz[i][k] = rand() % AMP + BASE;
        }
    }

    for(unsigned char i = 0; i < LIN; ++i){
        for(unsigned char k = 0; k < COL; ++k){
            printf("%d ", matriz[i][k]);
        }
        printf("\n");
    }

    return 0;
}