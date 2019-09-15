#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void MaxEMin(int vet[], int *max, int *min){

	int i = 0;
	
	for(i = 0; i < 10; i++){
		
		if (vet[i] > *max){
			
			*max = vet[i];
			
		}
		else {
			
			if (vet[i] < *min){
				
				*min = vet[i];
					
			}
		}
	}
	
}

void main(){
	
	int maior = 0, valores[10], i = 0;
	int menor = maior;
	
	for (i = 0; i < 10; i++){
		
		printf("Coloque o valor \n");
		scanf("%d",&valores[i]);
		
	}
	
	MaxEMin(valores, &maior, &menor);
	
	printf("Maior: %d \nMenor: %d",maior, menor);
	getchar();
	
}