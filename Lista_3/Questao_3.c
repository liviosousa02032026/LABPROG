#include<stdio.h>
#include<math.h>

int main(){
    
    //entradas dos dois centróides
    float ac1, pc1, vc1, ac2, pc2, vc2;
    printf("Entre com a área, perímetro e número de vértices do centróide 1: ");
    if(scanf("%f %f %f", &ac1, &pc1, &vc1) != 3){
        fprintf(stderr, "Entrada inválida.O programa será encerrado.\n");
        return 1;
    }
    printf("Entre com a área, perímetro e número de vértices do centróide 2: ");
    if(scanf("%f %f %f", &ac2, &pc2, &vc2) != 3){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }

    //entrada da quantidade de objetos
    unsigned char n;
    printf("Entre com a quantidade de objetos que farão parte do experimento: ");
    if(scanf("%hhu", &n) != 1 || n < 1 || n > 255){
        fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
        return 1;
    }

    //laço principal
    unsigned char classe_correta;
    float ax, px, vx;
    unsigned char cont_cheby = 0, cont_man = 0, cont_euc = 0;

    for(unsigned char i = 1; i <= n; ++i){
        
        //entrada da classe correta de cada objeto
        printf("Qual a classe correta do objeto %hhu? Digite 1 ou 2.", i);
        if(scanf("%hhu", &classe_correta) != 1 || (classe_correta != 1 && classe_correta != 2)){
            fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
            return 1;
        }

        //entrada dos dados de cada objeto
        printf("Entre com a área, perímetro e número de vértices do objeto %hhu: ", i);
        if(scanf("%f %f %f", &ax, &px, &vx) != 3){
            fprintf(stderr, "Entrada inválida. O programa será encerrado.\n");
            return 1;
        }

        //distância de Chebyshev entre cada objeto e C1
        float cheby_1, cheby_2, cheby_3, cheby_c1;
        cheby_1 = ac1 - ax;
        if(cheby_1 < 0){
            cheby_1 = -cheby_1;
        }
        cheby_2 = pc1 - px;
        if(cheby_2 < 0){
            cheby_2 = -cheby_2;
        }
        cheby_3 = vc1 - vx;
        if(cheby_3 < 0){
            cheby_3 = -cheby_3;
        }
        
        cheby_c1 = cheby_1;
        if(cheby_2 > cheby_c1) {
            cheby_c1 = cheby_2;
        }
        if(cheby_3 > cheby_c1) {
            cheby_c1 = cheby_3;
        }

        //distância de Manhattan entre cada objeto e C1
        float man_c1;
        man_c1 = cheby_1 + cheby_2 + cheby_3;

        //distância Euclidiana entre cada objeto e C1
        float euc_c1;
        euc_c1 = sqrtf(cheby_1 * cheby_1 + cheby_2 * cheby_2 + cheby_3 * cheby_3);
        

        //distância de Chebyshev entre cada objeto e C2
        float cheby_c2;
        cheby_1 = ac2 - ax;
        if(cheby_1 < 0){
            cheby_1 = -cheby_1;
        }
        cheby_2 = pc2 - px;
        if(cheby_2 < 0){
            cheby_2 = -cheby_2;
        }
        cheby_3 = vc2 - vx;
        if(cheby_3 < 0){
            cheby_3 = -cheby_3;
        }
        
        cheby_c2 = cheby_1;
        if(cheby_2 > cheby_c2){
            cheby_c2 = cheby_2;
        }
        if(cheby_3 > cheby_c2){
            cheby_c2 = cheby_3;
        }

        //distância de Manhattan entre cada objeto e C2
        float man_c2;
        man_c2 = cheby_1 + cheby_2 + cheby_3;

        //distância Euclidiana entre cada objeto e C1
        float euc_c2;
        euc_c2 = sqrtf(cheby_1 * cheby_1 + cheby_2 * cheby_2 + cheby_3 * cheby_3);

        //estabelecimento da classe do objeto pelo critério de Chebyshev
        unsigned char classe_cheby = 0;
        if(cheby_c1 < cheby_c2){
            classe_cheby = 1;
        }else if(cheby_c1 > cheby_c2){
            classe_cheby = 2;
        }

        //estabelecimento da classe do objeto pelo critério de Manhattan
        unsigned char classe_man = 0;
        if(man_c1 < man_c2){
            classe_man = 1;
        }else if(man_c1 > man_c2){
            classe_man = 2;
        }

        //estabelecimento da classe do objeto pelo critério Euclidiano
        unsigned char classe_euc = 0;
        if(euc_c1 < euc_c2){
            classe_euc = 1;
        }else if(euc_c1 > euc_c2){
            classe_euc = 2;
        }
            
        //verificação de acerto Chebyshev
        if(classe_correta == classe_cheby){
            ++cont_cheby;
        }
        
        //verificação de acerto Manhattan
        if(classe_correta == classe_man){
            ++cont_man;
        }
        
        //verificação de acerto Euclidiano
        if(classe_correta == classe_euc){
            ++cont_euc;
        }
    }
    
    float acuracia_cheby, acuracia_man, acuracia_euc;
    acuracia_cheby = ((float)cont_cheby / n) * 100;
    acuracia_man = ((float)cont_man / n) * 100;
    acuracia_euc = ((float)cont_euc / n) * 100;
    printf("Acurácia do método de Chebyshev = %.2f%%\n", acuracia_cheby);
    printf("Acurácia do método de Manhattan = %.2f%%\n", acuracia_man);
    printf("Acurácia do método Euclidiano = %.2f%%\n", acuracia_euc);

    if(acuracia_cheby > acuracia_man && acuracia_cheby > acuracia_euc){
        printf("O método mais eficiente foi o método de Chebyshev.\n");
    }else if(acuracia_man > acuracia_cheby && acuracia_man > acuracia_euc){
        printf("O método mais eficiente foi o método de Manhattan.\n");
    }else if(acuracia_euc > acuracia_cheby && acuracia_euc > acuracia_man){
        printf("O método mais eficiente foi o método Euclidiano.\n");
    }else{
        printf("Os métodos empataram quanto às suas acurácias");
    }



    return 0;
}