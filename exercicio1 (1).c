#include <stdio.h>
#define PI 3.14159

// Função para calcular a área de um círculo
double calcularAreaCirculo(double raio) {
    return PI * raio * raio;
}

int main() {
    double raio;
    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);
    
    printf("A área do círculo é: %.2f\n", calcularAreaCirculo(raio));
    return 0;
}
