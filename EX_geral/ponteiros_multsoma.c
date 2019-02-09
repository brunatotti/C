#include<stdio.h>

void multsoma(int v1, int v2, int *mult, int *soma) {
    *mult = v1 * v2;
    *soma = v1 + v2;
}

int main() {
    int v1=10, v2=10, mult, soma;
    multsoma(v1, v2, &mult, &soma);

    printf("Mult: %d\n", mult);
    printf("Soma: %d\n", soma);
    return 0;
}
