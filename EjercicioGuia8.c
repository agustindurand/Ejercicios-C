 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  //Escribir el algoritmo que permita leer un numero decimal que representa una cantidad de grados Celsius y convierta dicho valor a la cantidad equivalente en grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100 grados Celsius son 212 grados Fahrenheit. // 
  
  
  float gradoCelsius; 
  float gradoFahreneit;
  
   printf ("Ingrese la cantidad de grados Celsius: ");
   scanf ("%f",&gradoCelsius);
   
   gradoFahreneit = ( ( gradoCelsius * 9/5) + 32) ; 
   
   printf ("%f grados Celsius son %f grados Fahreneit", gradoCelsius, gradoFahreneit);
  
   return 0;  }
   
