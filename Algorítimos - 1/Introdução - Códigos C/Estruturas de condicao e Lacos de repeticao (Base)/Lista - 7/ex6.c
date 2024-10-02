#include<stdio.h>

int main(void){

	int x,y,div;
	
	printf("\nDigite 2 numeros para definir o intervalo: ");
	 scanf("%i %i", &x ,&y);
	
	for(int i=x; i<=y; i++){ div = 0;
		for(int j=2; j<=i; j++){
			if(i%j==0){
				div++;
					break;
			}
		}
		if(i > 1 && div == 0){
			printf("\n%i e primo", i); 
		}
	}
}

