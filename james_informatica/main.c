#include <stdio.h>

int main() {
    int a,b,c,d,e, z=0;

    for(a=2; a<=9; a++) {
        for(b=3; b<=9; b++) {
            for(c=4; c<=9; c++) {
                for(d=5; d<=9; d++) {
                    for(e=6; e<=9; e++) {
                        z += 1;

                    }
                }
            }
        }
    }
    printf("%d", z);
    return 0;
}
