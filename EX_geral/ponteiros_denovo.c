#include<stdio.h>

int main (){
    int x=10;
    int *px=&x;
    int **ppx=&x;

    float y=5.9;
    float *py=&y;
    float **ppy=&py;

    printf("x=%d\n", x);
    printf("*py=%f\n", *py);
    printf("px=%d\n", px);
    printf("&y=%d\n", &y);
    printf("*px=%d\n", *px);
    printf("y=%f\n", y);
    printf("\n");
    printf("*ppx=%d\n", *ppx);
    printf("py=%d\n", py);
    printf("&x=%d\n", &x);
    printf("py++=%d\n", py++);
    printf("*px--=%d\n", *px--);
    printf("**ppy=%d\n", **ppy);
    printf("&ppy=%f\n", &ppy);
    printf("*&px=%d\n", *&px);
    printf("**ppx++=%d\n", **ppx++);
    printf("px++=%d\n", px++);
    printf("&ppx=%d\n", &ppx);
    return 0;
}
