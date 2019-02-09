#include <stdio.h>

int main() {
    int n, i, j, m=0;

    scanf("%d", &n);

    char v1[n], v2[n];

    scanf("%s", v1);
    scanf("%s", v2);


    for(i=0; i<n; i++){
        for(j=0; j<n; j++) {
            if(v1[i] == v2[j])
                m += 1;
        }
    }

    if (m == n)
        printf("Eh um anagrama\n");
    else
        printf("Nao eh um anagrama\n");

    return 0;
}
