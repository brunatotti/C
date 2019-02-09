#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, *p;
    a=0;
    p=&a;
    b=*p;
    a=4;

    *p++;
    --a;
    *p+=a;
    printf("%d %d %d", a, b, *p);
    return 0;
}
