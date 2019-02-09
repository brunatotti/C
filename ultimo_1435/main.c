#include <stdio.h>

int main() {
    int N;
    while(N!=0) {
        scanf("%d", &N);
        int matriz[N][N];
        int i, j, k;
        int guarda_N, a, b=0, c=0;
        int valor=1;
        guarda_N=N;
        if (N%2==0) {
            a=N/2;
        } else {
            a=(N/2)+1;
        }
        for (i=1; i<=a; i++) {
            for (j=b; j<guarda_N; j++) {
                for (k=c; k<guarda_N; k++) {
                    matriz[j][k]=valor;
                }
            }
            valor++; b++; c++; guarda_N--;
        }
        for (j=0; j<N; j++) {
            for (k=0; k<N; k++) {
                if (k==0) {
                    printf ("%3d", matriz[j][k]);
                } else {
                    printf (" %3d", matriz[j][k]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
