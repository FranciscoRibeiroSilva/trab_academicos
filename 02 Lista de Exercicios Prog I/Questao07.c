#include <stdio.h>
#include <stdlib.h>

void main(){
	int i = 0, fatorial = 1, valor = 0;
	printf("Informe o valor: \n");
	scanf("%i",&valor);
	
	for (i = 1; i <= valor; i++){
		fatorial = fatorial * i;
	}
	
printf("Ftorial de %i: %i",valor,fatorial);

}