#include <stdio.h>
#include <stdlib.h>

// jennifer 
char Caractere(char Letra)
{
    
    if(Letra == 'A' || Letra == 'E' || Letra == 'i' || Letra == 'o' || Letra =="U)
    {
        return 1;
    }
   
    else {
        return 0;
    }
}

int main()
{
    char carac;
    
    a
    printf("Escreva uma letra: ");
    scanf(" %c", &carac);
    
    
    if(Caractere(carac))
    {
        printf("A letra %c pertence ao conjunto (A, E,  i, O, U).\n", carac);
    }
    else
    {
        printf("A letra %c nao pertence ao conjunto (A, E,  i, O, U).\n", carac);
    }
    
    return 0;
}
