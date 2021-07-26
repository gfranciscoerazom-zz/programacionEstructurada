#include <stdio.h>

/*Reto 3:
-Ingresa la temperatura en grados Fahrenheit
-Convierte los grados Fahrenheit en Centigrados
-Imprime el resultado*/

int main() {
    float fahrenheit, centigrados;

    printf("¡Hola! Vamos a transformar grados Fahrenheit a grados centigrados\n\n");
    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrados = (fahrenheit - 32) / 1.8;
    printf("La temperatura en grados centigrados es: %f", centigrados);

    return 0;
}