#include <stdio.h>
#include <stdlib.h>

struct{
	
	char nome[30];
	char esporte[15];
	int idade;
	float altura;
	
}atleta[5];

void main(){
	int i = 0, maiorIdade = 0, maiorAltura = 0, idIdade = 0, idAltura = 0;
	for(i = 0; i < 5; i++){
		
		printf("Nome: \n");
		gets(atleta[i].nome);
		printf("Esporte: \n");
		gets(atleta[i].esporte);
		printf("Idade: \n");
		scanf("%d",&atleta[i].idade);
		printf("Altura: \n");
		scanf("%f",&atleta[i].altura);
		getchar();
		
		if (atleta[i].idade > maiorIdade){
			maiorIdade = atleta[i].idade;
			idIdade = i;
		}
		
		if (atleta[i].altura > maiorAltura){
			maiorAltura = atleta[i].altura;
			idAltura = i;
		}
	
	}
	
	printf("Atleta mais alto\n");
	printf("Nome: %s",atleta[idAltura].nome);
	printf("Atleta mais velho\n");
	printf("Nome: %s",atleta[idIdade].nome);
	
}