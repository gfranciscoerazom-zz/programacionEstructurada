#include <stdio.h>

int main() {
    printf("Operadores de asignacion");

    int value;

    value = 11;
    printf("\nEl valor de la variable es: %i\n", value);

    value += 1;
    printf("El valor de la variable es: %i\n", value);

    value -= 2;
    printf("El valor de la variable es: %i\n", value);

    value *= 5;
    printf("El valor de la variable es: %i\n", value);

    value /= 4;
    printf("El valor de la variable es: %i\n", value);

    value %= 6;
    printf("El valor de la variable es: %i\n", value);

    return 0;
}