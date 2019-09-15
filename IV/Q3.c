#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int res = 0, a = 0, b = 0, c = 0;

void calcularExpressao(a, b, c){
	res = a + b * (c*c);
	printf("%d",res);
}

void main(){
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	calcularExpressao(a,b,c);
}