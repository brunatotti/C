#include <stdio.h>

void troca(int *a, int *b);

int main () {
    int valor1=12;
    int valor2=345;
    printf("valor1=%d valor2=%d\n", valor1, valor2);
    troca(&valor1, &valor2);
    printf("valor1=%d valor2=%d\n", valor1, valor2);
    return 0;
}

void troca(int *a, int *b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
