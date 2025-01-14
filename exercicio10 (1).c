#include <stdio.h>

// Função para calcular o fatorial
int fatorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fatorial(num - 1);
}

// Função para calcular a combinação
int combinacao(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main() {
    int n, p;
    printf("Digite os valores de n e p: ");
    scanf("%d %d", &n, &p);
    
    printf("O número de combinações de %d elementos %d a %d é: %d\n", n, p, p, combinacao(n, p));
    return 0;
}
