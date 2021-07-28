#include <stdio.h>

int main() {
    unsigned char i = 1;

    do {
        printf("%i\n", i);
        i++;
    } while (i <= 100);

    return 0;
}