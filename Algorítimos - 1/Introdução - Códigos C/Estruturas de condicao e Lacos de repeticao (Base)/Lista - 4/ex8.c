#include<stdio.h>

int main(void){
	int num;
	
	printf("\nDigite um numero: ");
		scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("\nO numero %i e divisivel por 2", num);
	}else if(num % 5 == 0){
		printf("\nO numero %i e divisivel por 5", num);
	}else if(num % 10 == 0){
		printf("\nO numero %i e divisivel por 10", num);
	}else{
		printf("\nO numero %i nao e divisivel por 2, 5 ou 10", num);
	}
}

