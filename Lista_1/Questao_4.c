#include<stdio.h>
#include<stdlib.h>

int main(){
	float x;
	puts("Entre com o valor da conta de restaurante:");
	scanf("%f", &x);
	x = x + x * 0.1;
	printf("O valor da conta de restaurante, com a comissao do garçom, = %.2f\n", x);
	return 0;
}
