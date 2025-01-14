
#include <stdio.h>
#include <stdlib.h>

int* remover_abaixo_de(int *V, int N, int X, int *novo_tamanho) {
    int i, count = 0;
    for (i = 0; i < N; i++) {
        if (V[i] >= X) {
            count++;
        }
    }

    int *novo_vetor = (int *)malloc(count * sizeof(int));
    if (novo_vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    *novo_tamanho = 0;
    for (i = 0; i < N; i++) {
        if (V[i] >= X) {
            novo_vetor[(*novo_tamanho)++] = V[i];
        }
    }

    return novo_vetor;
}
