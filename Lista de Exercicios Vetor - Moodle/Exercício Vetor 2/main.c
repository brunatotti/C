#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v[8], i;

    printf("Quais são os 8 valores? ");
    for (i=0; i<8; i++) {
        scanf("%d", &v[i]);
    }

    for (i=4; i<8; i++) {
        printf("%d ", v[i]);
    }
    for (i=0; i<4; i++) {
        printf("%d ", v[i]);
    }
return 0; }
