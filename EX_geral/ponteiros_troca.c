#include<stdio.h>
//Ponteiro � uma vari�vel que contem o endere�o de outra variavel

void troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int a=1, b=4;
    printf("%d %d\n", a, b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
