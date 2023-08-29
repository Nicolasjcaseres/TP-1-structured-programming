#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
	int num1=0;
	int num2=0;
	
	printf("Ingrese el primer numero:\n");
	scanf ("%d", &num1);
	printf("Ingrese el segundo numero:\n");
	scanf ("%d", &num2);
	
	int suma=num1+num2;
	
	printf("La suma de los numeros es: %d\n", suma);
}


