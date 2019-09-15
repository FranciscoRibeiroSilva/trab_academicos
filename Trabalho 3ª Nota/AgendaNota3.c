#include <stdio.h>
#include <stdlib.h>
//Programa Agenda para terceira nota.

//Definição dos atribitos de um contato.
struct 
{
	char nome[30], sobrenome[30], numero[15];
}contatos[100];
int cont = 0;

//Declaração das fuções.
void guardar();
void listar();
void menu();

//Função main
int main(){
	
	//Chamada de função
	 menu();
	 
return 1;	
}

//Função que cria novo contato
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
	//Chamada de função
	menu();
}

//Função que lista os contatos
void listar(){
	int i = 0;
	for(i = 0; i <= cont; i++){
		printf("Nome: %s %s\nNumero: %s\n",contatos[i].nome,contatos[cont].sobrenome,contatos[i].numero);
		printf("");
	}
	system("pause");
	system("cls");
	//Chamada de função
	menu();
}

//Função que exibe o menu principal
void menu(){
	
	//Texto do menu principal
	printf(" 1.Criar contato.\n 2.Listar contatos.\n 3.Sair\n");
	
	//Opção do switch
	int opcao = 0;
	scanf("%d",&opcao);
	
	//Switch do menu principal
	switch(opcao){
			case 1:
				system("cls");
				//Chamada de função
				guardar();
				break;
			case 2:
				system("cls");
				//Chamada de função
				listar();
				break;
			case 3:
				//Encerra aplicação
				system("pause");
			default:
				//Tratamento
				printf("Opcao invalida!\n");
	}
}
