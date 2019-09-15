#include <stdio.h>
#include <stdlib.h>

void main(){
	int i = 0, extra = 0, a = 0, b = 1, sequencia = 0;
	
	
	printf("Informe o valor numerico\n");
	scanf("%i",&sequencia);
	
	
	for (i = 0; i <= sequencia; i++){
	
	
		extra = a + b;
		a = b;
		b = extra;
		printf("%i \n",extra);
		
		
	}
}