#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Diseñar el algoritmo necesario para habiéndose leído el valor de 2 variables NUM1 y
NUM2 se intercambien los valores de las variables, es decir que el valor que tenía
NUM1 ahora lo contenga NUM2 y viceversa. */ 

int main(int argc, char *argv[]) {
	
	int num1;
	int num2; 
	int variable_auxiliar;
	
	printf ("Ingrese valor de Numero uno: ");
	scanf ("%i", &num1);
	printf ("Ingrese valor de Numero dos: ");
	scanf ("%i", &num2);
	
	variable_auxiliar = num1;
	num1 = num2;
	num2 = variable_auxiliar;
	
	printf ("Numero uno es %i",num1);

	 
	return 0;
}
