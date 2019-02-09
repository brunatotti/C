#include <stdio.h>

int main() {
    int A[5], B[8], i, j, bandeira=0;

    for (i=0; i<5; i++) {
        scanf("%d", &A[i]);
    }
    printf("\n");
    for (i=0; i<8; i++) {
        scanf("%d", &B[i]);
    }

    for (i=0; i<5; i++) {
        for (j=0; j<8; j++) {
            if (A[i] == B[j]) {
                printf("%d \n", A[i]);
                bandeira = 1;
            }

        }
    }
    if (bandeira == 0) {
        printf("Nao existe elemento comum\n");
    }
    return 0;
}
