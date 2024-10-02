#include<stdio.h>

int main(void){
	int x, z, y=0;
	
	printf("\nDigite um valor: ");
	  scanf("%f", &x);
	  
	for(int i=100; i<=1000; i++){
		if(i%3==0 && i%5==0){
			y+=i;
		}
	}printf("\nA soma dos { 100 < |N < 1000 } multiplos de 3 e 5 é de: %i", y);
}
