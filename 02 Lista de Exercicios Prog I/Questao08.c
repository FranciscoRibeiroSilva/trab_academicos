#include <stdio.h>
#include <stdlib.h>

void main(){
	int valor = 0, result = 0, i = 0, j = 0;
	printf("Informe valor: \n");
	scanf("%i",&valor);
	
	for(j = 0; j <= 10; j++){
			result = j * valor;
			printf("%i x %i = %i\n",valor,j,result);
	}
	printf("\n");
	j = 0;
	result = 0;
	for(j = 0; j <= 10; j++){
			result = valor+j;
			printf("%i + %i = %i\n",valor,j,result);
	}
	printf(" ");
	j = 0;
	result = 0;
	for(j = 0; j <= 10; j++){
			result = valor - j;
			printf("%i - %i = %i\n",valor,j,result);
	}
	printf(" ");
	j = 0;
	result = 0;
	for(j = 0; j <= 10; j++){
			result = j/valor;
			printf("%i / %i = %i\n",j,valor,result);
	}
}