#include <stdio.h>

int main() {
    int valorHora = 10;
	float tiempoTrabajado;

    printf("Ingrese el tiempo trabajado (en horas):\n");
    scanf("%f", &tiempoTrabajado);

    float sueldo = valorHora * tiempoTrabajado;

    printf("El sueldo del operario es: %.2f\n", sueldo);

    return 0;
}
