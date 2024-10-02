#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int cont, i;
	char str[20];
	
	printf("\nDigite uma String numerica: ");
	fgets(str, 20, stdin);
	
	for(i=0; i<20; i++){
		if(str[i]=='1'){
			cont++;
		}
	}
	printf("\Qtdade de 1's': %i", cont);	
	
}
//Fim main



