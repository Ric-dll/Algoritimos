#include<stdio.h>

int main(void){
	int a,b,c, soma;
	
	printf("\nDigite um valor: ");
		scanf("%i", &a);
	printf("\nDigite outro valor: ");
		scanf("%i", &b);
	printf("\nDigite mais um valor: ");
		scanf("%i", &c);
		
	soma = a+b+c;
	
	printf("\nA soma e: %i", soma);
	
}
