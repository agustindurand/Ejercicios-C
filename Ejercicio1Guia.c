
# include  <stdio.h>

int  main ( int argc, char  const *argv[])
{
    // DETERMINAR LA MEDIA DE CINCO NUMEROS 

    int numeroUno; 
    int numeroDos; 
    int numeroTres; 
    int numeroCuatro; 
    int numeroCinco; 
    int promedio;
    
    printf ("Ingrese el numero Uno");
    scanf ("%i",&numeroUno );
    
     printf ("Ingrese el numero Dos");
    scanf ("%i",&numeroDos);
    
     printf ("Ingrese el numero Tres");
    scanf ("%i",&numeroTres);
    
     printf ("Ingrese el numero Cuatro");
    scanf ("%i",&numeroCuatro);
    
     printf ("Ingrese el numero Cinco");
    scanf ("%i",&numeroCinco);
    
    promedio = (numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco) / 5 ;
    printf ("El promedio de la media de esos numeros es %i", promedio);

    return  0 ;
}
