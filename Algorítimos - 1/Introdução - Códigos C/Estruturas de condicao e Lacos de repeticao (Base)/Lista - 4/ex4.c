#include<stdio.h>

int main(void){
	
	printf("\n\t\t\t ~ INVESTIGAÇÂO ~ \n");
	printf("\n\t\tResponda as perguntas somente com \"s\" ou \"n\"\n");
	printf("\n\t\"Um corpo foi encontrado na floresta e a policia iniciou \n\t um interrogatorio com alguns suspeitos, incluindo voce.\"\n\n"); 
		
	char p1,p2,p3,p4,p5;
	int v = 0;
	
	printf("\n\n\t\t• Ja telefonou para a vitima?  ");
		scanf("%s", &p1);
	printf("\n\n\t\t• Esteve no local do crime?  ");
		scanf("%s", &p2);
	printf("\n\n\t\t• Mora perto da vítima?  ");
		scanf("%s", &p3);
	printf("\n\n\t\t• Devia para a vítima?  ");
		scanf("%s", &p4);
	printf("\n\n\t\t• Já trabalhou com a vítima?  ");
		scanf("%s", &p5);

	v = (p1 == 's') ? 1: 0;
	v += (p2 == 's') ? 1: 0;
	v += (p3 == 's') ? 1: 0;
	v += (p4 == 's') ? 1: 0;
	v += (p5 == 's') ? 1: 0;
		
	switch(v){
		case 2: printf("\n\n\t\tEntrevistado@ Suspeito@"); break;
		case 3: printf("\n\n\t\tEntrevistado@ pode ser Cumplice"); break;
		case 4: printf("\n\n\t\tEntrevistado@ pode ser Cumplice"); break;
		case 5: printf("\n\n\t\tEntrevistado@ pode ser o Assasino"); break;
		default: printf("\n\n\t\tEntrevistado@ parece ser inocente"); break;
	}
}



