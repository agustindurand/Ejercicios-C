#include <stdio.h>



int main(int argc, char *argv[]) {
	
int i;
int num;
int max;
int min;

for( i = 0; i < 10; i++){

	// Ingreso un numero que sera guardado en la variable num
	printf("Ingrese un numero: ");
	scanf(" %i", &num);
	
	//Realizo la comparacion de maximos y minimos
	
	if( i = 0){
		// Como i = 0 es la primera iteracion el primer numero que ingrese no tiene otro numero contra que comparar por lo que sera tanto maximo como minimo ese numero
		max = num;
		min = num;
	}else {
		// En las siguentes iteraciones (de 1 a 9) van a caer aca y voy a tener un numero contra que comparar una y otra vez hasta que termine el ciclo
		// Realizo la comparacion ahora 

		if(num > max){
			max = num;
		}
		if(num < min){
			min = num;
		}
	
	}
}

printf("EL maximo ingresado fue: %i\n", max);
printf("El minimo ingresado fue: %i\n", min);
	
	return 0;
}
