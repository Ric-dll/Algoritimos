#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int i;
	char str[20];
	
	printf("\nDigite algo: ");
	fgets(str, 20, stdin);
	
	for(i=0; i<20; i++){
		if((i%2!=0) && str[i]!='\0'){
			printf("\nString: %c", str[i]);	
		}
	}
}
//Fim main



