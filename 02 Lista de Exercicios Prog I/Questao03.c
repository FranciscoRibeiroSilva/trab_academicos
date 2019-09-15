#include <stdio.h>
#include <stdlib.h>

void main(){
	int numero = 0, i = 0;
	printf("informe um numero: \n");
	scanf("%i",&numero);
	
	for (i = numero; i > 0; i--){
		printf("%i ",i);
	}
}