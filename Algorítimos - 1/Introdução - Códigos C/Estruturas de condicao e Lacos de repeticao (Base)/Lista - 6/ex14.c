#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(0));
	int x = rand()%20;
	
	int y, z, p=0, cont=0;
	 printf("\nDigite um valor inteiro: ");
	  scanf("%i", &y);
	  
	if(y%2==0){p=y;}
	
	int menor = y, maior = y, soma = y; cont++;   
	   
	for(int i=0; i<x; i++){
		printf("\nDigite um valor inteiro: ");
		 scanf("%i", &z);
		if(z%2==0){p+=z;}
		 if(z<menor){menor = z;}
		  if(z>maior){maior = z;}
		   soma+=z;
		    cont++;
	}	
		printf("\nA Soma total dos números digitados foi de: %i", soma);
		 printf("\nA Quantidade de números digitados foi de: %i", cont);
		  printf("\nA Média em relação aos números é: %i", soma/cont);
		   printf("\nO Menor dentre todos os números é: %i", menor);
		    printf("\nO Maior dentre todos os números é: %i", maior);
		     printf("\nA Média em relação aos números pares é: %i", p/cont);
}

