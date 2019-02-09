#include<stdio.h>
int main() {
    int x=10, *px=&x;
    float y = 9.9 , *py=&y ;

    printf("x = %d\n", x);
    printf("*px = %d\n", *px);
    printf("px = %d\n", px);
    printf("&x = %d\n\n", &x);

    printf("y = %.1f\n", y);
    printf("*py = %.1f\n", *py);
    printf("py = %d\n", py);
    printf("&y = %d\n", &y);

    return 0;
}
