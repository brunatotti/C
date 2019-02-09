#include <stdio.h>

void multsoma(int a, int b, int *soma, int *mult){
    *soma=a+b;
    *mult=a*b;}
int main(){
    int s, m;
    multsoma(3,2,&s,&m);
    printf("%d %d\n", s, m);
    return 0;
}
