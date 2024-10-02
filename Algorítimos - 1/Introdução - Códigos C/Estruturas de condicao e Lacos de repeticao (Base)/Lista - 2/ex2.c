#include<stdio.h>

int main(void){
	float k;
	printf("\nDigite a velocidade em km/h: ");
	 scanf("%f", &k);
	printf("\nEm metros ficaria: %.2f", k/(3.6)); printf(" m/s");
}

