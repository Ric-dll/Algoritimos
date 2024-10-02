#include<stdio.h>

int main(void){
	float valEmprestimo, salarioSolicitante, calcEmprestimo;
	int nParcelas;
	
	printf("\nDigite o Valor do emprestimo: ");
		scanf("%f", &valEmprestimo);
	printf("\nDigite o Numero de parcelas: ");
		scanf("%i", &nParcelas);
	printf("\nDigite o Salario: ");
		scanf("%f", &salarioSolicitante);
	
	calcEmprestimo = valEmprestimo/nParcelas;
	salarioSolicitante *= 0.3;
	
	if(salarioSolicitante >= calcEmprestimo){
		printf("\nA solicitacao foi Aprovada");
	}else{
		printf("\nA solicitacao foi Recusada");
	}
	
}
