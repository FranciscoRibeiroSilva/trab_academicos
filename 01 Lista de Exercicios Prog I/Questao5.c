//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	int numero;
	
	printf("Informe um numero: ");
	scanf("%i",&numero);
	
	if  ( numero % 2 == 0){
		printf("O numero par");
	}
	else {
		printf("O numero impar");
	}
}