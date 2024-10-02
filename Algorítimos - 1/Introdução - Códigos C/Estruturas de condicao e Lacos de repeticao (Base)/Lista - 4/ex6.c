#include<stdio.h>

int main(void){
	int i,a,b,c;
	
	printf("\nDigite um valor para i: ");
		scanf("%i", &i);
	printf("\nDigite um valor para A: ");
		scanf("%i", &a);
	printf("\nDigite um valor para B: ");
		scanf("%i", &b);
	printf("\nDigite um valor para C: ");
		scanf("%i", &c);
	
	if(i %2 == 1){
		printf("\nA media ponderada de tais valores e: %i", ((a*2+b*3+c*4)/(2+3+4)));
	}else{
		printf("\nA media aritimetica de tais valores e: %i", (a+b+c)/3);
	}
}
