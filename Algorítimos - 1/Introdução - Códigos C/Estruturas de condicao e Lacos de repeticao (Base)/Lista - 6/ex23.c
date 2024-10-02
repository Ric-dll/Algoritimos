#include<stdio.h>

int main(void){
	int b, h;
	
	printf("Digite a area da base: ");
	 scanf("%i", &b);
	printf("Digite a altura: ");
	 scanf("%i", &h);
	 
	if(b<=0 || h<=0){
		printf("\nN/A");
	}else{
		printf("\nA área do triângulo é: %i", (b*h)/2);
	}
}



