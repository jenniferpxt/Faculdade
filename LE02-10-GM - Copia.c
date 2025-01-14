#include <stdio.h>
#include <stdlib.h>
//
int numero_combinacoes(int n,int p)
    {
        int fat=1;
        int i,np;
        float comb;
        
        for(i=2;i<=(n-p);i++)
        {
            fat=i*fat;
        }
        np=fat;
        fat=1;
        
        for(i=2;i<=n;i++)
        {
            fat=i*fat;
        }
        n=fat;
        fat=1;
        
        for(i=2;i<=p;i++)
        {
            fat=i*fat;
        }
        p=fat;
        
        comb= n / (p*np);
        printf("Número de combinações: %.2f",comb);
    }
    
int main()
    {
        int n,p;
        
        printf("Digite o número de elementos: ");
        scanf("%d",&n);
        printf("Digite o p: ");
        scanf("%d",&p);
        system("clear");
        
        numero_combinacoes(n,p);
    }