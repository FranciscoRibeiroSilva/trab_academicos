#include <stdio.h>
#include <stdint.h>
void main(int argc, char** argv)
{
	int matriz[4][5],i ,j;
	
	printf("insira os numeros\n");
	for (i=0; i<4; i++)
		for (j =0; j<5; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
    printf("saida de dados\n");
  	for (i=0; i<4; i++)
		for (j =0; j<5; j++)
		{
			printf("linha :%d \t coluna:%d\t =%d \n",i,j,matriz[i][j]);
		}
	getch();
	
}