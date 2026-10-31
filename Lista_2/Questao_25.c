#include<stdio.h>
int main(){
    double pi = 0;
    unsigned int termos;
    signed char sinal = 1;
    printf("Em até quantos termos você quer ver o cálculo de pi: ");
    if(scanf("%u", &termos) != 1 || termos < 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }
    for(unsigned int i = 1; i <= termos; ++i){
            pi = pi + (double)4 / (2 * i - 1) * sinal;
            sinal *= -1;
        }
    printf("O valor de pi quando a soma é de %u termos é %lf.\n", termos, pi);
    
    return 0;
}