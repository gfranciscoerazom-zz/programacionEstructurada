#include <stdio.h>

int main() {
    float calificacion;

    printf("Ingresa tu calificación: ");
    scanf("%f", &calificacion);

    if (calificacion < 60)
        printf("Usted ha reprobado la materia.");
    else if (calificacion < 90)
        printf("Usted ha aprobado la materia.");
    else
        printf("Usted ha aprobado la materia. :D");

    return 0;
}