#include <stdio.h>

int main() {
    int n, i, z=0, y, guard [100], j;
    scanf ("%d",&n);
    for (i=1; i<=n; i++){
        if (n%i==0) {
            if (i<=10) {
                guard [z] = i;
                z += 1;
            } else {
                y = n%10;
                guard [z] = y;
                z+=1;
            }

        }
    }
    for(i=0; i<=9; i++) {
        for(j=0; j<=z; j++) {
            if(guard[j] == i){
                printf("%d ", i);
                break;
            }
        }
    }
    return 0;

}
