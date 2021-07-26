#include <stdio.h>

/*Reto 4:
-Crear una variable llamada x con valor 10
-Utilizar operadores de asignación, para que esta variable se sume así misma el doble de su valor
-Imprimir el resultado*/
int main() {
    unsigned char x = 10;

    x += (x * 2);
    printf("El valor de x es: %d\n", x);

    return 0;
}