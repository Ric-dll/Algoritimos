#include<stdio.h>

int main(void){

	int x,y=0;
	printf("\nDigite valor positivo: ");
	scanf("%i", &x);
	
	while(x>0){
		y+=x;
		printf("\nDigite valor positivo: ");
			scanf("%i", &x);		
	}
	printf("\nA soma e: %i", y);
}

