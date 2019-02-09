#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[50], frase2[50];
    int tamanho=0;

    printf("Digite uma frase: ");
    gets(frase);
    printf("%s\n", frase);

    printf("Digite outra frase: ");
    gets(frase2);
    printf("%s\n", frase2);

    if(strcmp(frase, frase2)>0) {
        printf("1 maior que 2");
    } if(strcmp(frase,frase2)<0) {
        printf("2 maior que 1");
    } if (strcmp(frase, frase2)==0) {
        printf("Sao iguais");
    }

    //system("pause");
    return 0;
}
