 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  //Escribir algoritmo que salude
  
   char saludo; 
   
   printf ("Usted desea un saludo? Ingrese (s o n): ");
   scanf ("%c",&saludo); 
   
   if (saludo == 's'){
   	 printf ("Hola, te estoy saludando");
   }
    else {
    	printf ("");
	}
  
   return 0;  }
   
  

