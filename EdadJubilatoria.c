#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int edad;
	int actualidad = 2023;
	int edadMinimaJubilacion = 65;
	int nacimiento;
	
	printf ("Ingrese su edad \n");
	scanf ("%i",&edad);
	
	nacimiento = actualidad - edad;
	printf ("Su nacimiento fue en %i",nacimiento);
	
	return 0;
}
