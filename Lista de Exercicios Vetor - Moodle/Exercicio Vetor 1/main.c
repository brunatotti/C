#include <stdio.h>
#include <locale.h>
#define MAX 20

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i, v[MAX];

    printf("Quantos números terá a sequência?");
    scanf("%d", &n);

    printf("Insira os %d números: ", n);

    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for (i=n-1; i>=0; i--) {
        printf("%d  ", v[i]);
    }
    return 0;
}

