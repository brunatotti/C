#include <stdio.h>

int main() {
    int A[8], i;

    for (i=0; i<8; i++) {
        scanf("%d", &A[i]);
    }
    for (i=4; i<8; i++) {
        printf("%d ", A[i]);
    }
    for (i=0; i<4; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
