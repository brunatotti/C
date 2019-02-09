#include <stdio.h>

int main() {
    int N[2], M[2], i, multi, P=0;

    for (i=0; i<2; i++) {
        scanf("%d", &N[i]);
    }
    printf("\n");
    for (i=0; i<2; i++) {
        scanf("%d", &M[i]);
    }

    for(i=0; i<2; i++) {
        multi = N[i] * M[i];
        P += multi;
    }
    printf("%d\n", P);
    return 0;
}
