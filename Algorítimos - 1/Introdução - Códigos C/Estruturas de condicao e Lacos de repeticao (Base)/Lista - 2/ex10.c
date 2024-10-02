#include <stdio.h>

int main(void) {
	char letra, letraMin;
	
	printf("\nDigite uma letra maiuscula: ");
	scanf("%c", &letra);
	
	if(letra >= 'A' && letra <= 'Z'){
		letraMin = letra + ('a' - 'A');
			printf("A conversao pra minuscula fica como: %c", letraMin);
	}else{
		printf("A letra digitada nao e maiuscula.\n");
	}
}
