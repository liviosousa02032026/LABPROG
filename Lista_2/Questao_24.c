#include<stdio.h>
int main(){
    unsigned int hip, cat1, cat2, cont = 0;
    for(cat1 = 1; cat1 <= 500; ++cat1){
        for(cat2 = cat1; cat2 <= 500; ++cat2){
            for(hip = 1; hip <= 500; ++hip){
                if((hip * hip) == (cat1 * cat1) + (cat2 * cat2)){
                    printf("A tripla cateto 1 = %u, cateto 2 = %u e hip = %u é uma tripla de Pitágoras.\n", cat1, cat2, hip);
                    ++cont;
                }
            }
        }
    }
    printf("Para a condição imposta pela questão, há %u triplas de Pitágoras.\n", cont);
    return 0;
}