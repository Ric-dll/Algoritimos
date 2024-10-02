#include<stdio.h>

int main(void){
	int dias;
	float pag = 130.00, qL, imp;
	
	printf("\nDigite a quantidade de dias trabalhados: ");
	 scanf("%i", &dias);
	 
	qL = dias*pag;
	imp = qL*0.08;
	
	printf("\nO salario final liquido descontado de impostos e de: %.2f", qL-imp);
}


