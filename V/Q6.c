#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

char* inverterString(char string[]);

void main(){
	
	char string[30], * invertida;
	
	printf("String: \n");
	scanf("%s",string);
	
	invertida = inverteString(string);
	
	if (invertida == NULL){
		
		printf("Insuficiencia de memoria \n");
		
	}
	else{
		
		printf("String: %s \n",string);
		printf("Invertida: %s \n",ivertida);
		
	}
	
	free(invertida);
	
}

char* inverterString (char string[]){
	
	int tamanho = strlen(string), i;
	char invertida = (char) malloc(sizeof (char) * tamanho);
	
	if(invertida == NULL){
		
		return NULL;
		
	}
	
	for(i = 0; i < tamanho; i++){
		
		invertida[i] = string[tamanho - 1 - i];
		
	}
	
	return invertida;
	
}

