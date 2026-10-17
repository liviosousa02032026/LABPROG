#include<stdio.h>

int main(){
	long int x;
	unsigned char y;
	
	printf("Entre com o numero: ");
	if(scanf("%ld", &x) != 1){
		fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
		return 1;
	}
	
	y = x & 1; // substitui o x%2 por causa dos numeros negativos
	while(y){
		printf("O numero %ld eh impar.\n", x);
		return 0;
	}
	printf("O numero %ld eh par.\n", x);
	return 0;
}
