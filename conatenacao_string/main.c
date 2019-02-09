#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[50], frase2[50];

    printf("Digite uma frase: ");
    gets(frase);
    printf("%s\n", frase);

    printf("Digite outra frase: ");
    gets(frase2);
    printf("%s\n", frase2);

    strcat(frase, frase2);
    printf("%s", frase);
    //system("pause");
    return 0;
}
