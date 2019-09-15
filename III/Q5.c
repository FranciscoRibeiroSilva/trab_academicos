#include <stdio.h>


void main () {
int x,y,tam;
char nome[30];

printf("Digite uma palavra");

scanf("%s",nome);

tam=strlen(nome);

printf("\nApalavra inversa é:");

for (x=tam-1; x>=0; x--)

printf("%c",nome[x]);

printf("\n\n");
getch();

}

