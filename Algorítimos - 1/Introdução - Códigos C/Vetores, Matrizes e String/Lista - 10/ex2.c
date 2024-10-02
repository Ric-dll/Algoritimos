#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(void){
	srand(time(NULL));

	int matriz[10][10], i, j;

	//Somas
	for(i=0; i<10; i++){
		printf("\n");
		for(j=0; j<10; j++){
		if(i<j){
			matriz[i][j] = 2*i + 7*j -2;
			printf("\n %i", matriz[i][j]);
		}else if(i == j){
			matriz[i][j] = 3*i*i-1;
			printf("\n %i", matriz[i][j]);
		}else{
			matriz[i][j] = 4*pow(i,3) + 5*pow(j,2) +1;
			printf("\n %i", matriz[i][j]);
		}
		}
	}
}
//Fim main

