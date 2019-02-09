#include <stdio.h>

int main() {
    int alunos, i, k=0;
    float media=0.0;

    scanf("%d", &alunos);
    float notas[alunos];

    for(i=0; i<alunos; i++) {
        scanf("%f", &notas[i]);
        media += notas[i];
        if(notas[i] > 5.0) {
            k+=1;
        }

    }

    media /= alunos;
    printf("A media desses alunos eh: %.1f\n", media);
    if(k==0) {
        printf("Nenhum aluno com nota acima de 5\n");
    } else {
        printf("%d aluno(s) tirou(raram) nota acima de 5\n", k);
    }


    return 0;
}
