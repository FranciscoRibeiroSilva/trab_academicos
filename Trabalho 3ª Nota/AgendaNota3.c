#include <stdio.h>
#include <stdlib.h>
//Programa Agenda para terceira nota.

//Defini��o dos atribitos de um contato.
struct 
{
	char nome[30], sobrenome[30], numero[15];
}contatos[100];
int cont = 0;

//Declara��o das fu��es.
void guardar();
void listar();
void menu();

//Fun��o main
int main(){
	
	//Chamada de fun��o
	 menu();
	 
return 1;	
}

//Fun��o que cria novo contato
void guardar(){
	printf("Nome:");
	scanf("%s",&contatos[cont].nome);
	printf("Sonrenome:");
	scanf("%s",contatos[cont].sobrenome);
	printf("\nNumero:");
	scanf("%s",contatos[cont].numero);
	cont++;
	
	system("pause");
	system("cls");
	//Chamada de fun��o
	menu();
}

//Fun��o que lista os contatos
void listar(){
	int i = 0;
	for(i = 0; i <= cont; i++){
		printf("Nome: %s %s\nNumero: %s\n",contatos[i].nome,contatos[cont].sobrenome,contatos[i].numero);
		printf("");
	}
	system("pause");
	system("cls");
	//Chamada de fun��o
	menu();
}

//Fun��o que exibe o menu principal
void menu(){
	
	//Texto do menu principal
	printf(" 1.Criar contato.\n 2.Listar contatos.\n 3.Sair\n");
	
	//Op��o do switch
	int opcao = 0;
	scanf("%d",&opcao);
	
	//Switch do menu principal
	switch(opcao){
			case 1:
				system("cls");
				//Chamada de fun��o
				guardar();
				break;
			case 2:
				system("cls");
				//Chamada de fun��o
				listar();
				break;
			case 3:
				//Encerra aplica��o
				system("pause");
			default:
				//Tratamento
				printf("Opcao invalida!\n");
	}
}
