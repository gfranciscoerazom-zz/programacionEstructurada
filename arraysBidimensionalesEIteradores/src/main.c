#include <stdio.h>

int main() {
    printf("Arreglos bidimensionales e iteradores");

    int integerArray[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            integerArray[i][j] = (i + j) * 100 + j;
            printf("(%i, %i): %i\n", i, j, integerArray[i][j]);
        }
    }

    return 0;
}