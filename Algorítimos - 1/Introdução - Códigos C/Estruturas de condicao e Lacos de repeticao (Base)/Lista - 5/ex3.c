#include<stdio.h>

int main(void){
 
	int B, T, h=70, aTrap1, aTot, aTrap2;  // F M
	
	printf("\nDigite a distância do ponto inicial do corte, que esta na base, em direcao ao lado esquerdo da nota: ");
		scanf("%i", &B);
	printf("\nDigite a distância do ponto final do corte, no topo, para o lado esquerdo da nota: ");
		scanf("%i", &T);
	
	aTrap1 = ((B+T)*h)/2;
	aTot = 70*160;
	
	aTrap2 = aTot-aTrap1;
	
	if(aTrap2>aTrap1){
		printf("\n2");
	}else
		if(aTrap1>aTrap2){
		printf("\n1");
	}else{
		printf("\n0");
	}
}

