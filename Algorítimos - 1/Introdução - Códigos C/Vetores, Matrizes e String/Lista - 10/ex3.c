#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

	int matriz[3][3], i, j, soma[3];

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nDigite um valor para Linha: [%i], Coluna[%i] : ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	puts("");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			soma[i] += matriz[i][j];
		}
		printf("Vetor gerado: [%i]", soma[i]);
	}
}
//Fim main

