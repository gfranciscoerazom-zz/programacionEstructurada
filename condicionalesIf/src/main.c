#include <stdio.h>

int main() {
    float valueA, valueB, valueC;
    valueA = valueB = 100;

    printf("Condición if\n");

    printf("Primera condición\n");
    if (valueA == valueB) 
        printf("Ambos valores son iguales\n");

    printf("Segunda condición\n");
    if (valueA == valueB) {
        printf("Ambos valores son iguales\n");
        valueC = valueA + valueB;
        printf("Ademas la suma de ambos números es: %f", valueC);
    }

    return 0;
}