#include<stdio.h>

int main(void){
 
	float v, d, desc = 0, tot = 0;
	
	printf("\nDigite o valor da compra: ");
	scanf("%f", &v);
	printf("\nDigite o valor do desconto: ");
	scanf("%f", &d);
	
	
	desc = d/100;
	tot = v*desc;
	
	if((v-=tot) > 100){
        printf("\nO desconto foi concedido, valor a pagar: R$%.2f", v-=tot);
    }
    else{
        printf("\nO desconto não foi concedido, valor a pagar: R$%.2f", v);
        }
}
