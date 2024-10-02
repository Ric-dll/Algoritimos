#include<stdio.h>

int main(void){
	int lados;

	printf("\nDigite a quantidade de lados de polígono regular: ");
		scanf("%i", &lados);
	
	switch(lados){
		case 3: printf("\nTriangulo"); break;
		case 4: printf("\nQuadrado"); break;
		case 5: printf("\nPentagono"); break;
		default: printf("\nErro!"); break;
	}
}


