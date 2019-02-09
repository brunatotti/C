#include<stdio.h>

int main(){
    FILE *bru;
    char nome[70], *resultado;
    int i = 0;

    bru = fopen("bruna.txt", "r");

    if (bru == NULL) {
        printf ("ERRO!");
    } else {
        while(!feof(bru)) {
            resultado = fgets(nome, 70, bru);
            if (resultado) {
                printf("%s", nome);
            }
        }
    }
    fclose(bru);
    return 0;
}
