#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct{
	
	char matricula[7], nome[30];
	float notas[3];
	
}aluno;

void main(){
	
	printf("tamanho da Struct aluno: %d bytes",sizeof(aluno));
	
}