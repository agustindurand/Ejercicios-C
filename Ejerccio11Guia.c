#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroSemanal;
	char respuesta;
	
	printf ("Desea iniciar el programa s/n: ");
	scanf ("%c",&respuesta);
	
	while (respuesta == 's')
	{
		printf ("Ingrese un numero del 1 al 7\n");
		scanf ("%i",&numeroSemanal);
		
	if (numeroSemanal == 1)
	{
		printf("Es Lunes\n");
	}
		else if (numeroSemanal == 2){
		printf("Es Martes\n");
	}
		else if (numeroSemanal == 3){
		printf("Es Miercoles\n");
	}
		else if (numeroSemanal == 4){
		printf("Es Jueves\n");
	}
		else if (numeroSemanal == 5){
		printf("Es Viernes\n");
	}
		else if (numeroSemanal == 6){
		printf("Es Sabado\n");
	}
		else if (numeroSemanal == 7){
		printf("Es Domingo\n");
	}
	 else {

	  printf("Error"); 	 }
	  
	  printf("Desea seguir continuando con el programa s/n: ");
      scanf(" %c", &respuesta);
		
	}
	 
	 printf("Fin del programa");

	
	return 0;
}
