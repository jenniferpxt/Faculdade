#include <stdio.h>
#include <stdlib.h>
//jennifre

int sequencia_fibonacci(int termos)
    {
        int a=0,b=1,prox;
        
        printf("Sequência: ");
        for (int i = 1; i <= termos; i++) 
        {
            printf("%d ", a);
            prox = a + b;
            a = b;
            b = prox;
        }
    }
    
int main() 
    {
    int termos;
    
    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);
    system("clear");
    sequencia_fibonacci(termos);
    }