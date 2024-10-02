#include<stdio.h>

int main(void){

	int x, y, mult;
	printf("\nDigite dois valores: ");
	scanf("%i %i", &x, &y);
	
	for(int i=0; i<y; i++){
		mult+=x;
	}
	printf("%i x %i : %i", x,y,mult);
}
