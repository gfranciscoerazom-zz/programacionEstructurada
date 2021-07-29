#include <stdio.h>

int main() {
    float sumatoria, promedio;

    float arrayNotas[5][6] = {
        {10, 6, 7, 6, 8, 0},
        {9, 10, 9, 9, 10, 0},
        {8, 10, 9, 10, 10, 0},
        {10, 8, 10, 7, 6, 0},
        {9, 7, 10, 10, 9, 0},
    };

    for (int i = 0; i < 5; i++) {
        sumatoria = promedio = 0;
        for (int j = 0; j < 5; j++) {
            sumatoria += arrayNotas[i][j];
        }
        promedio = sumatoria / 5;
        arrayNotas[i][5] = promedio;
        printf("El promedio de la fila %i es: %f\n", i, arrayNotas[i][5]);
    }

    return 0;
}