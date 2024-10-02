#include<stdio.h>

int main(void){
	int x;
	
	printf("\nDigite um valor inteiro: ");
	 scanf("%i", &x);
	printf("\nSeus divisores são: ");
	
	for(int i=1; i<=x; i++){
		if(x%i==0){
			printf("[%i] ", i);
		}
	}
}
