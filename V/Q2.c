#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void main (){
	
	printf("|   Tipo   |  Tamanho  |\n");
	printf("|   Int    |  %d bytes  |\n",sizeof(int));
	printf("|   Float  |  %d bytes  |\n",sizeof(float));
	printf("|   Char   |  %d bytes  |\n",sizeof(char));
	printf("|   Double |  %d bytes  |\n",sizeof(double));
	
}