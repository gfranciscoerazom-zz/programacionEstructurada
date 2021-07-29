#include <stdio.h>

int main() {
    printf("Arreglos bidimencionales\n");

    int bidimensionalArray[4][4];

    bidimensionalArray[0][0] = 11;
    bidimensionalArray[0][1] = 12;
    bidimensionalArray[0][2] = 13;
    bidimensionalArray[0][3] = 14;

    bidimensionalArray[1][0] = 15;
    bidimensionalArray[1][1] = 16;
    bidimensionalArray[1][2] = 17;
    bidimensionalArray[1][3] = 18;

    bidimensionalArray[2][0] = 19;
    bidimensionalArray[2][1] = 20;
    bidimensionalArray[2][2] = 21;
    bidimensionalArray[2][3] = 22;

    bidimensionalArray[3][0] = 23;
    bidimensionalArray[3][1] = 24;
    bidimensionalArray[3][2] = 25;
    bidimensionalArray[3][3] = 26;

    printf("Valor en (0, 1): %i\n", bidimensionalArray[0][0]);
    printf("Valor en (0, 1): %i\n", bidimensionalArray[0][1]);
    printf("Valor en (0, 1): %i\n", bidimensionalArray[0][2]);
    printf("Valor en (0, 1): %i\n", bidimensionalArray[0][3]);

    return 0;
}