#include <stdio.h>

int main() {
    unsigned int numVuelta, resultado;
    unsigned int numeroActual = 1;
    unsigned int numeroAnterior = 0;

    printf("¿Hasta que bueta quieres llegar de la secuencia de Fibonacci?\n");
    scanf("%i", &numVuelta);

    for (unsigned int i = 1; i <= numVuelta; i++) {
        resultado = numeroActual + numeroAnterior;
        printf("%i\n", resultado);
        
        numeroAnterior = numeroActual;
        numeroActual = resultado;
    }

    return 0;
}