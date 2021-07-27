#include <stdio.h>

/*Reto 5:
-Ingresar un número entero
-Usando operadores de asignación realizar la operación de módulo del valor ingresado con 5
-Imprimir el resultado más uno usando operadores de increment*/
int main() {
    int number;

    printf("Ingresa un número: ");
    scanf("%i", &number);

    number %= 5;
    printf("El resultado es: %i\n", ++number);
}