#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int cont, i, j, x;
	char str[20];
	
	printf("\nDigite uma String: ");
	fgets(str, 20, stdin);
	
	x = strlen(str)-2;
	
	do{
		printf("%c", str[x]);
		x--;
	}while(x!=0);

}
//Fim main



