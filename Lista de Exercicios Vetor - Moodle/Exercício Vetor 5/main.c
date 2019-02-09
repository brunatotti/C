#include <stdio.h>

int main()
{   int N[3], M[3], i, j, a, b, c;
    printf("Entre com os 10 elementos: ");
    for (i=0; i<3; i++) {
        scanf("%d", &N[i]);
    }
    printf("Entre com os 10 elementos: ");
    for (j=0; j<3; j++) {
        scanf("%d", &M[j]);
    }
    for (i=0, j=0; i<3, j<3; i++, j++) {
        b = N[i] * M[j];
        c = a + b;
        a = b;
    }
    printf("%d\n", c);
    return 0;
}
