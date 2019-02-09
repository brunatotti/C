#include<stdio.h>
#include<string.h>

int main () {
    int y, w;
    char y_st[100], y_st_inverso[100], a, b;

    for (y=12; y<=98; y++) {
        itoa(y, y_st);
        if (y_st[0] == y_st[1] || y_st[0] == '0' || y_st[1] == '0') {
            continue;
        } else {
            a = y_st[0];
            b = y_st[1];
            y_st_inverso = strcat(b, a);
            atoi(y_st_inverso, w, 10);
            printf("%d ", y+y_st_inverso);

        }
    }

    return 0;
}
