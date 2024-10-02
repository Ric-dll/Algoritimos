#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i=1;
	float y, z;
	 printf("\nDigite um valor: ");
	  scanf("%f", &y);
	
	float soma = y;
	   
	while(i<10){
		printf("\nDigite um valor: ");
		 scanf("%f", &z);
		  soma+=z;
		  i++;
	}
		  printf("\nA Soma e: %.1f", soma);

}

