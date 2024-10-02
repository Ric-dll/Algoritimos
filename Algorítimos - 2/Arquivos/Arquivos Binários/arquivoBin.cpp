#include<stdio.h>
#include<string.h>

FILE *arquivoBin;

struct Funcionario{
	char nome[100];
	float salario;
	int flag;
};

void gravar(Funcionario f){
	//fopen abre o arquivo, pora trabalhar com struct usa-se a extens�o .dat
	arquivoBin = fopen("Funcionario.dat", "a+b");
	//Recebe o endere�o de mem�ria de funcionario 'f', verifica o tamanho, referencia a qtd de arquivos, e o arquivo
	f.flag=1;
	fwrite(&f, sizeof(struct Funcionario), 1, arquivoBin);
	//fclone fecha o arquivo
	fclose(arquivoBin);
}

void cadastrar(struct Funcionario funcionario){
	int cont=1;
	
	printf("\n - Cadastrar Funcionario - \n");
	
	do{
		printf("\nNome: "); getchar(); //Getchar limpa buffer de entrada
		fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
		printf("\nSalario: ");
		scanf("%f", &funcionario.salario);
		
		gravar(funcionario); //Grava as informa��es 
		printf("_____________________________________________________");
		printf("\n\nAdicionar outro funcionario: (1)Sim : (0)Nao \n\n");
		scanf("%i", &cont);

		
	}while(cont==1);
	
return;
}

void consultar(){
	//abre o arquivo para a leitura
	arquivoBin=fopen("funcionario.dat", "r");
	//retorna no inicio do arquivo para leitura
	rewind(arquivoBin);
	
	Funcionario f;
	
	// "Enquanto n�o chegar ao fim do arquivo..."
	while(!feof(arquivoBin)){
		//fread l� um bloco de dados e j� passa para o proximo
		fread(&f, sizeof(struct Funcionario), 1, arquivoBin);
		
		if(f.flag==1){
			//printa Nome e sal�rio
		printf("Nome: %s", f.nome);
		printf("sal�rio: %.2f", f.salario);
		}
	}
	fclose(arquivoBin);
}

void excluir(char nome[100]){
	
	arquivoBin = fopen("funcionarios.dat", "r+b");
	rewind(arquivoBin);
	Funcionario f;

	int cont =-1; //Verificador de posi��o
	
	while(!feof(arquivoBin)){
		fread(&f, sizeof(struct Funcionario), 1, arquivoBin); //L� a primeira struct
		cont ++; 
		
		if((f.flag==1) && (strcmp(nome, f.nome)) == 0){ //Se  (flag == 1) e (entrada de fun��o == nome)
			//Flag, que � o verificador da struct recebe 0, referente a um sinal de 1 ou 0 para continua��o
			f.flag=0; 
			//fseek posiciona um ponteiro que fica na posi��o *cont
			fseek(arquivoBin, sizeof(Funcionario)*cont, SEEK_SET);
			
			fwrite(&f, sizeof(Funcionario), 1, arquivoBin); 
			
			fseek(arquivoBin, 0, SEEK_END);
		}
	}
	
}

int main(void){
	Funcionario f; //Criando uma vari�vel Struct funcion�rio
	cadastrar(f); //Cadastrando funcion�rio baseado na struct
	gravar(f); //Gravando no arquivo
	consultar();
}
