#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Realizar un programa que muestre los numeros pares entre el 1 y el 100 */

int main(int argc, char *argv[]) {
	
	/* Creo una variable y la inicializo en 1 */
	
	int i = 1;
	
	/* Mientras i sea menor o igual a 100 entonces */

	 while (i <= 100) /*Posterior a el While no va punto y coma */
	 
	{
	  
	/* si.. */ 
	 if (i %2 == 0) {
	 	/*Imprimo por pantalla, el numero de i */
	 printf("%i\n", i); 
	}
     /* a la vez, mientras el ciclo se encuentre cumpliendose, ejecuto un contador hasta que llegue a 100 */ 
     
    i = i + 1; 
     }
     
    printf ("Fin del Programa");
	return 0;
}
