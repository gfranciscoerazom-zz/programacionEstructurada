#include <stdio.h>

struct personalData {
    char name[20];
    char lastName[20];
    int age;
} person;


int main() {
    printf("Escritura de datos!\n");
    printf("Archivos - Guardar en un archivo!\n");

    FILE *archivo = fopen("datosPersonales001.dat", "rb");

    if(archivo != NULL) {
        fread(&person, sizeof(person), 1, archivo);

        printf("Imprimir los datso\n");
        printf("Nombre: %s\n", person.name);
        printf("Nombre: %s\n", person.lastName);
        printf("Nombre: %i\n", person.age);

        fclose("archivo");
    }
    else {
        printf("No se ha podido crear el archivo");
    }

    return 0;
}