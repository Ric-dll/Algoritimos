#include<stdio.h>

int main(void){
	int a,b,c;
	printf("\nDigite um valor: ");
		scanf("%i", &a);
	printf("\nDigite outro valor: ");
		scanf("%i", &b);
	c=a%b;
	printf("\O resto de A por B: %i",c);
}
