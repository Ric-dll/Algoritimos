/*
Trabalho I ~ [Algorítimos I]: Jogo dos Cem Erros

1' - Bacharelado em Ciência da Computação
	
 _[ ALUNOS ]________________,
|							|
|	@ Ricardo 				|
|	@ Richard 				|
|	@ Victor Hugo Mimmar	|
|	@ Vitor Henrique		|
|							|
|___________________________|

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void visibleMenu(void){
	 
	//Inicio Designer Menu
		printf("\nAVISO: A cada nova fita, é recomendável reiniciar o programa!");
        printf("\n ___________________________________________________\n");
        printf("|     				                    |\n");
        printf("|                   MENU PRINCIPAL                  |\n");
        printf("|___________________________________________________|\n");
        printf("|                                                   |\n");
        printf("|    1.  Definir tamanho da fita                    |\n");
        printf("|    2.  Gerar Valores Aleatórios                   |\n");
        printf("|    3.  Inserir Valores Manualmente                |\n");
        printf("|    4.  Imprimir a Fita com as Jogadas             |\n");
        printf("|    5.  Mostrar Maior e Menor Saldo Consecutivo    |\n");
        printf("|    6.  Mostrar Valor da Enésima Melhor Jogada     |\n");
        printf("|    7.  Verificar se Houve Empates                 |\n");
        printf("|    8.  Mostrar o Maior Conjunto de Jogadas        |\n");
        printf("|    9.  Limpar a Fita para Novos Valores           |\n");
        printf("|    10. Limpar e mostrar Menu                      |\n");
        printf("|                                                   |\n");
        printf("|   [0] Fechar o Programa                           |\n");
        printf("|                                                   |\n");
        printf("|___________________________________________________|\n");
	//Fim Designer Menu

	return;
}


int main(void){
		
	int menu = 1;
	
	//Chamando Menu
	visibleMenu();

	do{
		
		// Definir valores iniciais //
		int x, i, j; //Variaveis de apoio
		int fita[x]; //Tamanho da Fita
		//---------------//

		//Para a opcao 5//
		//Variaveis inicializadas com 0 para diminuir os comandos dentro do laço, ou seja, todos os contadores foram zerados//
		int maiorValor=0, menorValor=0; //Para receber o maior e menor valor, e comparar se o maior é o maior de todos e o menor, o menor de todos
		int inicioPosicaoPositiva=0, inicioPosicaoNegativa=0, finalPosicaoPositiva=0, finalPosicaoNegativa=0; // Para achar posição do conjunto
		int contPosicaoPositiva=0, contPosicaoNegativa=0; //Para controlar o fluxo de incremento das posicoes [i]
		int somaValPositivos=0, somaValNegativos=0; //Para armazenar a soma dos valores (<0) e (>0)
		//------------//
		
		// Para 6 //
		int n; //Recebe a posição; Contador de N;
		//-------//
		
		// Para 7 //
		int xRepeticoes=0;
		//--------//
		
		// Para 8 //
		int maiorPontuacao = 0;		 // Armazena a maior pontuação encontrada
		int inicioPosicaoMaior = 0;  // Posição de início do maior conjunto
		int finalPosicaoMaior = 0;    // Posição de fim do maior conjunto
		int pontuacaoAtual = 0;    // Pontuação atual, em tempo real do conjunto
		int posicaoInicioAtual = 0;    // Posição de início do conjunto atual
		//--------//		
		
		//Escolha de opções//
		printf("\n\nOpcao: "); scanf("%i", &menu); //Escolhe a opçao
	 
	//Inicio opcoes	
		switch(menu){
			case 1: { //Inicio 1 opcao
				printf("\nDigite o Tamanho da fita que deseja: "); 
				scanf("\t%i", &x);
				system("clear"); visibleMenu(); //Chamando Menu
				printf("\nFita de tamanho %i criada com Sucesso! \n", x);
        break;} //Fim 1 opcao
			
			case 2: { //Inicio 2 opcao
				srand(time(NULL)); //Reiniciar o sorteio para que ñ sorteie sempre o msm valor
	
					for(i=0; i<x; i++){ //Para gerar valores aleatorios a fita
						fita[i] = ((rand() % 201) - 100); 
					}
					system("clear"); visibleMenu(); //Chamando Menu
					printf("\nValores aleatórios gerados com Sucesso!\n");
				break;} //Fim 2 opcao
			
			case 3: { //Inicio 3 opcao
				system("clear"); visibleMenu(); //Chamando Menu
				
				printf("\nDigite os valores manualmente para o conjunto\n\n");
				printf("Valores = [ ");
				
					for(i=0; i<x; i++){	
						scanf("%i", &fita[i]);
						}
				printf("\nValores adicionados com Sucesso!\n");
					break;} //Fim 3 opcao
			
			case 4: { //Inicio 4 opcao
				system("clear"); visibleMenu(); //Chamando Menu
				
				//Para imprimir o conjunto formatado
				printf("\nValores = [ ");
					for(i=0; i<x; i++){ //Para testar se a fita recebe os valores designados
						printf("%i, ", fita[i]); 
					}printf("]\n");	
					break;} //Fim 4 opcao
					
			case 5: {
				
				for(i=0; i<x; i++){ //Laço único para procurar valores
					
					if(fita[i]<0){ //Condição de (< 0) para achar negativos
						somaValNegativos+=fita[i]; // Se o numero da posição [i]<0, soma-se os valores menores que 0, referente a p[i]
						contPosicaoPositiva=0; somaValPositivos=0; //Zera os contadores para não fazer calculos indevidos
						
						if(somaValNegativos < menorValor){ //"menorValor" está iniciado com 0, inicialmente, logo a primeira verificação é true
							menorValor = somaValNegativos; //Se true, "menorValor" recebe e armazena a soma dos valores negativos
							inicioPosicaoNegativa = i - contPosicaoNegativa; // inicialmente o contador está em 0: entretanto adiante, ele tera um valor maior que ira se subtrair de [i]; Ex: i = 1-0 --> i=1; Ex: i = 2-1 --> i=1; Ex: i = 3-2 --> i=1;
							finalPosicaoNegativa = i; //Sem subtração pois recebe sempre o último
							contPosicaoNegativa++; //Incrementa oo contador para manter o controle correto do valor inicial
						}
					}else 
						if(fita[i]>0){ //Ctrl C + Ctrl v no exemplo acima
								somaValPositivos+=fita[i]; // Se o numero da posição [i]>0, soma-se os valores maiores que 0, referente a p[i]
								contPosicaoNegativa=0; somaValNegativos=0; //Zera os contadores para não fazer calculos indevidos
								
								if(somaValPositivos > maiorValor){ //"maiorValor" está iniciado com 0, inicialmente, logo a primeira verificação é true
									maiorValor = somaValPositivos; //Se true, "maiorValor" recebe e armazena a soma dos valores positivos 
									inicioPosicaoPositiva = i - contPosicaoPositiva; // inicialmente o contador está em 0: entretanto adiante, ele tera um valor maior que ira se subtrair de [i]; Ex: i = 1-0 --> i=1; Ex: i = 2-1 --> i=1; Ex: i = 3-2 --> i=1;
									finalPosicaoPositiva = i; //Sem subtração pois recebe sempre o último
									contPosicaoPositiva++; //Incrementa oo contador para manter o controle correto do valor inicial
								}
							}
				}
				printf("\nMenor Saldo Consecutivo: %i - Posicoes:[%i ... %i]", menorValor, inicioPosicaoNegativa+1, finalPosicaoNegativa+1);//Printa o resultado
				printf("\nMaior Saldo Consecutivo: %i - Posicoes:[%i ... %i]", maiorValor, inicioPosicaoPositiva-1, finalPosicaoPositiva+1);//Printa o resultado
				
				//OBS: Para o exemplo do trabalho retorna-se corretamente, já para o exemplo {28, 0, 8, 10, -4, 1, 3, 5, -6, -50} o inicioPosiçãoPositiva retorna uma casa antes
				
				break;}
			
			case 6: {
					
					printf("\nPosição deseja: ");
				    scanf("%i", &n); //Recebe a "N"-ézima jogada desejada
				    
					//false
					if(n>x || n<1){ //Condição para verificar incoerências de entrada
						printf("\nDigite um valor válido!");
					}else{//true
						
						//Odenando em ordem decrescente
						for(i=0; i<x-1; i++){ // 'i' compara todos até mandar o maior pro ultimo lugar, por isso x-1, pois ele n precisará mais ser comparado posteriormente
							for(j=0; j<x-1-i; j++){ 
								if(fita[j] < fita[j+1]){ //Verifica qual posição é menor
									int aux = fita[j]; //Se true, aux recebe fita[j] 
									fita[j] = fita[j+1]; //fita[j] recebe a proxima posição, que é [j+1]
									fita[j+1] = aux; // A anterior recebe aux
								}
							}
						}
						printf("\nA %i melhor jogada e: %i", n, fita[n-1]); // A expressão [n-1], refere-se a contagem. Ex: Para a primeira posição, 1-1 = 0, ou seja posição p[0]
					}
				break;}
				
			case 7: {
				system("clear"); visibleMenu(); //Chamando Menu
				
				//Formatação
				printf("\n __________[ Empates ]__________\n");
				printf("|				|");
				
				//Loop para iniciar a comparação e contar as repetições incialmente
				for(i=0; i<x; i++){
					xRepeticoes=1; //xRepetições recebe 1 para estar a frente do vetor que inicia p[0]
					
						//Percorre a fita na mesma quantidade que o for de cima n vezes em cada posição de i
						for(j=0; j<x; j++){
							
							//Compara a igualdade entre a comparação de ambos valores de mesma fita
							if((fita[i] == fita[j]) && i < j){ //Também se i < j  pois assim verifica a igualdade entre antecedente e consequente
								xRepeticoes++; //incrementa 1 no contador de repetições
							}else if((fita[i] == fita[j]) && i > j){ //Quando o i estiver em uma posição na frente do j, e for igual, para não intervir no calculo, é necessário forçar a parada, para manter a ordem de [i] para [j] e não o oposto
								break; //Para a contagem específica caso a condição acima venha a ser true
							}
						}
						//Se as repetições forem diferentes de 1, pois se for 1 significa que não houve repetições
						if(xRepeticoes!=1){
							printf("\n|  Numero: %i (%ix)	  	|", fita[i], xRepeticoes);
						}//Não consegui usar else para atribuir que não haviam repetições
				}
				printf("\n|_______________________________|\n");
				printf("\nSem mais Repeticoes");
								
				break;}
			
			case 8: {
					system("clear"); visibleMenu(); //Chamando Menu
					
					//Loop para percorrer toda a fita
					for (int i = 0; i < x; i++) {
						pontuacaoAtual += fita[i];  //Soma a pontuação da jogada atual com pontuação atual do conjunto

						// Se caso a pontuação atual for negativa, é reiniciado o conjunto
						if (pontuacaoAtual < 0) {
							pontuacaoAtual = 0;
							posicaoInicioAtual = i + 1; //Recebe o valor que está no loop, [i], mais 1 para incrementar à frente
						}

						// Se a pontuação atual for maior que a maior pontuação encontrada até o momento, atualiza a maior pontuação e as posições correspondentes
						if (pontuacaoAtual > maiorPontuacao) {
							maiorPontuacao = pontuacaoAtual;
							inicioPosicaoMaior = posicaoInicioAtual;
							finalPosicaoMaior = i;
						}
					}

					printf("Maior conjunto de jogadas com maior pontuação: %i - Posições: [%i ... %i]\n", maiorPontuacao, inicioPosicaoMaior+1, finalPosicaoMaior+1);


				break;}
			
			case 9: { //Inicio 9 opcao
				system("clear"); visibleMenu(); //Chamando Menu
				for(i=0; i<x; i++){ // Para Zerar os valores da fita
						 fita[i] = 0;
					}
				printf("\nValores limpos com Sucesso!\n");
					break;} //Fim 9 opcao
				
			case 10: {
				system("clear"); visibleMenu(); //Chamando Menu
					break;}
    
			case 0: {
				printf("\nSaindo do programa...\n");
				return 0;
			}
    
			default:
				printf("\nOpcao Invalida!! Tente Novamente...\n");
					break;
	
	}
	//Fim opcoes	
	}while(menu!=0);
 
	printf("\nSaindo do programa...\n");
}
//Fim main
