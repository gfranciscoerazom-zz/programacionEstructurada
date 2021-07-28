#include <stdio.h>

int main() {
    printf("Iterador Do while\n");

    unsigned char value;
    unsigned char answer = 'q';

    do
    {
        printf("Ingresa una letra: ");
        scanf(" %c", &value);
    } while (value != answer);

    printf("Coincide las letras %c == %c", value, answer);
    

    return 0;
}