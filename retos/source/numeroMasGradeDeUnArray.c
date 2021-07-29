#include <stdio.h>

int main() {
    unsigned int tamanoArray;
    float numMasGrande;

    printf("¿Cuantos número vas a ingresar?\n");
    scanf("%i", &tamanoArray);

    float numberList[tamanoArray];

    for (int i = 0; i < tamanoArray; i++) {
        printf("Ingresa el valor %i: ", i);
        scanf("%f", &numberList[i]);

        if (numberList[i] > numMasGrande) {
            numMasGrande = numberList[i];
        }
    }

    printf("El numero más grande es: %f", numMasGrande);

    return 0;
}