#include<stdio.h>

int main(void){
	float a,b, media;
	
	printf("\nDigite um valor: ");
		scanf("%f", &a);
	printf("\nDigite outro valor: ");
		scanf("%f", &b);
		
	media = (a+b)/2;
	
	printf("\nA media e: %f", media);
	
}
