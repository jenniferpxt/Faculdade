
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, novo_tamanho;
    int *V, *novo_vetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    V = (int *)malloc(N * sizeof(int));
    if (V == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Informe os elementos do vetor: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    printf("Informe o valor de X: ");
    scanf("%d", &X);

    novo_vetor = remover_abaixo_de(V, N, X, &novo_tamanho);

    printf("Elementos maiores ou iguais a %d:\n", X);
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", novo_vetor[i]);
    }
    printf("\n");

    free(V);
    free(novo_vetor);

    return 0;
}
