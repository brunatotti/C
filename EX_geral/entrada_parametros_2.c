#include <stdio.h>
int main (int argc, char *argv[]) {
    int resul, v1=0, v2=0, v3=0;

    v1=atoi(argv[1]);
    v2=atoi(argv[2]);
    v3=atoi(argv[3]);

    resul = v1 + v2 + v3;

    printf("Total: %d", resul);
    return 0;
}
