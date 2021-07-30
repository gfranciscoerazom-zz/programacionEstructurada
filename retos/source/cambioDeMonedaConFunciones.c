#include <stdio.h>

float pesoADolar(float colombianPesos) {
    return colombianPesos / 3858.13;
}

float dolarAPeso(float dolars) {
    return dolars * 3858.13;
}

int main() {
    unsigned char answer;

    printf("Si quieres convertir de dolares a pesos escribe p\n");
    printf("Si quieres convertir de pesos a dolares escribe d\n");
    scanf("%c", &answer);

    if(answer == 'p') {
        float dolares;
        printf("¿Cuantos dólares tienes?\n");
        scanf("%f", &dolares);
        printf("En pesos colombianos tienes: %f", dolarAPeso(dolares));
    }
    else if (answer == 'd') {
        float pesos;
        printf("¿Cuantos pesos colombianos tienes?\n");
        scanf("%f", &pesos);
        printf("En dolares tienes: %f", pesoADolar(pesos));
    }
    else {
        printf("Valor no valido");
    }

    return 0;
}