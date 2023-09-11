#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Ingresar un numero entero y efectuar la suma de todos los numeros que le anteceden, comenzando desde 0 y mostrar el resultado */

int main(int argc, char *argv[]) {
	
	// Declaro variables
    int i;
    int numero;
    int suma = 0;

    printf("Ingrese un numero: ");
    scanf(" %i", &numero);

    for (i = 0; i <= numero; i++)
    {
        suma = suma + i;
    }
    
    printf("%i", suma);
	return 0;
}
