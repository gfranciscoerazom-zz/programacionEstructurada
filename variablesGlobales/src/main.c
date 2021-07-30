#include <stdio.h>

char publicText[] = {"Texto en una variable global"};

void check() {
    printf("\nImprimir desde la función: check");

    printf("Variable global: \n");
    printf("%s", publicText);

    printf("Variable local:\n");
    // printf("%s", privateText);
}

int main() {
    printf("Variables globales!\n");

    char privateText[] = {"Texto en una variable locla\n"};

    printf("Variable global: \n");
    printf("%s", publicText);

    printf("Variable local:\n");
    printf("%s", privateText);

    check();

    return 0;
}