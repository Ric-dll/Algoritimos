#include<stdio.h>

int main(void){
	int h, i, j;
	
	printf("\nDigite a altura: ");
	 scanf("%i", &h);
	
		for(i=0; i<=h; i++) {
			printf("\t");
        		for(j=1; j<=i; j++)
					printf("*");
       				printf("\n");
    }	
}	
