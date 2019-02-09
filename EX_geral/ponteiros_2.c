#include<stdio.h>
int main() {
    int *pti;
    int i=10;
    pti=&i;

    printf("pti = %d\n", pti);
    printf("*pti = %d\n", *pti);

    *pti=20;
    printf("*pti = %d\n", *pti);
    printf("i = %d\n", i);

    i=30;
    printf("*pti = %d\n", *pti);
    printf("i = %d\n", i);

    return 0;
}
