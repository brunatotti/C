#include <stdio.h>
#define MAX 52

int main() {
    int N, i, vetor[MAX],a,b,k=0, maiores[MAX], tam=0;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i]>13) {
            while(vetor[i]>13) {
                scanf("%d", &vetor[i]);
            }
        }
    }
    for (a=1,b=2; b<=N; a++,b++) {
        if (vetor[N-a] <= vetor[N-b]) {
            maiores[k] = vetor[N-b];
        } else {
            k++;
            maiores[k] = vetor[N-b];
        }
    }
    printf("%d\n", k+1);
    return 0;
}
