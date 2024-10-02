#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(void){
	srand(time(NULL));

	int matriz[10][3], i, j, x, y, z;

	for(i=0; i<10; i++){
		for(j=0; j<3; j++){
			matriz[i][j] = rand() % 10;

		}
	}printf("\n");
		for(i=0; i<10; i++){
			printf("\n");
			for(j=0; j<3; j++){
				printf(" %i", matriz[i][j]);
				if((matriz[i][0]) > (matriz[i][1])){
					x++;
				}else
					if((matriz[i][1]) > (matriz[i][2])){
					y++;
				}else{
					z++;
				}
			}
		}printf("\n");
		if(x>=y && x>=z){
			printf("\nA primeira coluna teve as maiores notas");
		}else if(y>=x && y>=z){
			printf("\nA segunda coluna teve as maiores notas");
		}else{
			printf("\nA terceira coluna teve as maiores notas");
		}
}
//Fim main
