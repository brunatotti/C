#include <stdio.h>

int main() {
    int vetor[8], i;

    for(i=0; i<8; i++) {
        scanf("%d ", &vetor[i]);
    }

    for(i=4; i<8; i++) {
        printf("%d ", vetor[i]);
    }
    for(i=0; i<4; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
