#include <stdio.h>

int main() {
    float valorHora, tiempoTrabajado;

    printf("Ingrese el valor de la hora de trabajo:\n");
    scanf("%f", &valorHora);

    printf("Ingrese las horas trabajadas:\n");
    scanf("%f", &tiempoTrabajado);

    float sueldo = valorHora * tiempoTrabajado;

    printf("El sueldo del operario es: %.2f\n", sueldo);

    return 0;
}
