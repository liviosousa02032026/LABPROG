#include<stdio.h>

int main(){
    int palin, ind0, ind1, ind2, ind3, ind4;
    
    printf("Entre com o número de 5 dígitos que se deseja saber se é um palíndromo: ");
    if(scanf("%d", &palin) != 1 || palin < 10000 || palin > 99999){
        fprintf(stderr,"Entrada inválida. O programa será encerrado.");
        return 1;
    }

    ind0 = (palin/10000) % 10;
    ind1 = (palin / 1000) % 10;
    ind2 = (palin / 100) % 10;
    ind3 = (palin / 10) % 10;
    ind4 = palin % 10;

    if(ind0 == ind4 && ind1 == ind3){
        printf("O número %d é um palíndromo.\n", palin);
    }else{
        printf("O número %d não é um palíndromo.\n", palin);
    }
    return 0;
}