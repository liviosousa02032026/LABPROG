#include<stdio.h>
int main(){
    unsigned int prestaçao;
    float entrada, preço;
    printf("Entre com o preço da mercadoria: ");
    if(scanf("%f", &preço) != 1 || preço < 0){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.");
        return 1;
    }
    prestaçao = preço / 3;
    entrada = preço - 2 * prestaçao;
    printf("A entrada da mercadoria custará R$%.2f e a parcela R$%u\n", entrada, prestaçao);
    return 0;
}