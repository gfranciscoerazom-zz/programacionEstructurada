#include <stdio.h>

int main() {
    unsigned char letter = 5;
    unsigned int answer;

    printf("Adivina el número que estoy pensando del 1 al 10: ");
    scanf("%i", &answer);

    if (answer == letter)
        printf("Adivinaste!!!");
    else
        printf("Ese no es, perdiste");

    return 0;
}