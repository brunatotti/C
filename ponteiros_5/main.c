#include <stdio.h>

void troca (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a=0, b=9;
    printf("%d %d\n", a, b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
