#include <stdio.h>
#include <string.h>

int main() {
    char frase[51];
    int i, tam;

    gets(frase);

    tam = strlen(frase);

    for(i=0; i<=tam; i++) {
        if (frase[i] == ' ') {
            continue;
        } else {
            printf("%c", frase[i]);
        }
    }

    return 0;
}
