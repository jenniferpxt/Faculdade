#include <stdio.h>
#include <stdlib.h>

// Pontifícia Universidade Católica de Goiás
// Gabriel Martins de Maciel - CMP2105/C02
// Técnicas de Programação - Max Gontijo de Oliveira

float calculo(float n1, float n2, float n3)
    {
        (n1 + n2 + n3) / 3;
        return((n1 + n2 + n3) / 3);
    }
    
int main()
    {
        float nota1,nota2,nota3,media;
        
        printf("1º nota: ");
        scanf("%f",&nota1);
        printf("2º nota: ");
        scanf("%f",&nota2);
        printf("3º nota: ");
        scanf("%f",&nota3);
        media = calculo(nota1,nota2,nota3);
        system("clear");
        
        printf("Média: %.2f", media);
    }