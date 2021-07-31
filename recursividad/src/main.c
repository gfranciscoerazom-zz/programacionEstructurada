#include <stdio.h>

int factorial(int n) {
    printf("Entre a la función factorial, n vale: %i\n", n);

    if(n > 1) {
        printf("La función se llamará a si misma otra vez\n");
        return n * factorial(n - 1);
    }
    else {
        printf("n es igual a 1, termina la recursividad\n");
        return 1;
    }
}

int main() {
    printf("Recursividad\n");

    int result = factorial(5);
    printf("\nEl resultado es: %i", result);

    return 0;
}