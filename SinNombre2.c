#include <stdio.h>

/*  */

int main(int argc, char *argv[]) {
	
	/* Declaracion de Variables */
	
	int n, i;
	char genero;
	float peso, altura; 
	float pesoH=0, alturaH=0, pesoM=0, alturaM=0; 
	int cantidadHombres = 0;
	int cantidadMujeres = 0;
	float promedio_pesoH, promedio_pesoM, promedio_alturaH, promedio_alturaM;
	
	printf ("Ingrese la cantidad de personas a evaluar: ");
	scanf ("%i",&n); /*Variable N contendra la cantidad de personas a sacar el promedio */
	
	for (i=1; i <= n; i++){
		printf ("\n Ingrese el genero de la persona (H) (M):  ");
		scanf ("%c",&genero);
		
		if (genero == 'M'|| genero == 'm'){
			printf ("Ingrese peso: ");
			scanf ("%f"&peso);
			pesoH += peso; 
			printf ("Ingrese altura");
			scanf ("%f"&altura);
			alturaH += altura; 
			}
		else if (genero == 'F '||genero == 'f'){
			printf ("Ingrese peso: ");
			scanf ("%f"&peso);
			pesoM +=peso;
			printf ("Ingrese altura");
			scanf ("%f"&altura);
			alturaM+= altura; 
			}
	}
	
	return 0;
}
