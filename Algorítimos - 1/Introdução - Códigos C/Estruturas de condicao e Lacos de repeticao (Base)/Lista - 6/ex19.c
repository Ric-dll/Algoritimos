#include<stdio.h>

int main(void){
	int a, b,y=0;
	
	printf("\nDigite dois valores de 0-1000 para A e B: ");
	 scanf("%i %i", &a, &b);
	
	if(a>=0 && a<=1000 && b>=0 && b<=1000){
		for(int i=100; i<=1000; i++){
			if((i%a==0 || i%b==0) && !(i%a==0 && i%b==0)){
				y+=i;
			}
		}
	}else{
		printf("\nOs valores não correspondem aos requisitos...");
	}
	printf("\nA soma dos { 100 < |N < 1000 } multiplos de %i ou %i e não ambos é de: %i", a,b,y);
}
