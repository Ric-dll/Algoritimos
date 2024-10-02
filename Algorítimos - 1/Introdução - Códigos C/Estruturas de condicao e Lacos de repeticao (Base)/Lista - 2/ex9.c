#include<stdio.h>

int main(void){
	float val, desc;
	
	printf("\nDigite um valor total em R$: "); //referência: valTot de produto
	 scanf("%f", &val);
	 
	desc = val*0.10;
	
	printf("\n\nO Total a pagar com desconto de 10 por cento e de: R$%.2f", val-desc);
	printf("\n\nEm 3x sem juros o valor e de: R$%.2f", (val-desc)/3);
	printf("\n\nCaso parcelada em 3x a comissao de venda e de: R$%.2f", val*0.05);
}


