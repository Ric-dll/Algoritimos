#include <stdio.h>

int main(void) {
	int numero, num1, num2, num3, numFinal;
	
	printf("\nDigite um numero de 100 ate 999 para ver sua inversao: ");
	 scanf("%i", &numero);
	 
	if(numero>=100 && numero<=999){
		num1 = numero/100; //pega o primeiro numero, pois 3 casas decimais /100... como é inteiro e o max é 999, tende a ficar em 9. Centenas;
		num2 = (numero/10)%10; //mesma lógica que o de cima, agora com o mod "resto" pegando o segundo número, enquanto o "/10" pega os 2 primeiros com dezenas, o %10 fica entre os dois, pegando o resto;
		num3 = numero % 10; //esse simplesmente faz o mod % de 10, restando apenas o último número;
		
		numFinal = (num3*100) + (num2*10) + (num1); //começando do numero 3 ao 1, ao mesmo tempo na ordem das potências, 100, 10, 1...
		
		printf("\nNumero inicial: %i - Numero final: %i", numero, numFinal);
	}else{
		printf("\nNumero invalido!");
	}
}

