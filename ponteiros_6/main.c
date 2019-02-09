#include <stdio.h>

void multsoma (int a, int b, int *mult, int *soma) {
    *mult = a*b;
    *soma = a+b;
}

int main() {
    int mult, soma;
    multsoma(10,2,&mult, &soma);
    printf("%d %d\n", mult,soma);
    return 0;
}
