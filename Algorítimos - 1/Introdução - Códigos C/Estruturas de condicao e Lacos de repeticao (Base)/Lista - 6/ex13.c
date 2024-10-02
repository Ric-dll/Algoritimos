#include<stdio.h>

int main(void){
	
	int x;
	
	printf("\nDigite um numero: ");
	 scanf("%i", &x);
	 
	for(int i=2; i<=x; i++){
		if(x<=1 || (x%i == 0)){
			printf("\n%i : não é primo", x); 
				return 0;
		}
		printf("\n%i : é primo", x);
	return 0;	
	}
}

