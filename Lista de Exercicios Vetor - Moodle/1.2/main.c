#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int seq[n];
    for (i=0; i<n; i++) {
        scanf("%d", &seq[i]);
    }
    for (i=n-1; i>=0; i--) {
        printf("%d ", seq[i]);
    }
    return 0;
}
