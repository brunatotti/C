#include <stdio.h>

int main() {
    int A[2], B[3], i=0, j=0, vazio;

    printf("Entre com os 2 numeros:\n");
    for(i=0; i<1; i++) {
        scanf("%d ", &A[i]);
    }

    printf("Entre com os 3 numeros:\n");
    for(j=0; j<3; j++) {
        scanf("%d ", &B[j]);
    }


    /*for (k=1; k<=2; k++) {
        for (l=1; l<=3; l++) {
            if (A[k] == B[l]){
                printf("%d ", A[k]);
                vazio = 1;
            }
        }
    }
    if (vazio == 0) {
        printf("vazio");
    }*/
    return 0;
}
