#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int v[10], x, i;
    printf("Quais s�o os 10 valores? ");

    for (i=0; i<10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite um n�mero: ");
    scanf("%d", &x);

    printf("A posi��o %d do vetor �: %d", x, v[x-1]);
    return 0;
}
