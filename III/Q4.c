#include <stdlib.h>
#include <stdio.h>
void main()
{
int lista[10];
int i, j, temp;
for (i = 0; i<10; i++)

{
printf("Digite um numero:\n");
scanf("%d",&lista[i]);
}


for (i=0;i<10; i++)
for(j=i+1;j<10;j++)
{
if (lista[i]>lista[j])
{
temp=lista[i];
lista[i]=lista[j];
lista[j]=temp;
}
}

printf("lista na ordem crescente: \n");
for(i=0;i<10;i++)
printf(" %d",lista[i]); 

getch();
}