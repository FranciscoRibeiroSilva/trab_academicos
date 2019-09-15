#include <stdio.h>
#include <stdlib.h>

void main(){
	int resto = 0, i = 0;
	for (i = 1; i <= 200; i++){
		resto = i % 4;
		if (resto == 0){	
			printf("%i \n",i);
		}
	}
}