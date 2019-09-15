#include <stdio.h>
#include <stdlib.h>

struct contatos{
	char nome[30];
	char numero[15];
};

void guardar(struct contatos contato){
	
	printf("Nome: ");
	scanf("%s",&contato.nome);
	printf("\nNumero: ");
	scanf("%s",contato.numero);
}

void listar(struct contatos contato){
		printf("%s",contato.nome);
}


int main(){
	struct contatos pessoas[100];
	int cont = 0;
	int opcao = 0;
	int sair = 1;
	int i = 0;
	
	while (sair != 3){
		system("cls");
		printf("Agenda\n");
		printf("Pressione para selecionar\n");
		printf(" 1.Criar contato.\n 2.Listar contatos.\n 3.Sair\n");
		scanf("%d",&opcao);	
		switch(opcao){
			case 1:
				guardar(pessoas[cont]);
				cont++;
				break;
			case 2:
				printf("ahhhh");
				for(i = 0; i < 100; i++){
					printf("%s",pessoas[0].nome);
					system("pause");	
				}

			default:
		printf("Opcao invalida");
		}
	}
	return 0;
}