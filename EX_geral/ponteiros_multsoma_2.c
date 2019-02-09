#include <stdio.h>

void multsoma (int a, int b, int *mult, int *soma){
    *mult = a * b;
    *soma = a + b;
}
int main(){
    int a=5, b=10, mult, soma;
    multsoma(a,b,&mult, &soma);
    printf("Multiplicacao: %d\n", mult);
    printf("Soma: %d\n", soma);
    return 0;
}
