#include<stdio.h>

int main(void){
	float val, horas, qL;
	
	printf("\nDigite o valor da hora de trabalhado em R$: ");
	 scanf("%f", &val);
	printf("\nDigite o numero de horas trabalhadas: ");
	 scanf("%f", &horas);
	 
	qL = val*horas;
	
	printf("\nO salario final liquido descontado de impostos e de: %.2f", qL+(qL*0.10));
}


