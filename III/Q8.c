#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	char nome1[30], nome2[30];
	int i;

	printf("insira o primeiro nome: ");
	gets(nome1);

	printf("insira o segudno nome: ");
	gets(nome2);

	printf("ordem alfabetica\n");
	
	if(strcmp(nome1, nome2) < 0){
		printf("\n%s\n%s\n", nome1, nome2);
	}else if(strcmp(nome1, nome2) > 0){
		printf("\n%s\n%s\n", nome2, nome1);
	}
	getch ();
}

	
	
	