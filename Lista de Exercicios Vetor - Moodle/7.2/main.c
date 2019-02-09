#include <stdio.h>

int main() {
    int matriz[2][2], maior=0, i, j, posi, posj;

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                posi = i;
                posj = j;
            }
        }
    }

    printf("A maior posicao esta na linha %d e na coluna %d.\n", posi, posj);
    printf("O valor eh %d.", maior);
    return 0;
}
