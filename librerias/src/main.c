#include <stdio.h>
#include "opreaciones.h"

int main() {
    printf("Librerias! \n");

    float firstValuel = 10;
    float secondValuel = 15;
    float result;
    int option;

    printf("Soy una claculadores!\n");
    printf("¿Qué operacion deseas realizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. Divición\n");

    printf("Elige una opción\n");

    scanf("%i", &option);

    switch (option) {
        case 1:
            result = addition(firstValuel, secondValuel);
        break;
        case 2:
            result = substraction(firstValuel, secondValuel);
        break;
        case 3:
            result = multiplicacion(firstValuel, secondValuel);
        break;
        case 4:
            result = division(firstValuel, secondValuel);
        break;
    }

    printf("El resultado de la operación es: %f", result);

    return 0;
}