#include <stdio.h>
#include <stdlib.h>

void main(){
	int numero = 0, i = 1;
	
	printf("Informe um numero: \n");
	scanf("%i",&numero);
	
	for (i = 1; i <= numero; i++){
		printf("%i ",i);
	}
	
}