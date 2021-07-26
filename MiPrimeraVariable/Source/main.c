#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    unsigned int integerA = 134;
    float floatA = 1.1;
    double doubleA = 1.2;
    unsigned char letterA = 'P';

    int integerA1;
    float floatA1;
    unsigned char letterA1;

    // En la siguiente línea estamos imprimiendo nuestra variable int integerA
    printf("El valor de nuestro entero A es: %i\n", integerA);

    // En la siguiente línea estamos imprimiendo nuestra variable float floatA
    printf("El valor de nuestro float A es: %f\n", floatA);

    // En la siguiente línea estamos imprimiendo nuestra variable double doubleA
    printf("El valor de nuestro double A es: %f\n", doubleA);

    // En la siguiente línea estamos imprimiendo nuestra variable char lettraA
    printf("El valor de nuestro character A es: %c\n", letterA);

    // En la siguiente línea estamos imprimiendo todas las variables en una sola línea
    printf("La variable int es: %i, la variable float es: %f, la variable double es: %f y la variable char es: %c", integerA, floatA, doubleA, letterA);


    printf("\nIngresa el valor de integerA1: ");
    scanf("%i", &integerA1);
    printf("Tu valor es: %i\n", integerA1);

    printf("\nIngresa el valor de floatA1: ");
    scanf("%f", &floatA1);
    printf("Tu valor es: %f\n", floatA1);

    printf("\nIngresa el valor de letterA1: ");
    scanf(" %c", &letterA1);
    printf("Tu letra es: %c\n", letterA1);

    return 0;
}