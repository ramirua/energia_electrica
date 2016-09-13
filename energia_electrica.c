#include <stdio.h>
#include <stdlib.h>
#define HOGARES 25


int main() 
{
	int num_persona,i;
	float consumo, promedio,pro_zona, total_energia=0, total_consumo;
	char usar, resp;
	char zona[20];


  do{
     	
     	printf("\n\t ingrese la zona: ");
	    fflush(stdin);
		gets(zona);
		for(i=1 ; i<=HOGARES; i++)
		{
        	printf("ingrese la cantidad de personas que habitan en la casa: ");   	 
			scanf("%d", &num_persona);
			printf("ingrese el consumo mensual de la energia electrica: ");	  
			scanf("%f", &consumo);
			printf("condicion habitual: p=casa propia, a=alquilada, m=comodato: ");	 
		    fflush(stdin);
			gets(usar);
	    	promedio=(consumo/num_persona);
		    printf("el promedio por persona de consumo electrico es: %.2f\n\n",promedio);
		    total_energia=total_energia+consumo;
		    total_consumo= total_consumo+consumo;

		}
      	i+=1;
	
	     printf("\n la cantidad de consumo total de energia de la zona es: %.2f",total_energia);
		  fflush(stdin);
		  printf("\n\n\tdesea ingresar otra zona: ");
	      resp=tolower(getch());	
	      fflush(stdin);
	      
 	}while(resp=='s');

     printf("\n la cantidad de consumo total de energia de la zona estudiadas es: %.2f",total_consumo);
	return 0;
}
