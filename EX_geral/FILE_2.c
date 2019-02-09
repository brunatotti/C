#include<stdio.h>

int main(){
    FILE *bru;
    char c;
    int i = 0;

    bru = fopen("bruna.txt", "r");

    if (bru == NULL) {
        printf ("ERRO!");
    } else {
        while(c=getc(bru) != EOF) {
            i++;
        }
    }
    printf("%d caracter", i);

    return 0;
}
