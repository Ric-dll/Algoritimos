#include<stdio.h>

int main(void){
 
	int a,b,c;
	
	printf("\nDigite tres valores: ");
		scanf("%i %i %i", &a, &b, &c);
	
	if((a <= b) && (b <= c)){
		printf("\nA Ordem crescente e: %i %i %i", a, b, c);
	}else if((a <= c) && (c <= b)){
		printf("\nA Ordem crescente e: %i %i %i", a, c, b);
	}else if((b <= a) && (a <= c)){
		printf("\nA Ordem crescente e: %i %i %i", b, a, c);
	}else if((b <= c) && (c <= a)){
		printf("\nA Ordem crescente e: %i %i %i", b, c, a);
	}else if((c <= b) && (b <= a)){
		printf("\nA Ordem crescente e: %i %i %i", c, b, a);
	}else if((c <= a) && (a <= b)){
		printf("\nA Ordem crescente e: %i %i %i", c, a, b);
	}
	
}

