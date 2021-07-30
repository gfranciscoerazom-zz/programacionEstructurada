#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int main() {
    printf("Funciones!\n");

    int additionResult = addition(3, 4);
    printf("El resultado es: %i", additionResult);

    return 0;
}