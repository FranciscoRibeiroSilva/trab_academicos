#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void main(){
	
	int tamanho, *vetor, i = 0;
	
	printf("Entre com o tamanho da alocacao\n");
	scanf("%d",&tamanho);
	
	vetor = (int*) malloc(sizeof(int)*tamanho);
	
	for(i = 0; i < tamanho; i++){
		
		printf("Informe valor:\n");
		scanf("%d",&velor[i]);
		
	}
	
	printf("Valores do vetor:\n");
	
	for(i = 0; i < tamanho; i++){
		
		printf("%d ",vetor[i]);
		
	}
	
	free(vetor);
}