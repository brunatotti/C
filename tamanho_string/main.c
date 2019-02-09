#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[50];
    int tamanho=0;

    printf("Digite uma frase: ");
    gets(frase);
    printf("%s\n", frase);

    tamanho = strlen(frase);
    printf("%i\n", tamanho);
    //system("pause");
    return 0;
}
