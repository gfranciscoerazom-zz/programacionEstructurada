#include <stdio.h>

int main() {
    printf("Iterador For");

    int upperLimit, bottomLimit;

    printf("Imprimir en orden descendiente\n");

    printf("Ingresa el limite superior: ");
    scanf("%i", &upperLimit);

    printf("Ingresa el limite inferior: ");
    scanf("%i", &bottomLimit);

    for (int i = upperLimit; i >= bottomLimit; i--) {
        printf("Número es: %i\n", i);
    }

    return 0;
}