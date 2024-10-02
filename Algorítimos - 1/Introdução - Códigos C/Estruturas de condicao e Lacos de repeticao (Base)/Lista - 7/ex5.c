#include<stdio.h>

int main(void){

	int t, i, j;
	
	printf("\nDigite o tamanho do lado entre 1....20: ");
	 scanf("%i", &t);
	 
	if(t < 1 && t> 20){
		printf("\nN/A: ");
	}else{
		printf("\n");
		for(i=1; i<=t; i++){ //Controlador da linha pra baixo
			for(j=1; j<=t; j++){ //Controlador da coluna pra frente
				if(i == 1 || i == t || j == 1 || j == t){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}
