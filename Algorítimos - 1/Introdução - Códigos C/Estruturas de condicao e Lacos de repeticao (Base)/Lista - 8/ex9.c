#include<stdio.h>

int main(void){

	int i, j[50], k;

	for(i=0; i<50; i++){ k=i;
			j[i]=(k+5*k)%(k+1);
			printf("[%i] ", j[i]);
	}

}

