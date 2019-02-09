#include <stdio.h>

int main () {
    int matriz[5][5], i, j;

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (i==j) {
                matriz[i][j] = 1;
            } else {
                matriz [i][j] = 0;
            }
        }
    }

    for(i=0; i<5; i++){
        printf("%d %d %d %d %d\n", matriz[0][i], matriz[1][i], matriz[2][i], matriz[3][i], matriz[4][i]);
    }
    return 0;
}
