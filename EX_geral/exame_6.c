#include<stdio.h>

int main (int argc, char *argv[]){
    int n, i, c[100], y=1;
    n = argc;

    for (i=1; i<n; i++) {
        c[i-1] = atoi(argv[i]);
    }
    for (i=0; i<n; i++) {
        y *= c[i];
    }
    printf("%d\n", y);
    return 0;
}
