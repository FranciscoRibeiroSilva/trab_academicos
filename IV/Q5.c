#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct{
	char matricula[6];
	char nome[30];
	float notas[3];
}aluno[5];

void main(){
	int i = 0, j = 0;
	float soma, media = 0, maior = 0;
	int ind = 0;
	for (i = 0; i < 5; i++){
		printf("Numero de matricula: \n");
		gets(aluno[i].matricula);
		printf("Nome : \n");
		gets(aluno[i].nome);
		for(j = 0; j < 3; j++){
			printf("Insira a nota: \n");
			scanf("%f",&aluno[i].notas[j]);
			soma += aluno[i].notas[j];
			getchar();
		}
		media = soma/3;
		if (media > maior){
			maior = media;
			ind = i;
		}
		
	}
	printf("Aluno com maior media. \n");
	printf("Nome: %s\n",aluno[ind].nome);
	printf("Matricula: %s\n",aluno[ind].matricula);
	printf("Notas: ");
	for(j = 0; j < 3; j++){
		printf("%f, ",aluno[ind].notas[j]);
	}
}