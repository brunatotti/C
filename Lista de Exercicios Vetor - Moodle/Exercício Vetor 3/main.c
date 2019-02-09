#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v[10], x, i;
    printf("Quais são os 10 valores? ");

    for (i=0; i<10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("A posição %d do vetor é: %d", x, v[x-1]);
    return 0;
}
