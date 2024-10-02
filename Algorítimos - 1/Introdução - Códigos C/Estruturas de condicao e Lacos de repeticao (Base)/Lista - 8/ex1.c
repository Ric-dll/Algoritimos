#include<stdio.h>

int main(void){

	int val[6], i, j;

	for(i=1; i<=6; i++){
		printf("\nDigite um valor: ");
		 scanf("%i", &val[i]);
	}
	for(j=6; j>=0; j--){
		printf("\nOrdem : [%i]", val[j]);
	}

}

