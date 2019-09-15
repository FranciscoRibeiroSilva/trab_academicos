//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	char letra;
	
	printf("Informe F para feminino e M para masculino: ");
	scanf("%s",&letra);
	
	switch(letra){
		case 'f':
			printf("Sexo: Feminino");
			break;
		case 'F':
			printf("Sexo: Feminino");
			break;
		case 'm':
			printf("Sexo: Masculino");
			break;
		case 'M':
			printf("Sexo: Masculino");
			break;
		default:
			printf("Letra informada invalida");
	}
}