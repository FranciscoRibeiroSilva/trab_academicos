#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
float raio = 0, resultado = 0;
void areaDoCirculo(){
	
	scanf("%f",&raio);
	resultado = PI * raio * raio;
	printf("%f",resultado);
}

void main(){
	areaDoCirculo();
}