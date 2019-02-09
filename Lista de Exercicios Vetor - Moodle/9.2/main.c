#include <stdio.h>

int main() {
    int n_voltas, volta, i;

    scanf("%d", &n_voltas);

    float tempo_volta[n_voltas], media=0.0, melhor_tempo=400.0;

    for(i=1; i <= n_voltas; i++) {
        scanf("%f", &tempo_volta[i]);
        media += tempo_volta[i];
        if(tempo_volta[i] < melhor_tempo){
            melhor_tempo = tempo_volta[i];
            volta = i;
        }
    }

    media /= n_voltas;

    printf("A melhor tempo foi %.1f na volta %d\n", melhor_tempo, volta);
    printf("O tempo medio das voltas foi %.1f\n", media);

    return 0;
}
