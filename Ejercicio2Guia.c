 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  // DISEÑAR UN ALGORITMO PARA CALCULAR Y MOSTRAR EL CUADRADO DE UN NUMERO, EN CASO DE QUE EL NUMERO INGRESADO SEA MENOR A 0, MOSTRAR "ERROR EL NUMERO DEBE SER MAYOR A 0"
  
 int numeroIngresado; 
 int cuadrado;
 
 printf ("Ingrese un numero: ");
 scanf ("%i",&numeroIngresado);
 
  if (numeroIngresado > 0){
  	cuadrado = numeroIngresado * numeroIngresado; 
  	printf ("El cuadrado del numero es %i", cuadrado); }
  else  {
    printf ("Error el numero debe ser mayor a 0");
	}
  	
  
   return 0;  }
   
