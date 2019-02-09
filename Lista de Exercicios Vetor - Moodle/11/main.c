#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[50], novo[50];
    int i, aux = 0, espaco=0;

    printf("Digite uma frase: ");
    gets(frase);
    printf("%s\n", frase);

    for(i=0; i<strlen(frase); i++) {
        if(frase[i] != ' ') {
            novo[aux] = frase[i];
            ++aux;
        } else {
            espaco++;
        }
    }

    printf("String sem espacos em branco: %s\n", novo);
    printf("A quantidade de espacos da frase '%s' eh: %d\n", frase, espaco);
    return 0;
}
