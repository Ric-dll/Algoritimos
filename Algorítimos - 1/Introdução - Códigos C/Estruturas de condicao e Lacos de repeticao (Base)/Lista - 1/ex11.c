#include<stdio.h>

int main(void){
	int a,b;
	
	printf("\nDigite um valor: ");
		scanf("%i", &a);
	printf("\nDigite outro valor: ");
		scanf("%i", &b);
		
	printf("\n\n\n- Antes -");
	printf("\n\nA: %i", a); printf("\tB: %i", b); 
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n\n\n\n- Depois -");
	printf("\n\nA: %i", a); printf("\tB: %i", b); 
}
