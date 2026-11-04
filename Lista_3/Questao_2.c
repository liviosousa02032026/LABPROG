#include<stdio.h>
//quantidade de centroides que serão comparados com X 
#define CENTROIDE 2
int main(){
    float ax, ax1, px, px1, vx, vx1, ac, pc, vc, cheby, cheby1 = 0, maior = 0, aux;
    unsigned char flag;

    printf("Entre com a área de X: ");
    scanf("%f", &ax);
    printf("Entre com o perímetro de X: ");
    scanf("%f", &px);
    printf("Entre com número de vértices de X: ");
    scanf("%f", &vx);

    for(unsigned char i = 1; i <= CENTROIDE; ++i){
        printf("Entre com a área do centroide %hhu: ", i);
        scanf("%f", &ac);
        printf("Entre com o perímetro do centroide %hhu: ", i);
        scanf("%f", &pc);
        printf("Entre com o número de vértices do centroide %hhu: ", i);
        scanf("%f", &vc);
        
        ax1 = ax;
        if(ac < ax1){
            aux = ac;
            ac = ax1;
            ax1 = aux;
        }

        cheby = ac - ax1;
        if(cheby > maior){
            maior = cheby;
        }
        
        px1 = px;
        if(pc < px1){
            aux = pc;
            pc = px1;
            px1 = aux;
        }
        
        cheby = pc - px1;
        if(cheby > maior){
            maior = cheby;
        }

        vx1 = vx;
        if(vc < vx1){
            aux = vc;
            vc = vx1;
            vx1 = aux;
        }
        
        cheby = vc - vx1;
        if(cheby > maior){
            maior = cheby;
        }

        if(maior > cheby1){
            cheby1 = maior;
            flag = 1;
        }else if(maior == cheby1){
            flag = 2;
        }else{
            flag = 3;
        }
    printf("A distância de Chebyshev entre o centroide %hhu e X = %f\n", i, maior);
    maior = 0;
    }
    
    if(flag == 1){
        printf("A classe de X é C1.\n");
    }else if(flag == 2){
        printf("As classes estão empatadas.\n");
    }else{
        printf("A classe de X é C2.\n");
    }
    
    
    
    return 0;
}