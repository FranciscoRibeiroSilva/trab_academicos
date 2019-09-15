#include <stdio.h>
#include <stdlib.h>

int cont = 0;
//Definição dos atribudos de um contato.
struct{
	char nome [30], numero[30];
}pessoas[100];

//Declaração da função que lista os contatos.
void listar(){
	system("cls");
	int i = 0;
	printf("Lista de contatos");
	for(i = 0; i <= cont; i++){
		printf("Nome: %s\n Numero: %s\n",pessoas[cont].nome,pessoas[cont].numero);
	}	
	getchar();
	//system("cls");
	//menu();
}

//Declaração da função que cria novos contatos.
void guardar(){
	system("cls");
	printf("Criando novo contato\n Nome:");
	scanf("%s",&pessoas[cont].nome);
	printf("Numero de telefone");
	scanf("%s",&pessoas[cont].numero);
	cont++;
	
	getchar();
	system("cls");
	menu();
}

//Declaração da função que exibe o menu principal.
void menu(){
	system("cls");
	int opcao = 0;
	printf("Agenda\nSelecione sua opcao:\n 1.Criar novo contato.\n 2.Listar contatos.\n 3.Sair.");
	
	scanf("%d",&opcao);
		printf("%s",pessoas[0].nome);
	switch(opcao){
		
		case 1:
			guardar();
			break;
		case 2:
			listar();
			break;
		case 3:
			exit(1);
		default:
			printf("Opicao invalida");
	}
	
}

void main(){
	menu();
	printf("%s",pessoas[0].nome);
}