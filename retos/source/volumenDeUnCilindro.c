#include <stdio.h>

/*Reto 2:
-Ingresar los valores necesarios para calcular el volumen de un cilindro
-Realizar la operación
-Imprimerir el volumen del cilindro y el area de su base*/
int main() {
    float altura, areaBase, volumenCilindro, radioBase;

    printf("Calculadora del volumen de un cilindro\n\n");

    printf("Ingresa el valor del radio de la base del cilindro: ");
    scanf("%f", &radioBase);

    printf("Ingresa el valor de la altura del cilindro: ");
    scanf("%f", &altura);

    areaBase = 3.14 * (radioBase * radioBase);
    volumenCilindro = areaBase * altura;

    printf("\nEl area de la base del cilindro es: %f", areaBase);
    printf("\nEl volumen del cilindro es: %f", volumenCilindro);

    return 0;
}