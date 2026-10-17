#include<stdio.h>
#define PI 3.14159f

int main(){
	float raio;
	printf("Entre com o raio da circunferencia:\n");
	if(scanf("%f", &raio) != 1 || raio < 0.0f){
		fprintf(stderr, "Entrada invalida. O programa sera encerrado.\n");
		return 1;
	}
	printf("Diametro = %.2f\nCircunferencia = %.2f\nArea = %f\n", 2.0f * raio, 2.0f * PI * raio, PI * raio * raio);
	return 0;
}
