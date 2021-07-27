#include <stdio.h>

int main() {
    unsigned int option;

    printf("Conseguiste un cita con la chica de tus sueños ¿Cómo deberías actuar en la cita para que te acepte?\n");

    printf("Tratarla de una manera dominante [1]\n");
    printf("Tratarla de forma ambale y atenta [2]\n");
    printf("Tratarla de forma desinteresa [3]\n");
    scanf("%i", &option);

    switch (option) {
        case 1:
            printf("Te rechazó con una bofetada");
        break;

        case 2:
            printf("Te rechazó con una mentira para que no te sientas mal");
        break;

        case 3:
            printf("Se fue de la cita diciendo que tenía que ir al baño y te quedaste esperando a que saliera hasta las 8 p.m");
        break;

        default:
            printf("Te aceptó y se hicieron novios");
        break;
    }

    return 0;
}