#include <stdio.h>

int main() {
    int sumaArray[3][4] = {
        {1, 1, 1, 1},
        {5, 2, 2, 1},
        {6, 6, 7, 7},
    };

    for (unsigned int i = 0; i < 3; i++) {
        int result = 0;
        for (unsigned int j = 0; j < 4; j++) {
            result += sumaArray[i][j];
        }
        printf("El resultado es: %i\n", result);
    }

    return 0;
}