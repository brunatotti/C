#include <stdio.h>

int main() {
    int voltas, mv=200, i;
    float tempovolta, mt=2000, medio=0.0;

    scanf("%d", &voltas);

    for (i=1; i<=voltas; i++) {
        scanf("%f", &tempovolta);
        medio += tempovolta;
        if (tempovolta < mt) {
            mt = tempovolta;
            mv = i;
        }
    }
    printf("Melhor tempo: %.2f\n", mt);
    printf("A volta em que o melhor tempo ocorreu: %d\n", mv);

    medio /= voltas;
    printf("Tempo medio das %d voltas: %.2f", voltas, medio);

    return 0;
}
