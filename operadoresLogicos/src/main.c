#include <stdio.h>

int main() {
    float valueA = 5;
    float valueB, valueC;
    valueA = valueC = 10;

    if ((valueA < valueB) && (valueB == valueC))
        printf("Se cumplieron las dos condiciones\n");
    else
        printf("No se cumplieron las dos condiciones\n");

    if ((valueA > valueB) || (valueA <= valueC))
        printf("Se cumplieron por lo menos una de las dos condiciones\n");
    else
        printf("No se cumplieron ninguna de las dos condiciones\n");

    return 0;
}