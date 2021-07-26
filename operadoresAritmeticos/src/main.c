#include <stdio.h>
#include <stdlib.h>

int main() {
    int rSum, rMod, rMult;
    float rRes, rDiv;

    rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 7 % 3;

    printf("Resultado de la suma: %i", rSum);
    printf("\nResultado del módulo: %i", rMod);
    printf("\nResultado de la multiplicación: %i", rMult);
    printf("\nResultado de la división: %f", rDiv);
    printf("\nResultado de la resta: %f", rRes);

    return 0;
}