#include <stdio.h>
/*
int quadrado (int lado) {
    return lado*lado;
}

main() {
    int l=5;
    l = quadrado ( l );
    printf("%d", l);
}
*/
quadrado (int lado, int *resultado) {
    *resultado = lado * lado;
}
main() {
    int l=5, r;
    quadrado (l, &r);
    printf("%d", r);
}
