#include <stdio.h>
#include <stdlib.h>
// jennifer
int leia_matriz_vet(int *vet,int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("escreva  o %d-%d valor: ",i+1,j+1);
            scanf("%d",&vet[i]);
        }
    }
}
    
int main()
{
    int l,c;
    
    printf("escreva  a quantidade de linhas: ");
    scanf("%d",&l);
    printf("escreva  a quantidade de colunas: ");
    scanf("%d",&c);
    
    int vet[l][c];
    leia_matriz_vet(*vet,l,c);
    
    return 0;
}