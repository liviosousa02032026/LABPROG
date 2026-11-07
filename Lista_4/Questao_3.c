#include<stdio.h>
#include<string.h>

#define TAM 10

int main(){
    //declaração das variáveis
    char str[TAM], carac;
    int cont = 0;

    //inserção da string
    printf("Digite a string de %d caracteres: ", TAM);
    fgets(str, TAM, stdin);
    
    //validação da string substituindo o \n e limpando o buffer
    size_t pos = strcspn(str, "\n");
    if(str[pos] == '\n'){
        str[pos] = '\0';
    }else{
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF) { }
    
    }
    
    unsigned int count = 0;
    while(str[count] != '\0') count++;
    printf("count = %d\n", count);
    
    printf("A string digitada foi %s\n", str);
    
    printf("Entre com o caracter: ");
    scanf(" %c", &carac);
    for(unsigned char i = 0; str[i] != '\0'; ++i){
        if(str[i] == carac){
            ++cont;
        }
    }

    printf("A string de entrada contem %d caracteres do caracter %c fornecido.\n", cont, carac);
    


    return 0;
}