#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int cont =0, i = 0;
	char carac, string[56] = "Um anel para a todos governar Um anel para encontra-los";
	printf("%s",string);
	printf("\n");
	printf("Selecione o caractere: ");
	scanf("%c",&carac);
	
	for(i = 0; i < 56 ; i++){
		if (string[i] == carac){
			cont = cont + 1;
		}	
	}
	
	printf("O caractere %c apareceu %d ", carac, cont);
	
}