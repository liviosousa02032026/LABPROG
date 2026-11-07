#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LIN 3
#define COL 3
#define AMP 10
#define BASE -10

int main(){
    int matriz[LIN][COL];

    //popular matriz
    srand(time(NULL));
    for(unsigned char i = 0; i < LIN; ++i){
        for(unsigned char k = 0; k < COL; ++k){
            matriz[i][k] = rand() % AMP + BASE;
        }
    }

    //exibir matriz
    for(unsigned char i = 0; i < LIN; ++i){
        for(unsigned char k = 0; k < COL; ++k){
            printf("%d ", matriz[i][k]);
        }
        printf("\n");
    }

    //verificar quantas vezes um número aparece na matriz
    int x;
    printf("Entre com o número que se deseja saber quantas vezes aparece na matriz: ");
    scanf("%d", &x);
    int cont = 0;
    for(unsigned char i = 0; i < LIN; ++i){
        for(unsigned char k = 0; k < COL; ++k){
            if(matriz[i][k] == x){
                ++cont;
            }
        } 
    }
    printf("O número %d aparece %d na matriz.\n", x, cont);

    return 0;
}