#include <stdio.h>

int main() {
    int D, VF, VG, soma;
    scanf("%d %d %d", &D, &VF, &VG);

    D = D*D;
    VF = VF * VF;
    VG = VG * VG;
    soma = D + VF;
    if (VG>=soma) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}
