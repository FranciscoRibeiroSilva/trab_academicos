#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int i = 0, idades[10];
	char nomes [10][30], sexo[10];
	
	for(i = 0; i < 10; i++){
		printf("Nome: \n");
		gets(nomes[i]);
		printf("\nIdades: \n");
		scanf("%d",&idades[i]);
		printf("\nSexo m ou f: \n");
		scanf("%c",&sexo[i]);
		
		
	}
	for(i = 0; i < 10; i++){
		printf(nomes[i]);
		if((idades[i] >= 18)&&(sexo[i] == 'm')){
			printf("Nome: %s\nIdade: %d\nSexo: %c",nomes[i],idades[i],sexo[i]);
		}
	}
	getch();
}