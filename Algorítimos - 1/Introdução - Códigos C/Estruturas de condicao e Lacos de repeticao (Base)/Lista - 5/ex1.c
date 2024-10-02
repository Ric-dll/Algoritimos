#include<stdio.h>

int main(void){
    int v1,v2, v3, v4;
   
   	printf("\n~ Verificacao de possibilidade de formacao de triangulo para 3 de 4 varetas ~ \n\n");
    printf("\nDigite o comprimento da vareta: ");
      scanf("%i", &v1);
    printf("\nDigite o comprimento de outra vareta: ");
      scanf("%i", &v2);
    printf("\nDigite o comprimento de outra vareta: ");
      scanf("%i", &v3);
    printf("\nDigite o comprimento de outra vareta: ");
      scanf("%i", &v4);
   
    if((v1<v2+v3) && (v2<v1+v3) && (v3<v1+v2) || (v1<v2+v4) && (v2<v1+v4) && (v4<v1+v2) || (v1<v3+v4) && (v3<v1+v4) && (v4<v1+v3) || (v2<v3+v4) && (v3<v2+v4) && (v4<v2+v3)){
		printf("\n\n\t\tS");
	}else{
		printf("\n\n\t\tN");
	}
}
