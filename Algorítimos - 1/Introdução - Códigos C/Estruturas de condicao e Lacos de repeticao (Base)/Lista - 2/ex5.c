#include<stdio.h>

int main(void){
	float valor, desconto;
	printf("\nDigite a o valor do produto: ");
	 scanf("%f", &valor);
	desconto = valor*(0.16);
	printf("\nO valor com desconto e de: %.2f", valor-desconto);
}



