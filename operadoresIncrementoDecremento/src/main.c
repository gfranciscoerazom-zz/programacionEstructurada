#include <stdio.h>

int main() {
    printf("Operadores de Incrementro y Decremento\n");

    int value, result;

    value = 25;
    result = value++;
    printf("El resultado es: %i\n", result);
    printf("Value es: %i\n", value);

    value = 25;
    result = ++value;
    printf("El resultado es: %i\n", result);

    value = 25;
    result = value--;
    printf("El resultado es: %i\n", result);

    value = 25;
    result = --value;
    printf("El resultado es: %i\n", result);

    return 0;
}