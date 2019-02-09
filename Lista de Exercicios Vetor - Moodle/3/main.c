#include <stdio.h>

int main() {
    int A[10], X, i, bandeira=0;

    for (i=0; i<10; i++) {
        scanf("%d", &A[i]);
    }
    printf("\n");
    scanf("%d", &X);

    for (i=0; i<10; i++) {
        if (A[i] == X) {
            printf("A[%d]", i);
            bandeira = 1;
        }
    }
    if (bandeira == 0) {
        printf("Nao Foi Encontrado!\n");
    }
    return 0;
}
