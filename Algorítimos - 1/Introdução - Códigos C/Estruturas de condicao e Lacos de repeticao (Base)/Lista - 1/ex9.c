#include<stdio.h>

int main(void){
	float a1,q,aN,n,i = 0; //'n' é o valor final desejado
	
	printf("\nDigite um valor inicial: ");
		scanf("%f", &a1);
	printf("\nDigite a razao: ");
		scanf("%f", &q);
	printf("\nDigite o valor final que deseja: ");
		scanf("%f", &n);

	aN = a1*(q*(n-1));
	
	printf("\nA soma da PG e: %.2f", aN);
		
	printf("\n\nOs termos sao: ");
	for(i = a1; i <= n; i++){
		printf("\n%.2f", i); 
		i+=(q-1);
	}
}
