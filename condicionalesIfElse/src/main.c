#include <stdio.h>

int main() {
    float valueA = 50;
    float valueB = 100;
    float valueC = 150;

    printf("Condición if, else, else if");

    printf("\nCondición: \n");

    if (valueA == valueB)
        printf("No se va a cumplir esta condición");
    else if (valueB == valueC)
        printf("Tampoco se va a cumplir esta condición");
    else {
        printf("Ninguna condición se cumplió");
        printf("\nDespues de esta línea el programa va a terminar");
    }

    return 0;
}