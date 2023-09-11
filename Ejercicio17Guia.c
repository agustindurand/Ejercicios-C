#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* CODIFICAR UN PROGRAMA QUE MUESTRE LOS MULTIPLOS DE 2 Y DE 3, ENTRE 0 Y 100 */

int main(int argc, char *argv[]) {
	
	int i=0;
	
	while ( i <= 100) {
		i = i + 1; { 
		if (i%2==0) 
			printf ("%i\n", i);
	   else if (i%3==0) 
			printf ("%i\n", i);
				}
	}
	return 0;
}
