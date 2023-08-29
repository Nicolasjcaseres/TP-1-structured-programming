#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero:\n");
    scanf("%d", &num3);

    int suma1 = num1 + num2;
    int suma2 = suma1 + num3;

    printf("La suma de los tres numeros es: %d\n", suma2);

    return 0;
}
