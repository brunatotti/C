#include <stdio.h>

int main() {
    int n_alunos, i, j, k, acertos=0;

    printf ("Quantos alunos: ");
    scanf ("%d", &n_alunos);
    printf ("\n\n");

    int cartao_alunos[n_alunos][3], cartao_resp[3], aluno[n_alunos];

    for (i=0; i<n_alunos; i++) {
        printf("Respostas do aluno %d:\n", i+1);
        for (j=0; j<3; j++) {
            scanf("%d", &cartao_alunos[i][j]);
        }
    }

    printf("\n\n");

    printf("Respostas corretas:\n");
    for (i=0; i<3; i++) {
        scanf("%d", &cartao_resp[i]);
    }
    printf("\n\n");

    for (i=0; i<n_alunos; i++) {
        for (j=0; j<3; j++) {
            if (cartao_alunos[i][j] == cartao_resp[j]) {
                acertos += 1;
            }
        }
        printf("O aluno %d teve %d acertos.\n", i+1, acertos);
        acertos = 0;
    }
    return 0;
}
