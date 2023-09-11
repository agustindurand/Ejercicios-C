 #include <stdio.h>
 
  int  main ( int argc, char  const *argv[]){
  
  
  // INGRESAR UN NUMERO POR TECLADO Y QUE NOS INFORME SI ES POSITIVO O NEGATIVO
  
  int numeroIngresado;
  
  
  printf ("Ingrese un numero: ");
  scanf ("%i",&numeroIngresado);
  
    if (numeroIngresado < 0){
    	printf ("El numero es negativo");
		}
	else if (numeroIngresado > 0){
	    printf ("El numero es positivo");
		 } 

  
  
   return 0;  }
   
