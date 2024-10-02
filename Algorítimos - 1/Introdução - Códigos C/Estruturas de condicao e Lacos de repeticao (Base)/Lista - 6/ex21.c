#include<stdio.h>

int main(void){
	int n;

	printf("\nDigite um número |N inteiro: ");
	 scanf("%i", &n);
	 
	printf("\n\nOrdem crescente: ");
	for(int i=0; i<=n; i++){
		printf(" [%i] ", i);
	}
	printf("\n\nOrdem decrescente: ");
	for(int i=n; i>=0; i--){
		printf(" [%i] ", i);
	}
}

