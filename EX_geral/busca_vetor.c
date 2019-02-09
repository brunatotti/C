#include <stdio.h>
int main (){
    int N, i, j, k=0;
    printf("Quantas posicoes?\n");
    scanf("%d", &N);
    int vetor[N];
    printf("Indice?\n");
    scanf("%d", &i);

    for (j=0; j<N; j++){
        printf("Elemento %d: ", j+1);
        scanf("%d", &vetor[j]);
    }

    for (j=0; j<N; j++) {
        if (vetor[j]<vetor[i]) {
            k+=1;
        }
    }
    printf("%d elementos sao menores que %d", k, vetor[i]);
    return 0;
}
