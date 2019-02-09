#include <stdio.h>

int main(){
    int i, valores[4] = {12,0,4,5};

    for (i=0; i<4; i++) {
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
        printf("valores[%d] vale %d e o endereco de memoria eh %p\n", i, valores[i], valores[i]);
        printf("valores[%d] vale %d e o endereco de memoria eh %d\n", i, valores[i], &valores[i]);
    }
    printf("\nTotal: %d bytes\n", sizeof(valores));
    return 0;
}
