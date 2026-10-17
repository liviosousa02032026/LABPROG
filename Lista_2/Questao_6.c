#include<stdio.h>
int main(){
    int x, y;
    unsigned long long int paulo = 0, renata = 0, branco = 0, nulo = 0;
    while(1){
        
        printf("Digite 5 para votar em Paulo, 7 para votar em Renata, 0 para votar em branco ou um número negativo para finalizar a urna: ");
        scanf("%d", &x);
        
        if(x < 0){
            printf("A urna será encerrada.");
            break;
        }
        
        switch(x){
            case 5:
            printf("Digite 1 para confirmar o voto em Paulo ou qualquer tecla para retornar: ");
            scanf("%d", &y);
            if(y == 1){
                paulo += 1;
            }            
            break;
            
            case 7:
            printf("Digite 1 para confirmar o voto em Renata ou qualquer tecla para retornar: ");
            scanf("%d", &y);
            if(y == 1){
                renata += 1;
            }         
            break;
            
            case 0:
            printf("Digite 1 para confirmar o voto em branco ou qualquer tecla para retornar: ");
            scanf("%d", &y);
            if(y == 1){
                branco += 1;
            }         
            break;
            
            default:
            nulo += 1;
            break;
        }
    }
    if(paulo > renata){
        printf("Paulo venceu a eleição.\n");
    }else if(paulo == renata){
        printf("Paulo e Renata empataram.\n");
    }else{
        printf("Renata venceu a eleição.\n");
    }
    printf("Paulo teve %.2f%% dos votos. Renata teve %.2f%% dos votos. %.2f%% dos votos foram em branco. %.2f%% dos votos foram nulos.\n", (double)paulo * 100.0 / (paulo + renata + branco + nulo), (double)renata * 100.0 / (paulo + renata + branco + nulo), (double)branco * 100.0 / (paulo + renata + branco + nulo), (double)nulo * 100.0 / (paulo + renata + branco + nulo));

    return 0;
}