#include<stdio.h>

int main(void){
	float tempC, f;
	
	printf("\nDigite um a tempratura em graus Celcius: ");
		scanf("%f", &tempC);
		
	f = (9 * tempC + 160)/5;
		
	printf("\nA conversao em Fahrenheit e: %.1f", f);
	
}
