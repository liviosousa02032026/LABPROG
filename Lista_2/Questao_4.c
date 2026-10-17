#include<stdio.h>
int main(){
    unsigned char pedro, jose, anos, i = 1;
    puts("Resolva o seguinte problema: José tem 150cm e cresce 2cm por ano. Pedro tem 110cm e cresce 3cm por ano. Em quantos anos Pedro será maior que José?\n\nAperte ENTER para descobrir!!");
    getchar();
    do{
        pedro = 150 + 2 * i;
        jose = 110 + 3 *i;
        ++i;
    }while(pedro > jose);
    printf("Pedro passou de José após %d anos.\n", i);
    return 0;
}