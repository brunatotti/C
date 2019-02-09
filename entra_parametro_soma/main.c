#include <stdio.h>

int main(int argc, char *argv[]) {
    int total;

    total = atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]) + atoi(argv[4]);
    printf("Resultado = %d", total);

    return 0;
}
