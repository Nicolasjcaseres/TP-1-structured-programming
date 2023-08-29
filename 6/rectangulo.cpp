#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2;

    printf("Ingrese la longitud del primer lado del rectangulo:\n");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del segundo lado del rectangulo:\n");
    scanf("%f", &lado2);

    float diagonal = sqrt(lado1 * lado1 + lado2 * lado2);
    float superficie = lado1 * lado2;
    float perimetro = 2 * (lado1 + lado2);

    printf("La diagonal del rectangulo es: %.2f\n", diagonal);
    printf("La superficie del rectangulo es: %.2f\n", superficie);
    printf("El perimetro del rectangulo es: %.2f\n", perimetro);

    return 0;
}
