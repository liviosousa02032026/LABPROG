#include <stdio.h>

int main(){
	
	//RETANGULO
	for(unsigned char i = 0; i < 9; ++i){
		if(i == 0 || i == 8){
			for(unsigned char k = 0; k < 8; ++k){
				printf("*");
			}
		}else{
				for(unsigned char k = 0; k < 8; ++k){
					if(k == 0 || k == 7){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
			}
		printf("\n");
		}
		
		//ZERO
		for(unsigned char i = 0; i < 9; i++){
			if(i == 0 || i == 8){
				for(unsigned char k = 0; k <7; k++){
					if(k == 2 || k == 3 || k == 4){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}else if(i ==1 || i == 7){
				for(unsigned char k = 0; k < 7; k++){
					if(k == 1 || k == 5){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}else{
				for(unsigned char k = 0; k < 7; k++){
					if(k == 0 || k == 6){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		
		//SETA
		for(unsigned char i = 0; i < 9; i++){
			if(i == 1){
				for(unsigned char k = 0; k < 5; k++){
					if(k == 1 || k == 2 || k == 3){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}else if( i == 2){
				for(unsigned char k = 0; k < 5; k++){
					printf("*");
				}
			}else{
				for(unsigned char k = 0; k < 5; k++){
					if(k == 2){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		
		//LOSANGO
		for(unsigned char i = 0; i < 9; i++){
			if(i == 0 || i == 8){
				for(unsigned char k = 0; k < 9; k++){
					if(k == 4){
						printf("*");
					}else{
						printf(" ");
					}
				}
			}else if(i == 1 || i == 7){
					for(unsigned char k = 0; k < 9; k++){
						if(k == 3 || k == 5){
							printf("*");
						}else{
							printf(" ");
						}
					}
				}
				else if(i == 2 || i == 6){
					for(unsigned char k = 0; k < 9; k++){
						if(k == 2 || k == 6){
							printf("*");
						}else{
							printf(" ");
						}
					}
				}else if(i == 3 || i == 5){
					for(unsigned char k = 0; k < 9; k++){
						if(k == 1 || k == 7){
							printf("*");
						}else{
							printf(" ");
						}
					}
				}else{
					for(unsigned char k = 0; k < 9; k++){
						if(k == 0 || k == 8){
							printf("*");
						}else{
							printf(" ");
						}
					}
				}
				printf("\n");
			}
	return 0;
}
