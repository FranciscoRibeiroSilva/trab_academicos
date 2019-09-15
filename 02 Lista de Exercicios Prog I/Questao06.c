#include <stdio.h>
#include <stdlib.h>

void main(){
	int valor = 1, soma = 0, contador = -1, media = 0;
	while( valor != 0){
		printf("Informe um valor: \n");
		scanf("%i",&valor);
		soma = soma + valor;
		contador++;
		
	}
	
	media = soma/contador;
	printf("Media dos numeros: %i ",media);
}