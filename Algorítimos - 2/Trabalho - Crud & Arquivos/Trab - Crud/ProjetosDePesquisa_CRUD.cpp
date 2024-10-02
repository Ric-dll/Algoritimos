#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Declaração de arquivo. "FILE *" faz a função de "arquivo de " */
FILE *arquivoBin;

/* Registro a ser manipulado no Arquivo */
struct _ProjetoDePesquisa{
	char Area[50];
	char Titulo[100];
	char PalavrasChave[200];
	int RegistroAvaliador;
	int status; // Flag
};

//O fgets adiciona também o "\n" ao final da entrada, o que pode gerar erros de comparação de strings
//O comprimento real da string é o número de caracteres antes do caractere nulo.
void removerNovaLinha(char *str){
	//tipo size_t para tamanho
	size_t tamanho = strlen(str);

	if(tamanho > 0 && str[tamanho - 1] == '\n'){
		// Substitui a nova linha por um caractere nulo
		str[tamanho - 1] = '\0';
	}
}

void CRUD(){

	//Inicio Designer Menu
        printf("\n __________________________________\n");
        printf("|                                  |\n");
        printf("|    MENU - Projeto de pesquisa    |\n");
        printf("|__________________________________|\n");
        printf("|                                  |\n");
        printf("|            1. Cadatrar           |\n");
        printf("|            2. Exibir             |\n");
        printf("|            3. Alterar            |\n");
        printf("|            4. Excluir            |\n");
        printf("|                                  |\n");
        printf("|            [0] Fechar            |\n");
        printf("|                                  |\n");
        printf("|__________________________________|\n");
	//Fim Designer Menu

	return;
}

//Função para gravar os dados de um registro (recebido como parâmetro) no arquivo
void gravar_Dados(struct _ProjetoDePesquisa projPesq){
	//condiçaõ que verifica abertura de arquivo através da função fopen, o parâmetro "a+b", verifica se possui um arquivo com o nome, se não, será criado.
	if((arquivoBin = fopen("Projetos_De_Pesquisa.dat", "a+b")) == NULL){//Condição de verificação
		printf("\nProblemas com a abertura e gravação no arquivo binário...");
	}else{
		projPesq.status = 1; //flag
		fwrite(&projPesq, sizeof(struct _ProjetoDePesquisa), 1 ,arquivoBin);
		fclose(arquivoBin);
		printf("\nDados gravados com Sucesso!...");
	}
}

//Função para ler e exibir os registros do arquivo */
void ler_Dados(){
	//condiçaõ que verifica abertura de arquivo através da função fopen, o parâmetro "r", para leitura.
	if((arquivoBin = fopen("Projetos_De_Pesquisa.dat", "r")) == NULL){
		printf("\nProblemas ao abrir o arquivo para leitura...");
	}else{
		//Comando para que o código volte ao início do arquivo
		rewind(arquivoBin);

		//Tipo da struct para receber os valores do arquivo.
		_ProjetoDePesquisa projPesq;

		//Enquanto NÃO houver mais dados a serem lidos em arquivoBin...
		while(!feof(arquivoBin)){
			//fread faz a leitura de um registro e armazena o conteúdo do registro lido do arquivo no Registro projPesq
			fread(&projPesq, sizeof(struct _ProjetoDePesquisa), 1 , arquivoBin);

			//A função verifica se houve erro durante a operação de arquivo...
			if(ferror(arquivoBin)){
				printf("\nProblemas na leitura do arquivo..."); break;
			}

			if(!feof(arquivoBin) && projPesq.status == 1){
				printf("\n------[ Projetos Cadastrados ]------");
				printf("\nArea: %s", projPesq.Area);
				printf("\nTítulo: %s", projPesq.Titulo);
				printf("\nPalavras Chave: %s", projPesq.PalavrasChave);
				printf("\nRegistro do Avaliador: %i", projPesq.RegistroAvaliador);
				printf("\nStatus: %i\n", projPesq.status);
			}
		}
	}
}

//Função para alterar os dados de um registro com a placa passada por parâmetro
void atualizar_Dados(struct _ProjetoDePesquisa MainProjetoDePesquisa){
	//condição que verifica abertura de arquivo através da função fopen, o parâmetro, "r+b" significa que o arquivo será aberto para leitura e escrita em modo binário
	if((arquivoBin = fopen("Projetos_De_Pesquisa.dat", "r+b")) == NULL){
		printf("\nProblemas para abertura para atualizacao de dados");
	}
	//Comando para que o código volte ao início do arquivo
	rewind(arquivoBin);

	//Tipo da struct para receber os valores do arquivo.
	struct _ProjetoDePesquisa CommitProjetoDePesquisa;

	printf("\n--- Alteracao ---");

	//For de i começando em 0, verifica se a leitura de um registro do arquivo foi lida corretamente, se sim, i++
	for(int i=0; fread(&CommitProjetoDePesquisa, sizeof(struct _ProjetoDePesquisa), 1 , arquivoBin); i++){

		//Compara se o Titulo do registro é igual ao de referência por registro, e se flag está ativo
		if(strcmp(CommitProjetoDePesquisa.Titulo, MainProjetoDePesquisa.Titulo) == 0 && CommitProjetoDePesquisa.status == 1){
			//O comando fseek move o ponteiro do arquivo para a posição correspondente ao registro que está sendo lido
			fseek(arquivoBin, sizeof(struct _ProjetoDePesquisa) * i, SEEK_SET);

			//Flag para definir se o registro está ativo(1) ou inativo(0)
			MainProjetoDePesquisa.status = 1;

			//Atualiza, gravando as novas informações no registro de "MainProjetoDePesquisa", ou seja, no arquivo principal reverenciado
			fwrite(&MainProjetoDePesquisa, sizeof(struct _ProjetoDePesquisa), 1 , arquivoBin); break;
		}
	}
	fclose(arquivoBin);
	printf("\nDados Alterados com Sucesso!...\n");
}

//Função para excluir logicamente um registro com a placa passada por parâmetro
void delete_Dados(char Titulo[100]){
	//condição que verifica abertura de arquivo através da função fopen, o parâmetro, "r+b" significa que o arquivo será aberto para leitura e escrita em modo binário
	if((arquivoBin = fopen("Projetos_De_Pesquisa.dat", "r+b")) == NULL){
		printf("\nErro na abertura de arquivo para exclusao...");
	}
	//Comando para que o código volte ao início do arquivo
	rewind(arquivoBin);

	//Tipo da struct para receber os valores do arquivo.
	struct _ProjetoDePesquisa CommitProjetoDePesquisa;

	printf("\n--- Exclusao ---\n");

	int i=-1;

	//Enquanto NÃO houver mais dados a serem lidos em arquivoBin...
	while(!feof(arquivoBin)){
		//fread faz a leitura de um registro e armazena o conteúdo do registro lido do arquivo no Registro CommitProjetoDePesquisa
		fread(&CommitProjetoDePesquisa, sizeof(struct _ProjetoDePesquisa), 1 , arquivoBin);

		// Contador utilizado para acessar o registro que será alterado
		i++;

		//A função verifica se houve erro durante a operação de arquivo...
		if(ferror(arquivoBin)){
			printf("\nErro na leitura para exclusao...\n"); break;
		}

		//Compara se o Titulo do registro é igual ao de Entrada, e se flag está ativo
		if((!feof(arquivoBin)) && (strcmp(CommitProjetoDePesquisa.Titulo, Titulo) == 0) && CommitProjetoDePesquisa.status == 1){
			//Flag passa a ser 0, ou seja, a ser inativo para ser excluido
			CommitProjetoDePesquisa.status = 0;

			//O comando fseek move o ponteiro do arquivo para a posição correspondente ao registro que está sendo lido
			fseek(arquivoBin, sizeof(struct _ProjetoDePesquisa) * i, SEEK_SET);

			//Atualiza, gravando as novas informações no registro de "CommitProjetoDePesquisa", ou seja, no arquivo reverenciado
			fwrite(&CommitProjetoDePesquisa, sizeof(struct _ProjetoDePesquisa), 1 , arquivoBin);

			//Está sendo usado para posicionar o indicador 'i' de posição no final do arquivo.
			fseek(arquivoBin, 0, SEEK_END);
		}
	}
	fclose(arquivoBin);
	printf("\nDados Excluidos com Sucesso!...\n");
}

int main(void){
	struct _ProjetoDePesquisa projeto;

	int menu=1;

	while(menu!=0){
		system("clear"); CRUD();

		//Menu de escolha de opções
		printf("\nEscolha uma opção: ");
		scanf("%i", &menu);

		switch(menu){
			case 1: {
				//Recebendo os dados
				printf("\n------[ Cadastro ]------\n"); getchar();

				printf("\nArea: "); scanf("%s", projeto.Area);
				fflush(stdin);

				printf("\nTitulo: "); scanf("%s", projeto.Titulo);
				fflush(stdin);

				printf("\nPalavras-Chave: "); scanf("%s", projeto.PalavrasChave);
				fflush(stdin);

				printf("\nRegistro do Avaliador: "); scanf("%i", &projeto.RegistroAvaliador);

				//Chamando a função para gravar os dados recebidos na struct projeto
				gravar_Dados(projeto);

				system("read -p 'Pressione Enter para continuar...'"); system("clear"); CRUD();
				break;
			}
			case 2: {
				ler_Dados();
				system("read -p 'Pressione Enter para continuar...'"); system("clear"); CRUD();
				break;
			}
			case 3: {
				//Recebendo o título do registro para alteração
				printf("\n------[ Alteracao ]------\n"); getchar();
				printf("\nTitulo do projeto a ser alterado: "); scanf("%s", projeto.Titulo);

				//Novos dados
				printf("\nArea: "); scanf("%s", projeto.Area);

				printf("\nPalavras-Chave: "); scanf("%s", projeto.PalavrasChave);

				printf("\nRegistro do Avaliador: "); scanf("%i", &projeto.RegistroAvaliador);

				//Chamando a função para alterar os dados no registro que foi entrado
				atualizar_Dados(projeto);

				system("read -p 'Pressione Enter para continuar...'"); system("clear"); CRUD();
				break;
			}
			case 4: {
				//variável temporária de entrada de título para pesquisa
				char titulo[100];
				//Recebendo o título do registro desejado
				printf("\n------[ Exclusao ]------\n"); getchar();
				printf("\nDigite o título do projeto a ser excluido: ");
				scanf("%s", titulo);

				//Chamando a função para deletar
				delete_Dados(titulo);

				system("read -p 'Pressione Enter para continuar...'"); system("clear"); CRUD();
				break;
			}
		}
	}
	printf("\n\nSaindo do programa");
	system("read -p 'Pressione Enter para continuar...'");
}

