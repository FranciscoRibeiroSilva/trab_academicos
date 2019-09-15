#include <stdio.h>
#include <stdlib.h>

void main(){
	int i = 0, soma = 0;
	for (i = 1; i < 10001; i++){
		soma = soma + i;
	}
	printf("%i\n",soma);
}