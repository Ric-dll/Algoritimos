#include<stdio.h>

int main(void){

	int qtde; 
	float x, soma=0;
	
	printf("\nQuantos valores serão lidos: ");
	scanf("%i", &qtde);
	
	for(int i=1; i<=qtde; i++){
		printf("\nDigite um valor: ");
		scanf("%f", &x);
		soma+=x;
	}printf("\nSoma de todos : %.2f ", soma);
}

