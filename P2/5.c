#include <stdio.h>

void testadiagonal(int n, int A[][100], int *princ, int *secun){
    int lin, col, prodp = 1, prods = 1;

    for (lin = 0; lin < n; lin++)
        for (col = 0; col < n; col++){
            if (lin == col)
                prodp *= A[lin][col];
            if (col == (n-lin))
                prods *= A[lin][col];
        }
    *princ = prodp;
    *secun = prods;
}

int main(){
    int n, l, c, A[100][100], princ = 1, secun = 1;

    printf("Tamanho da matriz: ");
    scanf("%d", &n);

    for (l = 0; l < n; l++)
        for (c = 0; c < n; c++)
            scanf("%d", &A[l][c]);
    printf("\n");

    testadiagonal(n, A, &princ, &secun);
    printf("Principal: %d\n", princ);
    printf("Secundaria: %d\n", secun);

    return 0;
}
