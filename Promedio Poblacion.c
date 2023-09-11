

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

/*  */

int main(int argc, char *argv[]) {
	
	/* Declaracion de Variables */
	
	int n, i;
	char genero;
	float peso, altura; 
	float pesoH=0, alturaH=0, pesoM=0, alturaM=0; 
	int cantidadhombres = 0;
	int cantidadmujeres = 0;
	float promedio_pesoH, promedio_pesoM, promedio_alturaH, promedio_alturaM;
	
	printf ("Ingrese la cantidad de personas a evaluar: ");
	scanf ("%d",&n); /*Variable N contendra la cantidad de personas a sacar el promedio */
	
	for (i=1; i <= n; i++){
		printf ("\n Ingrese el genero de la persona (H) (M):  ");
		scanf (" %c",&genero);
		
		if (genero == 'M'|| genero == 'm'){
			printf ("Ingrese peso: ");
			scanf ("%f",&peso);
			pesoH += peso; 
			printf ("Ingrese altura");
			scanf ("%f",&altura);
			alturaH += altura; 
			cantidadhombres ++; 
			}
		else if (genero == 'F '||genero == 'f'){
			printf ("Ingrese peso: ");
			scanf ("%f",&peso);
			pesoM +=peso;
			printf ("Ingrese altura");
			scanf ("%f",&altura);
			alturaM+= altura; 
			cantidadmujeres ++;
			}
		else {
			printf ("\n Error"); 	}
			
	}
	
	if (cantidadhombres > 0){
		promedio_pesoH = pesoH / (float) (cantidadhombres);
		promedio_alturaH = alturaH / (float) (cantidadhombres);
			}
	else {
		promedio_pesoH = 0;
		promedio_alturaH = 0;
	}
	if (cantidadmujeres > 0){
		promedio_pesoM = pesoM / (float) (cantidadmujeres);
		promedio_alturaM = alturaM / (float) (cantidadmujeres);
			}
	else {
		promedio_pesoM = 0;
		promedio_alturaM = 0;
	}
	
	printf ("\n El promedio de el peso de los hombres fue de: %2f", promedio_pesoH);
	printf ("\n El promedio de el peso de las mujeres fue de: %2f", promedio_pesoM);
	printf ("\n El promedio de la altura de los hombres fue de: %2f", promedio_alturaH);
	printf ("\n El promedio de la altura de las mujeres fue de: %2f", promedio_alturaM);
	
	
	return 0;
}
