#include<stdio.h>

int main(void){
	
	int x;
	printf("\nDigite um numero: ");
	 scanf("%i", &x);
	
	for(int i=0; i<=x; i++){
		if(i % 2 == 1){
			printf("\n%i é impar", i);
		}
	}
}

