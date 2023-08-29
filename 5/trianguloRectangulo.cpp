#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2;

    printf("Ingrese la longitud del primer lado del triangulo rectangulo:\n");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del segundo lado del triangulo rectangulo:\n");
    scanf("%f", &lado2);

    float hipotenusa = sqrt(lado1 * lado1 + lado2 * lado2);
    float perimetro = lado1 + lado2 + hipotenusa;
    float area = 0.5 * lado1 * lado2;

    printf("La hipotenusa del triangulo rectangulo es: %.2f\n", hipotenusa);
    printf("El perimetro del triangulo rectangulo es: %.2f\n", perimetro);
    printf("El area del triangulo rectangulo es: %.2f\n", area);

    return 0;
}
