#include <stdio.h>

int main() {
    int A[5], B[8], i, j;
    for(i=0; i<5; i++) {
        scanf("%d", &A[i]);
    }
    for(j=0; j<8; j++) {
        scanf("%d", &B[j]);
    }

    for(i=0; i<5; i++) {
        for(j=0; j<8; j++) {
            if(A[i] == B[j]) {
                printf("%d", A[i]);
            }
        }
    }
    return 0;
}
