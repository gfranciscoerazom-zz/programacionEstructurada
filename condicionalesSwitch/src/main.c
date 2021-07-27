#include <stdio.h>

int main() {
    unsigned int option;

    printf("Condicial switch: ");

    scanf("%i", &option);

    switch (option) {
        case 1:
            printf("Elegiste el numero 1");
        break;

        case 2:
            printf("Elegiste el numero 2");
        break;

        case 3:
            printf("Elegiste el numero 3");
        break;

        default:
            printf("Elegiste el una opción invalida");
        break;
    }
    
    return 0;
}