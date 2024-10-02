#include<stdio.h>

int main(void){
	float salario;

	printf("\nDigite o salario: ");
		scanf("%f", &salario);
	if(salario != 0){
		if(salario <= 280){
			printf("\nSalario foi reajustado para: : %.2f", salario+=(salario*0.2));
		}else if(salario >= 280 && salario <= 700){
			printf("\nSalario foi reajustado para: : %.2f", salario+=(salario*0.15));
		}else if(salario >= 700 && salario <= 1500){
			printf("\nSalario foi reajustado para: %.2f", salario+=(salario*0.10));
		}else{
			printf("\nSalario foi reajustado para: %.2f", salario+=(salario*0.05));
		}
	}else{
		printf("\nO salario nao pode ser igual a Zero");
	}
}
