#include <stdio.h>

struct personalData {
    char name[20];
    char lastName[20];
    int age;
} person;


int main() {
    printf("Escritura de datos!\n");

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

    return 0;
}