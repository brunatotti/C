#include <stdio.h>
#include <stdlib.h>
/*
void main() {
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d.\n", *p);
}

void main(){
    char *a, *b;
    a = "abacate";
    b = "uva";
    if (a < b)
    printf ("%s vem antes de %s no dicionário", a, b);
    else
    printf ("%s vem depois de %s no dicionário", a, b);
}
*/
int main () {
    int a[99], i;
    for (i = 0; i < 99; ++i)
        a[i] = 98 - i;
    for (i = 0; i < 99; ++i)
        a[i] = a[a[i]];

    for (i=0; i<99; i++)
        printf("%d\n", a[i]);
    return 0;
}
