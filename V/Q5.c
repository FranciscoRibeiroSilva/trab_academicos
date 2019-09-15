#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int * Vetor (int tamanho);

void main(){

	int *vetor, i, tamanh;
	
	printf("O tamanho do vetor desejado");
	scanf("%d",&tamanh);
	
	vetor = Vetor(tamanh);
	
	if (vetor != NULL){
		
		for (int i = 0; i < tamanh; i++){
			
			printf("Informe valor: ");
			scanf("%d",&vetor[i]);
		
		}
				
		printf("Vetor...");
			
		for (int i = 0; i < tamanh; i++){
			
			printf("%d",vetor[i]);
			
		}
		
	}
	else{
		
		prinf("Impossivel alocar!\n");
		
	}
	
	free(vetor);
	
}
int * Vetor(int tamanh){
	
	if (tamanh <= 0){
		
		return NULL;
		
	}
	
	return (int *) malloc(sizeof (int) * tamanh);
	
}