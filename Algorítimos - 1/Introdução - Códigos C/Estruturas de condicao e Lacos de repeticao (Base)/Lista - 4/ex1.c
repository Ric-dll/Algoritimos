#include<stdio.h>
#include<string.h>

int main(void){
 
	char userLogin[10] = "admin", userInput[10], pswLogin[10] = "1234", pswInput[10];
	
	printf("\nLogin: ");
		scanf("%s", &userInput);
	printf("\nSenha: ");
		scanf("%s", &pswInput);
	
	if(strcmp(userLogin, userInput) == 0){
		if(strcmp(pswLogin, pswInput) == 0){
			printf("\n\nAcesso Concedido!");
		}else{
			printf("\n\nSenha incorreta!");
		}
	}else{
			printf("\n\nAcesso Negado!");
	}
}

