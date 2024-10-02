#include<stdio.h>

int main(void){
	int n;

	printf("\nDigite um número |N inteiro: ");
	 scanf("%i", &n);
	 
	printf("\n\nPar - Ordem crescente: ");
	for(int i=0; i<=n; i++){
		if(i%2==0){
			printf(" [%i] ", i);	
		}
		
	}
	printf("\n\nImpar - Ordem decrescente: ");
	for(int i=n; i>=0; i--){
		if(i%2==1){
			printf(" [%i] ", i);
		}
	}
}


