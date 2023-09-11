#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char llueve = 's'; 
	
	printf ("Llueve afuera? s/n \n");
	scanf ("%c",&llueve);
	
	if (llueve == 's'){
		printf ("Sali con el paraguas, esta lloviendo");
	} else { 
	  printf ("No lleves el paraguas, no esta lloviendo");
	}
	return 0;
}
