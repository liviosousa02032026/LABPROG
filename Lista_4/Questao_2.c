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
    
    //contagem de caracteres da string
    unsigned int count = 0;
    while(str[count] != '\0') count++;
    printf("count = %d\n", count);
    
    //visualização do que foi registrado na string(um caracter a menor devido ao \0)
    printf("A string digitada foi %s\n", str);
    
    //entrada do caracter
    printf("Entre com o caracter: ");
    scanf(" %c", &carac);

    //verificação se o caracter está na string ou não
    unsigned char flag = 0;
    for(unsigned char i = 0; str[i] != '\0'; ++i){
        if(str[i] == carac){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("O caracter %c fornecido não está na string %s fornecida.\n", carac, str);
    }else if(flag == 1){
        printf("O caracter %c fornecido está na string %s fornecida.\n", carac, str);
    }
    
    return 0;
}