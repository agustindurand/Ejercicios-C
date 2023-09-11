#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int opcion;
    float num1, num2, resultado;

    printf("Calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Resto de division\n");
    printf("0. Salir\n");

    while (1) {
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 0) {
            printf("Adios.\n");
            break;
        }

        if (opcion < 1 || opcion > 5) {
            printf("Opcion invalida. Intente nuevamente.\n");
            continue;
        }

        if (opcion != 5) {
            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("El resultado de la suma es: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("El resultado de la resta es: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("El resultado de la multiplicacion es: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("El resultado de la division es: %.2f\n", resultado);
                } else {
                    printf("No se puede dividir por cero.\n");
                }
                break;
            case 5:
                resultado = (int)num1 % (int)num2;
                printf("El resto de la division es: %.2f\n", resultado);
                break;
        }
    }

    return 0;
}

