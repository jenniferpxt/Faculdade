#include <stdio.h>
#include <stdlib.h>


char Minusculo(char Letra)
{
    if(Letra >= 'a' && Letra <= 'z')
    {
        printf("%c é uma letra minuscula",Letra);
        return 1;
    }
    else {
        printf("%c não é uma letra minuscula",Letra);
        return 0;
    }
}

int main()
{
    char carac;
    
    printf("Digite um caractere: ");
    scanf(" %c",&carac);
    Minusculo(carac);
    
    return 0;
}