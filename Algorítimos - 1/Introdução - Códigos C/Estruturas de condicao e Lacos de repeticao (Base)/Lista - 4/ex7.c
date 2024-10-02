#include<stdio.h>

int main(void){
	int idade;
	
	printf("\nDigite uma idade: ");
		scanf("%i", &idade);
	
		if(idade == 0){
			printf("\nIdade invalida");
		}else if(idade <= 15){
			printf("\nNão pode votar e nem dirigir");
		}else if(idade >= 16 && idade < 18){
			printf("\nPode votar, mas não pode dirigir");
		}else{
			printf("\nPode votar e dirigir");
		}
	}
