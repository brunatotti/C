#include <stdio.h>

void troca(float *a, float *b) {
    float temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=6, b=10;
    printf("%d %d\n", a, b);
    troca(&a,&b);
    printf("%d %d\n", a, b);
    return 0;
}
