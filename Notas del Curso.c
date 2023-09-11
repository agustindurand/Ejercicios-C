#include <stdio.h>


/* Preguntar un programa que solicite cantidad de estudiantes de un curso, ingresar por cada estudiante su inicial y su nota, mostrar
la inicial y la nota del estudiante con mayor nota y el promedio de todas las notas */

int main(int argc, char *argv[]) {
	
	   
int cantidadEstudiantes, i ;
char inicialEstudiante;
float notaEstudiante, maxNota = 0, sumaNotas = 0;
char inicialMaxNota;
    

  
printf("Ingrese la cantidad de estudiantes: ");
scanf("%d", &cantidadEstudiantes);
    
    
for ( i = 1; i <= cantidadEstudiantes; i++) {
        
printf("\nEstudiante %d:\n", i);
        
        
        
       

        
printf("Ingrese la inicial del estudiante: ");
        
       
scanf(" %c", &inicialEstudiante);
        
        
        
       

        
printf("Ingrese la nota del estudiante: ");
        
       
scanf("%f", &notaEstudiante);
        
        sumaNotas += notaEstudiante;
        
        
        
        sumaNotas += notaEstudiante;
        
       

        
        sumaNotas += notaEstudiante;
        

        
        sumaNotas += notaEstudiante;

        
       

        
if (notaEstudiante > maxNota) {
            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;
        }
    }
    
    
            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;
        }
    }
    
   

            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;
        }
    }
    

            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;
        }

            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;
       

            maxNota = notaEstudiante;
            inicialMaxNota = inicialEstudiante;

            maxNota = notaEstudiante;
           

            maxNota = notaEstudiante;

           
float promedioNotas = sumaNotas / cantidadEstudiantes;
    
    
    
   

    
printf("\nEstudiante con mayor nota:\n");
    
   
printf("Inicial: %c\n", inicialMaxNota);
    
   
printf("Nota: %.2f\n", maxNota);
    
    
    
   

    
printf("\nPromedio de todas las notas: %.2f\n", promedioNotas);
    
    
    
   

    
return 0;
}

}
``

}
	return 0;
}
	/*
	int cantidad_estudiantes, i, cont; 
	char inicial;
	float nota, promedio;
	float notamax; 
	
	printf ("Ingrese cantidad de estudiantes del curso:  ");
	scanf ("%i",&cantidad_estudiantes);
	
	for (i=0; i<cantidad_estudiantes; i++) {
		printf ("Ingrese inicial del estudiantes: ");
		scanf (" %c",&inicial);
		printf ("Ingrese nota del estudiante: ");
		scanf ("%i", &nota);
		cont++;
		 if (cont == 1){
		 	notamax = nota; 
		 }	
		 else {
		 	if (nota > notamax);
		 		printf ("La mejor nota fue de %2.f", notamax);
		 }	
       	}
		 */
