#include<stdio.h>
int main(){
    int n, soma = 0;
    unsigned char x, q, x_rec, e;
    float e_medio;

    printf("Entre com a quantidade de amostras do sinal que serão quantizadas: ");
    if(scanf("%d", &n) != 1 || n <= 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }

    for(int i =1; i <= n; ++i){
        
        printf("Entre com a amostra %d do sinal: ", i);
        if(scanf("%hhu", &x) != 1){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
        }
        
        q = x >> 4;
        x_rec = q << 4;
        e = x - x_rec;
        soma += e;

        printf("Valor original de X: %hhu\n", x);
        printf("Valor de X quantizado: %hhu\n", q);
        printf("Valor reconstruido de X: %hhu\n", x_rec);
        printf("Erro de quantização: %hhu\n", e);
    }
    e_medio = (float)soma / n;
    printf("Erro médio: %.2f\n", e_medio);


    return 0;
}