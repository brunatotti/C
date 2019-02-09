#include<stdio.h>

int main () {
    FILE *arq;
    char c;
    //nome do arquivo e mode de abertura
    arq = fopen("arquivo.txt", "r");
    //se abriu, tem que fechar
    if (arq) {
        while((c=getc(arq)) != EOF) {
            printf("%c", c);
        }
    } else {
        printf("nao hey");
    }

   // close(arq);
    return 0;
}
