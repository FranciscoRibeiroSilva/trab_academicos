//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>
void main(){
	int valor1, valor2, soma;
	
	printf("Informe o valor 1: ");
	scanf("%i",&valor1);
	printf("Informe o valor 2: ");
	scanf("%i",&valor2);
	
	soma = valor1 + valor2;
	
	if (soma > 10) {
		printf("O valor resultante sendo %i maior que 10",soma);
	}
}