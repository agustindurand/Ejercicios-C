#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	 const int numero_personasAgendadas;
	 
	  int i;
	// Estructura en donde se va a recabar la informacion de la persona, solicitando su nombre, apellido, dni, telefono, y fecha de cumpleaños //
	
	typedef struct {
    char nombre;
    char apellido;
    int dni;
    char telefono[20];
    char fecha[20];
} Persona;

	
	int contadorPersonas = 0; // Contador de personas en la agenda //
	Persona agenda[numero_personasAgendadas]; // Se crea un arreglo llamado Agenda, de la estructura tipo Persona, almacenando sus valores en la constante antes declarada//
	
	void agregarPersona() { //Funcion para agregar persona a la agenda, no va a devolver ningun tipo de valor // 
    if (contadorPersonas >= numero_personasAgendadas) { //Condicional que se ejecuta inicializado en 0, que mientras no sea mayor al numero_personasAgendadas, no muestra mensaje de error// 
        printf("La agenda está llena. No se pueden agregar más personas.\n");
        return;
    }

    Persona nuevaPersona; //Se declara variable de nuevaPersona de la estructura Persona para guardar lo que ingrese el usuario, se va a guardar en nombre y apellido de la estructura //
    printf("Ingrese el nombre: ");
    scanf("%s", nuevaPersona.nombre);
    printf("Ingrese el apellido: ");
    scanf("%s", nuevaPersona.apellido);

    int dni;
    bool dniExistente;
    do {
        printf("Ingrese el DNI: ");
        scanf("%d", &dni);
        
        dniExistente = false;
       
        for (int i = 0; i < contadorPersonas; i++) {
            if (agenda[i].dni == dni) {
                dniExistente = true;
                break;
            }
        }
        
        if (dniExistente) {
            printf("El DNI ingresado ya existe. Por favor, ingrese otro.\n");
        }
    } while (dniExistente);

    nuevaPersona.dni = dni;
    
    printf("Ingrese el teléfono: ");
    scanf("%s", nuevaPersona.telefono);
    printf("Ingrese la fecha de cumpleaños (DD/MM/AAAA): ");
    scanf("%s", nuevaPersona.fechaCumple);

    agenda[contadorPersonas] = nuevaPersona;
    contadorPersonas++;
    
    printf("Persona agregada correctamente.\n");
}

	return 0;
	
}
