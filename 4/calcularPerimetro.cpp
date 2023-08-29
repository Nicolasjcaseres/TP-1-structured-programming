#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3;

    printf("Ingrese la longitud del primer lado del triangulo:\n");
    scanf("%f", &lado1);
    printf("Ingrese la longitud del segundo lado del triangulo:\n");
    scanf("%f", &lado2);
    printf("Ingrese la longitud del tercer lado del triangulo:\n");
    scanf("%f", &lado3);

    float perimetro = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %.2f\n", perimetro);

    return 0;
}
