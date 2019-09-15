#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
int i = 0, cont = 0, j = 0;
char dados[50], invertido[50];
	printf("Digite a sequ%cncia:\n\n");
		gets(dados);
while (dados[i] != '\0'){
	cont++;
	i++;
}
printf("Ordem inversa:\n");
	for(i = cont; i >= 0; i--){
		if (dados[i] != '\0')
	{
printf("%c", dados[i]);
	invertido[j] = dados[i];
		j++;
}   
}
	invertido [j] = '\0';
		if(strcmp(dados, invertido) == 0){
	printf("\n Palindromo!\n");
}
	else{
	printf("\n	nao palindromo!\n");
} 
	printf("\n\n");  
	getch();
}