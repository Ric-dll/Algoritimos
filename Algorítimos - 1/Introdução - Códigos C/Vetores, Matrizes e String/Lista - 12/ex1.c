#include<stdio.h>
#include<string.h>

int main(void){
	
	char data[] = "08/11/2002";
	int i=0, DMA[10];
	
	(data[2] == '/' && data[5] == '/')? puts("A Barra na posicao correta"):puts("A Barra nao esta na posicao correta");
	
	char *token = strtok(data,"/");
	while(token != NULL){
		printf("\nToken %i: %s ", i+1, token);
		DMA[i] = atoi(token);
		token = strtok(NULL, "/");
		i++;
	}
	
	printf("\n\nData: %i/%i/%i", DMA[0], DMA[1], DMA[2]);

}
//Fim main
