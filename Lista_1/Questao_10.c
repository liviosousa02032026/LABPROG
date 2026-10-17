#include<stdio.h>

int main(){
	float cotacao, valor_em_reais;
	puts("Entre com a cotaçao do dolar do dia e o valor em reais que sera convertido:");
	if(scanf("%f %f", &cotacao, &valor_em_reais) != 2){
		fprintf(stderr, "Entrada invalida. O programa sera encerrado.");
		return 1;
		}
	if(cotacao == 0){
		fprintf(stderr, "O valor da cotaçao nao pode ser zero. O programa sera encerrado.");
		return 1;
	}
	printf("A cotaçao do dolar do dia = R$%.2f. Logo, o valor de R$%.2f convertido em dolares = %.2f\n", cotacao, valor_em_reais, valor_em_reais/cotacao);
	return 0;
}
