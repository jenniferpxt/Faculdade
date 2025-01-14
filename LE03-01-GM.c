#include <stdio.h>
#include <stdlib.h>

// jennifer

char Caractere(char Letra)
{
    if(Letra != 'J' || Letra != 'E' || Letra != 'N' || Letra != 'i' || Letra != 'F')
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
    
    printf("escreva uma letra : ");
    scanf(" %c",&carac);
    Caractere(carac);
    
    return 0;
}