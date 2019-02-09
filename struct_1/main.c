#include <stdio.h>

typedef struct {
    int num;
    int den;
} FRACAO;

void exibeFracao (FRACAO A) {
    printf("%d/%d\n", A.num, A.den);
}

FRACAO somaFracao(FRACAO A, FRACAO B) {
    int soma;
    FRACAO resultado;

    resultado.num = ((A.num * B.den) + (A.den * B.num));
    resultado.den = (A.den * B.den);
    return resultado;
 }

FRACAO multFracao (FRACAO A, FRACAO B) {
    int mult;
    FRACAO resultado;

    resultado.num = (A.num * B.num);
    resultado.den = (A.den * B.den);
    return resultado;
}

FRACAO subtraiFracao (FRACAO A, FRACAO B) {
    int subtrai;
    FRACAO resultado;

    resultado.num = ((A.num * B.den) - (A.den * B.num));
    resultado.den = (A.den * B.den);
    return resultado;
}

FRACAO reduz (FRACAO resultado) {
    if
}

int main() {
    FRACAO bruna;
    FRACAO andre;
    FRACAO resultado;

    bruna.num = 2;
    bruna.den = 5;

    andre.num = 4;
    andre.den = 5;

    resultado = somaFracao (bruna, andre);
    exibeFracao(resultado);

    resultado = multFracao (bruna, andre);
    exibeFracao(resultado);

    resultado =subtraiFracao (bruna, andre);
    exibeFracao(resultado);
    return 0;
}
