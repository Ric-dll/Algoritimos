#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(0));
	int x = rand()%20;
	
	float y, z, cont=0;
	 printf("\nDigite um valor: ");
	  scanf("%f", &y);
	
	float menor = y, maior = y, soma = y; cont++;
	   
	for(int i=0; i<x; i++){
		printf("\nDigite um valor: ");
		 scanf("%f", &z);
		 
		if(z<menor){menor = z;}
		 if(z>maior){maior = z;}
		  soma+=z;
		   cont++;
	}
		printf("\nO Menor e: %.1f", menor);
		 printf("\nO Maior e: %.1f", maior);
		  printf("\nA Soma e: %.1f", soma);
		   printf("\nA Média e: %.1f", soma/cont);
}

