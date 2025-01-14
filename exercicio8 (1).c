#include <stdio.h>

// Função para calcular o i-ésimo termo da série de Fibonacci
int Fibonacci(int i) {
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else {
        int NAnterior = 0, NAtual = 1, ProximoTermo;
        for (int j = 2; j <= i; j++) {
            ProximoTermo = NAnterior + NAtual;
            NAnterior = NAtual;
            NAtual = ProximoTermo;
        }
        return NAtual;
    }
}

int main() {
    int N;
    
    // Lendo o número de termos que deseja imprimir
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    // Imprimindo os primeiros N termos da série de Fibonacci
    for (int i = 0; i < N; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");
    
    return 0;
}
