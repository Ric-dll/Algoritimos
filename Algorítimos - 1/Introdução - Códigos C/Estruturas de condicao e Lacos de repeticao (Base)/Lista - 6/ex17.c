#include<stdio.h>

int main(void){
	int x, y=0;
	
	for(int i=1; i<=10; i++){
		printf("\nDigite um valor inteiro: ");
		 scanf("%i", &x);
		  y+=x;
	}printf("\nA soma dos 10 valores é: %i", y);
}
