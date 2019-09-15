#include <stdio.h>
#include <stdlib.h>

void main(){
	int quadrado = 0, i = 15;
	while(i != 201){
		quadrado = i*i;
		printf("Quadrado de %i: %i\n",i,quadrado);
		i++;
	}
}