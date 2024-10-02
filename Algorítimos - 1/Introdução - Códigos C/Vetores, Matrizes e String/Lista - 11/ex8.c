#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int cont, i;
	char str[20];
	
	printf("\nDigite uma String: ");
	fgets(str, 20, stdin);
	
	printf("\nString: ");	
		for(i=0; i<20; i++){
			if((str[i]!='\0') && (str[i]!='a') && (str[i]!='e') && (str[i]!='i') && (str[i]!='o') && (str[i]!='u')){
				printf("%c", str[i]);	
		}
	}
}
//Fim main



