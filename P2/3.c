#include<stdio.h>

int main () {
    char palavra[100], y;
    int i;
    gets(palavra);
    y=palavra[0];

    for(i=1; i<100; i++) {
        if (palavra[i] == y) {
            palavra[i] = '*';
        }
    }
    printf(palavra);
    return 0;
}
