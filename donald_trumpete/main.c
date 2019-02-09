#include <stdio.h>

int main() {
    int n, i, a=0, b, c, flag=0, sob[10];

    scanf("%d", &n); //56

    for (i=1; i<=n; i++) {
        if (n%i == 0) {
            if (i <= 9) {
                sob[a] = i;
                printf("%d ", sob[a]);
                a += 1;
            } else {
                b = i%10;


                for (c=0; c<=30; c++) {
                    if (sob[c] == b) {
                        flag = 1;
                    }
                } if (flag == 0) {
                    sob[a] = b;
                    printf("%d ", sob[a]);
                    a += 1;
                }
            }
        }
    }
    return 0;
}
