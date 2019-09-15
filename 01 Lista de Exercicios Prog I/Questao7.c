//Bloco 2 C.C Lista de exercicios 01 Prgramacao I 23/09/18
//Francisco Ribeiro Silva
#include <stdio.h>
#include <stdlib.h>

void main(){
	float salario;
	
	printf("Informe o salario: ");
	scanf("%f",&salario);
	
	if (salario < 500){
		
		salario = (salario*0.15)+salario;
		printf("%f",salario);
	}
	else{
		if ((salario >= 500)&&(salario <= 1000)){

            salario = (salario*0.10)+salario;
            printf("%f",salario);
		}
		else{
			
			salario = (salario*0.05)+salario;
			printf("%f",salario);
		}
	}
}