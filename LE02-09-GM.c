#include <stdio.h>
#include <stdlib.h>

// Função que imprime a sequência de Fibonacci
void sequencia_fibonacci(int termos)
{
    int a = 0, b = 1, prox;
    
    printf("Sequência: ");
    for (int i = 1; i <= termos; i++) 
    {
        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
    }
    printf("\n");
}
    
int main() 
{
    int termos;
    
    // Solicita que o usuário insira a quantidade de termos
    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);
    
    system("clear"); // Limpa a tela (lembre-se da limitação em alguns sistemas)
    
    // Chama a função que gera a sequência de Fibonacci
    sequencia_fibonacci(termos);
    
    return 0;
}
