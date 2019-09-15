//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	int numero;
	
	printf("Informe um valor inteiro negativo ou positivo: ");
	scanf("%i",&numero);
	
	if (numero < 0 ){
		numero = numero * -1;
	}
	printf("Valor: %i ",numero);
}