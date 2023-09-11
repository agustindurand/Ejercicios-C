 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  // SUPERFICIE DE TRIANGULO A PARTIR DE SU BASE Y ALTURA
  
   int base;
   int altura;
   int superficie; 
   
   printf ("Ingrese base del Triangulo: ");
   scanf ("%i",&base );
   
    printf ("Ingrese altura del Triangulo: ");
    scanf ("%i",&altura );
   
   superficie =  (base * altura / 2) ;
   
   printf ("el resultado es %i", superficie);
   return 0;  }
   
