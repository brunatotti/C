#include <stdio.h>

menores (int V[], int N, int i, int *z) {
    int x;
    for (x=0; x<N; x++) {
        if (V[x] < V[i]) {
            *z += 1;
        }
    }
}

int main() {
    int N, i, x=3, z=0, p=0;
    int V[50];
    printf("Quantos elementos possui o vetor?\n");
    scanf("%d", &N);


    for (i=0; i<N; i++) {
        printf("Entre com o elemento: ");
        scanf("%d", &V[i]);
        printf("\n");
    }
    menores (V,N,x,&z);
    printf("%d elementos menores que %d", z, V[x]);
    return 0;
}
