//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int a, b, extra;
	
	printf("Informe um valor interio: ");
	scanf("%i",&a);
	printf("informe um valor inteiro: ");
	scanf("%i",&b);
	
	if (a > b){
		extra = a;
		a = b;
		b = extra;
	}
	printf("%i, %i",a,b);
}