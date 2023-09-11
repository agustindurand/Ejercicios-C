#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	printf ("Numero uno es %i\n",num1);
	printf ("Numero dos es %i",num2);
	
	return 0;
}

