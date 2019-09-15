#include <stdint.h>
#include <stdio.h>

void main(){
	char alunos[3][30];
	float notas[3][4], medias[1][3];
	int i;

	for(i = 0; i < 3; i++)
	{
		printf("aluno %d: ", i + 1);
		scanf("%s", alunos[i]);

		printf("nota 1: ");
		scanf("%f", &notas[i][1]);
		printf("nota 2: ");
		scanf("%f", &notas[i][2]);
		printf("nota 3: ");
		scanf("%f", &notas[i][3]);
		medias[1][i] = (notas[i][1] + notas[i][2] + notas[i][3]) / 3;
		printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		printf("aluno : ");
		puts(alunos[i]);
		printf("media : %.1f\n", medias[1][i]);
		
	}
	getch();
}
	