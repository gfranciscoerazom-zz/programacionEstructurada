#include <stdio.h>

int main() {
    printf("Arreglos e iteradores\n");

    int integerArray[11];

    for (int i = 0; i < 11; i++) {
        integerArray[i] = i * i;
        printf("Valor (%i): %i\n", i, integerArray[i]);
    }

    return 0;
}