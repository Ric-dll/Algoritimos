#include<stdio.h>

int main(void){
	float salario;
	int tempo; // em anos
	
	printf("\nDigite o salario: ");
		scanf("%f", &salario);
	printf("\nDigite o tempo de servico: ");
		scanf("%i", &tempo);
	
	if(tempo >= 5){
			printf("O aumento e de: R$ %.2f", salario*0.2);
	}else{
		printf("O aumento e de: R$ %.2f", salario*0.1);
	}
}
