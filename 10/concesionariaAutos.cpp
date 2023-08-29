#include <stdio.h>

int main() {
    float valorVehiculo;
    int cantidadVendida;

    printf("Ingrese el valor del vehiculo:\n");
    scanf("%f", &valorVehiculo);

    printf("Ingrese la cantidad vendida:\n");
    scanf("%d", &cantidadVendida);

    float sueldoBase = 500.0;
    float plusVehiculo = valorVehiculo * 0.1;
    float plusConstante = cantidadVendida * 50.0;

    float sueldoTotal = sueldoBase + plusVehiculo + plusConstante;

    printf("El sueldo del vendedor es: %.2f\n", sueldoTotal);

    return 0;
}
