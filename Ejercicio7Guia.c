 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  //HACER ALGORITMO QUE NOS PERMITA INGRESAR UN NUMERO, Y NOS REFIERA SI ES PAR O INPAR.
  
   int numeroIngresado;
  
   printf ("Ingrese un numero: ");
   scanf ("%i",&numeroIngresado); 
   
    if (numeroIngresado %2 == 0) {
    	printf ("%i es par", numeroIngresado);
	} else {
	   printf ("el numero es impar");
	}
  
  
   return 0;  }
   
