#include<stdio.h>

int main(void){

	int x;
	printf("\nDigite valor inteiro: ");
	scanf("%i", &x);
	
	while(x<0){
		printf("\nDigite valor inteiro: ");
			scanf("%i", &x);
	}
	printf("\nEntrando...");
}
