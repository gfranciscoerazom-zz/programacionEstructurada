#include <stdio.h>

struct personalData {
    char name[20];
    char lastName[20];
    int age;
} person;


int main() {
    printf("Escritura de datos!\n");
    printf("Archivos - Guardar en un archivo!\n");

    FILE *archivo = fopen("datosPersonales001.dat", "wb");

    if(archivo != NULL) {
        fflush(stdin);

        printf("Leer datos: \n");
        printf("Ingresar nombre: \n");
        gets(person.name);

        printf("Ingresa apellido:\n");
        gets(person.lastName);

        printf("Ingresa edad:\n");
        scanf("%i", &person.age);

        printf("Imprimir datos: \n");
        printf("%s\n", person.name);
        printf("%s\n", person.lastName);
        printf("%i\n", person.age);

        fwrite(&person.name, sizeof(person), 1, archivo);

        fclose("archivo");
    }
    else {
        printf("No se ha podido crear el archivo");
    }

    return 0;
}