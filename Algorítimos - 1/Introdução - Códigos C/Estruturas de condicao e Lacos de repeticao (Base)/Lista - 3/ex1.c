#include<stdio.h>

int main(void){

	float val1,val2;
	printf("\nDigite um valor: ");
	scanf("%f", &val1);
	printf("\nDigite outro valor: ");
	scanf("%f", &val2);
	
	if(val1 > val2){
        printf("\nO maior e: %.2f", val1);
    }
    else{
            printf("\nO maior e: %.2f", val2);
        }
}
