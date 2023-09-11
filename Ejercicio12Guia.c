#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int contador=0;
	int contadorimpares=0;
	
	
	while  (contador< 100) { 
	
	  if (contador %2 != 0) {
	  	contadorimpares = contadorimpares + 1;	}
		contador = contador + 1;  
		}
	printf("del 0 al 100 hay %i numeros impares\n", contadorimpares);
	
	return 0;

}
