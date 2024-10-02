#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	float y, z;
	 printf("\nDigite um valor: ");
	  scanf("%f", &y);
	
	float soma = y;
	   
	for(i=1; i<10; i++){
		printf("\nDigite um valor: ");
		 scanf("%f", &z);
		  soma+=z;
	}
		  printf("\nA Soma e: %.1f", soma);

}

