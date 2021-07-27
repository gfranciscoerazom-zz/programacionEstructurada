#include <stdio.h>

int main() {
    int num1, num2;

    printf("Te deré el numero menor de dos números enteros");
    printf("\nIngresa el primer número: ");
    scanf("%i", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%i", &num2);

    if (num1 < num2)
        printf("El número menor es: %i", num1);
    else
        printf("El número menor es: %i", num2);

    return 0;
}