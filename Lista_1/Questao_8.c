#include<stdio.h>

int main(){
	int x;
	puts("Entre com o valor de x:");
	scanf("%d", &x);
	printf("O antecessor de %d = %d e o seu sucessor = %d.\n", x, x - 1, x + 1);//não dá certo fazer com incremento ++x e decremento --x porque nesses comando o valor de x muda
	return 0;
}
