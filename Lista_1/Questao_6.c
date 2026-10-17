#include<stdio.h>
int main(){
	unsigned int total_segundos, horas, minutos, segundos;
	do{
		puts("Entre com as horas, minutos(<60) e segundos(<60):");
		scanf("%u %u %u", &horas, &minutos, &segundos);
	}while(minutos > 59 || segundos > 59);
	total_segundos = horas * 3600U + minutos * 60U + segundos;
	printf("O total de segundos = %u\n", total_segundos);
	return 0;
}
