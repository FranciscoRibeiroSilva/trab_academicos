#include <stdio.h>
#include <stdint.h>

void main(){
	
	int i = 0  ;
	int vetorA[10];
	int vetorB[10];
	
	for (i=0; i<10; i++){
		scanf("\n %d", &vetorA[i]);
		if (vetorA[i] % 2 == 0){
			vetorB[i] = (vetorA[i] *5);
		}
		else if (vetorA[i] % 2 == 1){
			vetorB[i] = (vetorA[i] +5);
		}	
	}
	printf("vetor A \t vetor B");
	for (i=0; i<10; i++){
	printf("\n %d \t\t %d ", vetorA[i], vetorB[i]);
	
	}
	getch();
	
}