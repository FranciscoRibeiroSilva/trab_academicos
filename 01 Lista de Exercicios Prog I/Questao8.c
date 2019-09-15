//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	int opcao, a, b, resultado;
	
	
	printf("Calculadora\n\n\n    1 - Adicao\n    2 - Subtracao\n    3 - Multiplicacao\n    4 - Divisao\n    ");
	scanf("%i",&opcao);
	
	switch(opcao){
		case 1:
			system("cls");
			printf("Adicao\n\n");
			printf("   Informe um valor: ");
			scanf("%i",&a);
			printf("   Informe um valor: ");
			scanf("%i",&b);
			resultado = a + b;
			printf("    %i",resultado);
			break;
		case 2:
			system("cls");
			printf("Subtracao\n\n");
			printf("   Informe um valor: ");
			scanf("%i",&a);
			printf("   Informe um valor: ");
			scanf("%i",&b);
			resultado = a - b;
			printf("    %i",resultado);
			break;
		case 3:
			system("cls");
			printf("Multiplicacao\n\n");
			printf("   Informe um valor: ");
			scanf("%i",&a);
			printf("   Informe um valor: ");
			scanf("%i",&b);
			resultado = a * b;
			printf("    %i",resultado);
			break;
		case 4:
			system("cls");
			printf("Informe valor a ser dividido: ");
			scanf("%i",&a);
			printf("O valor %i sera dividido por: ",a);
			scanf("%i",&b);
			if (a < 0){
				printf("Operacao impossivel valor a se dividido menor que ZERO");
			}
			else{
				resultado = a / b;
				printf("    %i",resultado);
			}
			break;
		default:
			printf("Opcao selecionada invalida");
	}
	
}