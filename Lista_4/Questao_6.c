#include<stdio.h>
#include<string.h>

#define TAM 10

int main(){
    unsigned char str[TAM];

    printf("Entre com a string que se deseja inverter suas letras: ");
    fgets(str, TAM, stdin);

    size_t pos = strcspn(str, "\n");
    if(str[pos] == '\n'){
        str[pos] = '\0';
    }else{
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF) { }
    }
    unsigned char aux;
    unsigned char str1[TAM];
    for(unsigned char i = 0; str[i] != '\0'; ++i){
        aux = str[i];
        str1[i] = str[pos - 1 - i];
        str1[pos - 1 - i] = aux;
    }
    printf("%s\n", str1);
    return 0;
}