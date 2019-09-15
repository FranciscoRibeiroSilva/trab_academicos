#include <stdio.h>
#include <stdlib.h>
void tabuada(numero){
	int resultado = 0,i = 0;
	float res = 0.0;
	for(i =0; i <= 10; i++){
		resultado = numero+i;
		printf("%d + %d = %d\n",numero,i,resultado);
	}
	printf("\n");
	for(i =0; i <= 10; i++){
		resultado = numero-i;
		printf("%d - %d = %d\n",numero,i,resultado);
	}
	printf("\n");
	for(i =0; i <= 10; i++){
		resultado = i*numero;
		printf("%d * %d = %d\n",numero,i,resultado);
	}
	printf("\n");
	for(i =0; i <= 10; i++){
		res = numero/i;
		printf("%d : %d = %f\n",numero,i,res);
	}
}

int main(){
	int numero = 0;
	scanf("%d",&numero);
	tabuada(numero);
	
	return 1;
}