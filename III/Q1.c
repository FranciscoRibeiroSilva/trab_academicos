#include <stdio.h>
#include <stdlib.h>

void main(){
	float notas[7], soma, media;
	int i = 0;
	
	for(i = 0;i <= 7; i++){
		printf("Nota: \n");
		scanf("%f",&notas[i]);
	}
	media = (notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5]+notas[6]+notas[7])/8;
	printf("Media: ");
	printf("%6.1f",media);
}