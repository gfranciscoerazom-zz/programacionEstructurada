#include <stdio.h>
#include <string.h>

int main() {
    char texto[50];

    printf("Ingresa un texto\n");
    gets(texto);

    for (int i = strlen(texto); i >= 0; i--) {
        printf("%c", texto[i]);
    }

    return 0;
}