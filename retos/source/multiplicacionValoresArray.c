#include <stdio.h>

int main() {
    float valoresMultipliacion[5] = {32, 5, 9, 14, 100};
    float result = 1;

    for (int i = 0; i < 5; i++) {
        result *= valoresMultipliacion[i];
    }

    printf("El resultado es: %f", result);

    return 0;
}