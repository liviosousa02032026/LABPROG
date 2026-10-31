#include<stdio.h>

int main(){
    unsigned char celsius, fahrenheit;
    for(celsius = 10; celsius <= 100; celsius += 10){
        fahrenheit = 1.8 * celsius + 32;
        printf("%hhuºC equivalem a %hhuºF.\n", celsius, fahrenheit);
    }

    return 0;
}