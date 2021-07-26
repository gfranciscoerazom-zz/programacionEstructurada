#include <stdio.h>

/*Primer reto:
- Crear dos variables
- Ingresar y guardar el valor de ambas variables
- Intercambiar el valor de las variables con ayuda de una variable auxiliar
- Imprimir el valor de las variables ya intecambiadas*/
int main()
{
    int variable1, variable2, comodin;

    printf("Ingresa el valor de la variable1: ");
    scanf("%i", &variable1);

    printf("Ingresa el valor de la variable2: ");
    scanf("%i", &variable2);

    comodin = variable1;
    variable1 = variable2;
    variable2 = comodin;

    printf("El valor de la variable1 es: %i\nEl valor de la variable2 es: %i", variable1, variable2);

    return 0;
}
