#include <stdio.h>

int main() {
    printf("Iterador while\n");

    int limit;
    int i = 1;

    printf("Ingresa el límite del programa: ");
    scanf("%i", &limit);

    while (i <= limit) {
        printf("Número: %i\n", i);
        i++;
    }

    return 0;
}