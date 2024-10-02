#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Menu
void mostrarMenu(void){
	printf(" ___________________[ MENU ]____________________\n");
	printf("|						|");
	printf("\n|    [1] - Gerar os ultimos dois digitos	|");
	printf("\n|    [2] - Validacao de CPF			|");
	printf("\n|    [3] - Gerar CPF valido			|");
	printf("\n|    [4] - Gerar N CPF's' validos		|");
	printf("\n|    [5] - Mostrar Menu				|");
	printf("\n|    [6] - Limpar terminal			|");
	printf("\n|    						|");
	printf("\n|    [0] - Sair do programa			|");
	printf("\n|_______________________________________________|");
	return;
}//Fim Menu

//Inicio Main
int main(void){
	srand(time(NULL));
	
	int menu=1, digitosCPF[9], i, j, calculoDig1=0, calculoDig2=0, dig1, dig2, resto, resto2, qtdeCPFS;
	int valCPF1=0, valCPF2=0;
	
	mostrarMenu();
	
	do{
		printf("\n\nOpcao: "); scanf("%i" , &menu);
	 
	switch(menu){
		case 1: {
			
			for(i=0; i<9; i++){
				printf("\n(%i) Digito: ", i+1);
				 scanf("%i", &digitosCPF[i]);
				
				if(digitosCPF[i] > 9 || digitosCPF[i] < 0){
					printf("\nDigito ivalido, tente novamente...\n\n");
					getchar();
						return 0;
				}
				calculoDig1 += digitosCPF[i]*(10-i);
				calculoDig2 += digitosCPF[i]*(11-i);
				
			}
			
			//-------Dig e resto----// 1
			resto = calculoDig1%11;
			dig1 = (resto<2)? 0 : 11-resto;	
			//----------------------// 1
			
			calculoDig2 += dig1*2;
			
			//-------Dig e resto----// 2
			resto2 = calculoDig2%11;
			dig2 = (resto2<2)? 0 : 11-resto2;
			//----------------------// 2
			
			
			system("clear"); mostrarMenu();
			printf("\n\nNumero completo do CPF: ");
			for(i=0; i<9; i++){
					printf("%i", digitosCPF[i]);
			}printf("-%i%i", dig1, dig2);
			
			//Zerando os valores//
			calculoDig1=0; calculoDig2=0; dig1=0; dig2=0; resto=0; resto2=0;
			//------------------//
			break;}			
		
		case 2: {
			
			for(i=0; i<9; i++){
				printf("\n(%i) Digito: ", i+1);
				 scanf("%i", &digitosCPF[i]);
				 
				
				if(digitosCPF[i] > 9 || digitosCPF[i] < 0){
					printf("\nDigito ivalido, tente novamente...\n\n");
					getchar();
						return 0;
				}
				calculoDig1 += digitosCPF[i]*(10-i);
				calculoDig2 += digitosCPF[i]*(11-i);
				
			}
			printf("\n(10) Digito: ");scanf("%i", &valCPF1);
			printf("\n(11) Digito: ");scanf("%i", &valCPF2);
			
			//-------Dig e resto----// 1
			resto = calculoDig1%11;
			dig1 = (resto<2)? 0 : 11-resto;	
			//----------------------// 1
			
			calculoDig2 += dig1*2;
			
			//-------Dig e resto----// 2
			resto2 = calculoDig2%11;
			dig2 = (resto2<2)? 0 : 11-resto2;
			//----------------------// 2
			
			
			system("clear"); mostrarMenu();
			printf("\n\nNumero completo do CPF: ");
			for(i=0; i<9; i++){
				printf("%i", digitosCPF[i]);
			}printf("-%i%i", dig1, dig2);
			
			if((dig1 == valCPF1) && (dig2 == valCPF2)){
				printf(" e Valido!!");
			}else{
				printf(" e Invalido!!");
			}
			
			//Zerando os valores//
			calculoDig1=0; calculoDig2=0; dig1=0; dig2=0; resto=0; resto2=0;
			//------------------//
			
			break;}
		
		case 3: {
			
			for(i=0; i<9; i++){
				digitosCPF[i] = rand() % 10;
					printf("\n%i", digitosCPF[i]);
			}
			for(i=0; i<9; i++){
				calculoDig1 += digitosCPF[i]*(10-i);
				calculoDig2 += digitosCPF[i]*(11-i);
			}
			//-------Dig e resto----// 1
			resto = calculoDig1%11;
			dig1 = (resto<2)? 0 : 11-resto;	
			//----------------------// 1
			
			calculoDig2 += dig1*2;
			
			//-------Dig e resto----// 2
			resto2 = calculoDig2%11;
			dig2 = (resto2<2)? 0 : 11-resto2;
			//----------------------// 2
			
			system("clear"); mostrarMenu();
			printf("\n\nCPF aleatorio valido: ");
			for(i=0; i<9; i++){ 
				printf("%i", digitosCPF[i]);
			}printf("-%i%i", dig1, dig2);
			
			//Zerando os valores//
			calculoDig1=0; calculoDig2=0; dig1=0; dig2=0; resto=0; resto2=0;
			//------------------//
			
			break;}
		
		case 4: {
			
			printf("\nQuantidade de CPF's desejados: ");
			 scanf("%i", &qtdeCPFS);
			
				for(i=0; i<qtdeCPFS; i++){
					for(j=0; j<i; j++){
						
						for(i=0; i<9; i++){
							digitosCPF[i] = rand() % 10;
						}
						
						for(i=0; i<9; i++){
							calculoDig1 += digitosCPF[i]*(10-i);
							calculoDig2 += digitosCPF[i]*(11-i);
						}
					
					//-------Dig e resto----// 1
					resto = calculoDig1%11;
					dig1 = (resto<2)? 0 : 11-resto;	
					//----------------------// 1
						
					calculoDig2 += dig1*2;
						
					//-------Dig e resto----// 2
					resto2 = calculoDig2%11;
					dig2 = (resto2<2)? 0 : 11-resto2;
					//----------------------// 2
						
					printf("\n\n%i - CPF aleatorio valido: ", j+1);
					for(i=0; i<qtdeCPFS; i++){ 
						printf("%i", digitosCPF[i]);
					}printf("-%i%i", dig1, dig2);
						
					//Zerando os valores//
					calculoDig1=0; calculoDig2=0; dig1=0; dig2=0; resto=0; resto2=0;
					//------------------//
						}
					}
					//Zerando os valores//
					calculoDig1=0; calculoDig2=0; dig1=0; dig2=0; resto=0; resto2=0;
					//------------------//
			break;}
			
		case 5: {
			mostrarMenu();
		break;}
		
		case 6:{ 
			system("clear"); mostrarMenu();
		break;}
		
		default:{
			printf("\nDigito ivalido, tente novamente...\n\n");
			system("clear"); mostrarMenu();
				break;}
	}
	
	}while(menu!=0);
}//Fim main
