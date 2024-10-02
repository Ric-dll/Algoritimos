#include<stdio.h>
#include<stdlib.h>

int main(void){

	float y, z, ver;
	 printf("\nDigite um valor: ");
	  scanf("%f", &y);
	
	float menor = y, maior = y, soma = y;
	
	if(y<0){	
		printf("\nN/A");
	}else{
		ver = y;
		while(ver>=0){
			printf("\nDigite um valor: ");
			 scanf("%f", &z);
			 
			if(z<menor && z>=0){menor = z;}
			 if(z>maior && z>=0){maior = z;}
			  soma+=z;
			   ver=z;
		}
			printf("\nO Menor e: %.1f", menor);
			 printf("\nO Maior e: %.1f", maior);
			  printf("\nA Soma e: %.1f", soma+y);
	}
}
