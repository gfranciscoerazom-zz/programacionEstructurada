#include <stdio.h>

int main() {
    printf("Archivos! Crear un archivo\n");

    FILE *archivo;

    archivo = fopen("prueba3.dat", "w");

    if(archivo != NULL) {
        printf("El archivo se ha creado exitosament. Compureba en la carpeta que ha sido crada\n");
        fclose(archivo);
    }
    else {
        printf("El archivo no se ha crado");
    }

    return 0;
}