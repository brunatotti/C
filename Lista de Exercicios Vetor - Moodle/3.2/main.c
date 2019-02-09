#include <stdio.h>

int main() {
    int n[10], x, i, posicao, bandeira=0;

    for (i=0; i<10; i++) {
        scanf("%d", &n[i]);
    }
    scanf("%d", &x);

    for (i=0; i<10; i++) {
        if(n[i] == x){
            posicao = i;
            bandeira = 1;
            printf("A posicao do valor %d eh %d", x, i);
        }
    }
    if (bandeira==0) {
        printf("Valor nao encontrado!");
    }
    return 0;
}
