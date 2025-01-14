#include <stdio.h>
#include <stdlib.h>

int leia_vetor_inteiros(int n,int *vet)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%dº número: ",i+1);
        scanf("%d",&vet[i]);
    }
}

int main()
{
    int n,i;
    
    printf("Digite o número de elementos: ");
    scanf("%d",&n);
    int vet[n];
    leia_vetor_inteiros(n,vet);
    
    return 0;
}