#include <stdio.h>
#include <string.h>

char name[10];
int note;

void apruebaONo() {
    if(note >= 7) {
        printf("El estudiante ");
        puts(name);
        printf(" aprueba con %d", note);
    }
    else {
        printf("El estudiante ");
        puts(name);
        printf(" reprueba con %d", note);
    }
}

int main() {
    printf("Ingresa el nombre del alumno: ");
    gets(name);

    printf("Ingrese la nota del alumno: ");
    scanf("%d", note);

    apruebaONo();

    return 0;
}