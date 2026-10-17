#include<stdio.h>
int main(){
    
    //declaração das variáveis e ponteiros
    unsigned char x, y, aux;
    unsigned char *px = &x, *py = &y, *paux = &aux;
    
    //inicialização das variáveis através de ponteiros
    *px = 10;
    *py = 20;

    //interação com usuário para exibir os valores originais
    puts("Aperte ENTER para exibir os valores originais de x e y antes da troca usando ponteiros. Verifique o endereço de cada variável.");
    getchar();
    printf("O valor de x antes da troca era %hhu, guardado no endereço de memória [%p]\nO valor de y antes da troca era %hhu, guardado no endereço de memória [%p]\n\n", *px, px, *py, py);

    //processamento
    *paux = *px;
    *px = *py;
    *py = *paux;

    //exibir os valores trocados
    puts("Aperte ENTER para exibir os valores trocados de x e y usando ponteiros. Verifique se o endereço da variável permaneceu o mesmo.");
    getchar();
    printf("O valor de x após a troca ficou %hhu, guardado no endereço de memória [%p]\nO valor de y após a troca ficou %hhu, guardado no endereço de memória [%p]\n", *px, px, *py, py);
    return 0;
}