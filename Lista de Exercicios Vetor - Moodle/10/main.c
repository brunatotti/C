#include <stdio.h>

int main() {
    char resp_correta[3];
    int n_alunos, i, j, acertos=0;

    printf("Quantos alunos: ");
    scanf("%d", &n_alunos);

    char resp_aluno[n_alunos][3];

    for (i=0; i<n_alunos; i++) {
        printf("Resposta do aluno %d: ", i+1);
        for (j=0; j<3; j++) {
            scanf("%c", &resp_aluno[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        scanf("%c", &resp_correta[i]);
    }

    for (i=0; i<n_alunos; i++) {
        for (j=0; j<3; j++) {
            if (resp_correta[j] == resp_aluno[i][j]) {
                acertos += 1;
            }
        }
        printf("Aluno %d acertou %d questoes", i+1, acertos);
        acertos = 0;
    }
    return 0;
}
