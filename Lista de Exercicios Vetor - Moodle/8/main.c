#include <stdio.h>

int main() {
    int N, i, maior = 0, menor = 0;
    float nota, notas = 0, media;

    scanf("%d", &N);

    for(i=1; i<=N; i++) {
        scanf("%f", &nota);
        notas += nota;
        if (nota > 5.0) {
            maior += 1;
        } /*else {
            menor += 1;
        }*/
    }
    //if (menor == N) {
    if (maior == 0) {
        printf("Nao ha nenhum aluno com nota acima de 5\n");
    } else {
        media = notas / N;
        printf("A media dos %d alunos eh %.1f", N, media);
    }
    return 0;
}
