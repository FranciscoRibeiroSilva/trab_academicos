#include <stdio.h>
#include <stdlib.h>


int numero = 0, i = 0, fatorial = 1, resultado = 0;


int calculaFatorial(numero){
	for(i = 1; i <= numero; i++){
		fatorial = fatorial * i;
	}
	return fatorial;
}

void main(){
	scanf("%d",&numero);
	resultado = calculaFatorial(numero);
	
}