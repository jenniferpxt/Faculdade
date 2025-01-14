#include <stdio.h>
#include <ctype.h>

char verificar_consoante(char caractere) {
    char c = tolower(caractere);
    
    if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
        return caractere;
    } else {
        return 0;
    }
}

int main() {
    
    char resultado;

    resultado = verificar_consoante('b');
    printf("Resultado: %c\n", resultado ? resultado : '0'); // Saída: b

    resultado = verificar_consoante('A');
    printf("Resultado: %c\n", resultado ? resultado : '0'); // Saída: 0

    resultado = verificar_consoante('z');
    printf("Resultado: %c\n", resultado ? resultado : '0'); // Saída: z

    resultado = verificar_consoante('3');
    printf("Resultado: %c\n", resultado ? resultado : '0'); // Saída: 0

    return 0;
}

