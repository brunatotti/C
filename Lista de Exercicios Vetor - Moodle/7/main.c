#include <stdio.h>

int main() {
    int matriz[2][2], i, j, maior = 0, posi, posj;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<2; i++){
        for (j=0; j<2; j++) {
            if (matriz[i][j] > maior) {
               maior = matriz[i][j];
               posi = i;
               posj = j;
            }
        }
    }
    printf("O maior valor eh %d. A posição eh: Linha %d e Coluna %d.", maior, posi, posj);
    return 0;
}
