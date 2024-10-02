#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand(time(0));
	
	int x = rand()%10+1, y, z;
	 printf("\nDigite um valor: ");
	  scanf("%i", &y);

	for(int i=0; i<=x; i++){
		printf("\nDigite um valor: ");
		 scanf("%i", &z);
		if(z<y){y = z;}
	}
	printf("\nO menor e: %i", y);
}
