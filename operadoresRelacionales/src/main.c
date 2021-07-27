#include <stdio.h>

int main() {
    float valueA = 5;
    float valueB = 10;

    printf("Operadores relacionales\n");

    if (valueA < valueB)
        printf("Pregunta 1: Cierto\n");
    else
        printf("Pregunta 1: Falso\n");

    if (valueA <= valueB)
        printf("Pregunta 2: Cierto\n");
    else
        printf("Pregunta 2: Falso\n");

    if (valueA > valueB)
        printf("Pregunta 3: Cierto\n");
    else
        printf("Pregunta 3: Falso\n");

    if (valueA >= valueB)
        printf("Pregunta 4: Cierto\n");
    else
        printf("Pregunta 4: Falso\n");

    if (valueA == valueB)
        printf("Pregunta 5: Cierto\n");
    else
        printf("Pregunta 5: Falso\n");

    if (valueA != valueB)
        printf("Pregunta 6: Cierto\n");
    else
        printf("Pregunta 6: Falso\n");

    return 0;
}