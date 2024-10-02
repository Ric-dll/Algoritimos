#include<stdio.h>

int main(void){
	int a,b,c,d,e,f;
	
	printf("\nDigite um valor: ");
		scanf("%d", &a);
	printf("\nDigite outro valor: ");
		scanf("%d", &b);
		c =(a*b)-(a*2);
	/*
	d = a;
	c = (a*b);
	e = (d*2);
	f = c-e;
	printf("\nValor de c: %i", f);
	*/
	 
	printf("\nValor de c: %i", c);	
}
