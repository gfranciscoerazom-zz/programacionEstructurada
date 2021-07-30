#include <stdio.h>

float operacionExponente(float base, int exponent) {
    float result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    float base;
    int exponente;

    printf("Ingresa la base: ");
    scanf("%f", &base);

    printf("Ingresa el exponente: ");
    scanf("%i", &exponente);

    printf("El resultado es: %f", operacionExponente(base, exponente));

    return 0;
}