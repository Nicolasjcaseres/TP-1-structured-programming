#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Ingrese el primer valor:\n");
    scanf("%f", &valor1);

    printf("Ingrese el segundo valor:\n");
    scanf("%f", &valor2);

    float suma = valor1 + valor2;
    float producto = valor1 * valor2;
    float resta = valor1 - valor2;

    printf("La suma de los valores es: %.2f\n", suma);
    printf("El producto de los valores es: %.2f\n", producto);
    printf("La resta del primer valor menos el segundo valor es: %.2f\n", resta);

    return 0;
}
