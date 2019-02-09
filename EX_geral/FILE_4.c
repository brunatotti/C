#include<stdio.h>

int main(){
    FILE *bru;
    int num, resultado, soma=0;

    bru = fopen("soma.txt", "r");

    if (bru){
        while(!feof(bru)) {
            resultado = fscanf(bru, "%d", &num);
            soma += num;
        }
    } else {
        printf ("ERRO!");
    }
    printf("%d", resultado);
    fclose(bru);
    return 0;
}
