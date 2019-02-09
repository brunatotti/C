#include <stdio.h>
int main (){
    int N, j, i;
    printf("Quantas posicoes?\n");
    scanf("%d", &N);
    int vetor[N], vetorw[N];

    for (j=0; j<N; j++){
        printf("Elemento %d: ", j+1);
        scanf("%d", &vetor[j]);
    }

    for(i=0;i<N;i++) {
        for(j=0; j<N; j++) {
            if (vetor[i]<=vetor[j]) {
                vetorw[i]=vetor[j];
            }
        }
    }

    for (i=0;i<N;i++) {
        printf("%d\n", vetorw[i]);
    }
    return 0;
}
