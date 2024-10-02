#include<stdio.h>

int main(void){

	char p1,p2,p3,p4,p5, p6;
	int v = 0;
	
	printf("\nIndique as vitorias e derrotas respectivamente em 'v' para venceu ou 'p' para perdeu: "); 	
		scanf("%s %s %s %s %s %s", &p1, &p2, &p3, &p4, &p5, &p6);
	
	v = (p1 == 'v') ? 1: 0;
	v += (p2 == 'v') ? 1: 0;
	v += (p3 == 'v') ? 1: 0;
	v += (p4 == 'v') ? 1: 0;
	v += (p5 == 'v') ? 1: 0;
	v += (p6 == 'v') ? 1: 0;

	if(v == 0){
		printf("\n\n 0\n\n");
	}else
		if(v == 1 || v == 2){
			printf("\n\n 3\n\n");
	}else 
		if(v == 3 || v == 4){
			printf("\n\n 2\n\n");
	}else
		if(v == 5 || v == 6){
			printf("\n\n 1\n\n");
	}else{
		printf("\n\nSigite somente 'v' ou 'p'\n\n");
	}
}

