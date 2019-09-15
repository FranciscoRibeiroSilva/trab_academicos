#include <stdio.h>
#include <stdlib.h>

struct tempo{
	int hora;
	int minutos;
	int segundos;
};
void main(){
	
	struct tempo horas[5];
	int i = 0, maiorHora[3];
	
	for (i = 0; i < 5; i++){
		printf("Hora: \n");
		scanf("%d",&horas[i].hora);
		printf("Minutos: \n");
		scanf("%d",&horas[i].minutos);
		printf("Segundos: \n");
		scanf("%d",&horas[i].segundos);
		getchar();
		
		if (horas[i].hora > maiorHora[0]){
			
			maiorHora[0] = horas[i].hora;
			maiorHora[1] = horas[i].minutos;
			maiorHora[2] = horas[i].segundos;
			
		}
		else{
			
			if (horas[i].hora == maiorHora[0]){
				
				if (horas[i].minutos > maiorHora[1]){
					
					maiorHora[1] = horas[i].minutos;
					
				}
				
				else{
					
					if (horas[i].minutos == maiorHora[1]){
						
						if (horas[i].segundos > maiorHora[2]){
							
							maiorHora[2] = horas[i].segundos;
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	printf("%d h %d min %d seg",maiorHora[0], maiorHora[1], maiorHora[2]); 
	
}