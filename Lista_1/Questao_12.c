#include<stdio.h>

int main(){
	float a, b, aux;
	puts("Entre com os valores de A e B:");
	if(scanf("%f %f", &a, &b) != 2){
		fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
		return 1;
	}
	printf("Os valores de A e B, antes da troca, sao %.2f e %.2f, respectivamente\n", a, b);
	aux = a;
	a = b;
	b = aux;
	printf("Os valores de A e B, apos a troca, sao %.2f e %.2f, respectivamente\n", a, b);
	return 0;
}
