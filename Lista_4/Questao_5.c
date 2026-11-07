#include<stdio.h>
#include<string.h>

#define TAM 40

int main(){
    char str1[TAM], str2[TAM], conc[2 * TAM + 1];

    printf("Entre com a string 1: ");
    fgets(str1, TAM, stdin);

    size_t pos1 = strcspn(str1, "\n");
    if(str1[pos1] == '\n'){
        str1[pos1] = '\0';
    }else{
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF) { }
    }
    printf("A string 1 digitada foi %s. \n", str1);

    printf("Entre com a string 2: ");
    fgets(str2, TAM, stdin);

    size_t pos2 = strcspn(str2, "\n");
    if(str2[pos2] == '\n'){
        str2[pos2] = '\0';
    }else{
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF) { }
    }
    printf("A string 2 digitada foi %s. \n", str2);
    
    unsigned char i;
    for(i = 0; str1[i] != '\0'; ++i){
        conc[i] = str1[i];
    }
    
    for(unsigned char k = 0; str2[k] != '\0'; ++k){
        conc[i] = ' ';
        conc[k + i + 1] = str2[k];
    }
    printf("%s\n", conc);
    return 0;
}