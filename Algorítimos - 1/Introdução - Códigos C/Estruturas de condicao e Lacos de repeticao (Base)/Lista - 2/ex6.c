#include<stdio.h>

int main(void){
	float premio = 780000.00, p,s,t;
	p = premio*0.46;
	s = premio*0.32;
	t = premio-(p+s);
	
	printf("\nO Primeiro recebera: %.2f", p);
	printf("\nO Segundo recebera: %.2f", s);
	printf("\nO Terceiro recebera: %.2f", t);
}
