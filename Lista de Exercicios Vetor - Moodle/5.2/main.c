#include <stdio.h>

int main() {
    int N[2], M[2], i, mult=0, P=0;

    for(i=0; i<2; i++) {
        scanf("%d", &N[i]);
    }
    printf("\n");
    for(i=0; i<2; i++) {
        scanf("%d", &M[i]);
    }
    printf("\n");
    for(i=0; i<2; i++) {
        mult = N[i] * M[i];
        P += mult;
    }
    printf("%d\n", P);
    return 0;
}
