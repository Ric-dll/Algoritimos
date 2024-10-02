#include<stdio.h>

int main(void){
	int i, x=0;
	
	for(i=0; i<=50; i++){
		if(i % 2 == 0){
			printf("\n%i", i);
				x+=i; 
		}
	}printf("\nA soma é %i", x);
}

