#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

	int matriz[3][3], i, j, soma;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nDigite um valor para Linha: [%i], Coluna[%i] : ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("\t %i", matriz[i][j]);
			if(i==j){
				soma += matriz[i][j];
				}
			}
		}
		printf("\n\n");
		printf("\nA soma da diagonal principal e: %i\n", soma);
}
//Fim main


