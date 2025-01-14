#include <stdio.h>
#include <string.h>
#include <ctype.h>
//jenifer
int eh_palindromo(const char *texto) {
    int inicio = 0;
    int fim = strlen(texto) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(texto[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalnum(texto[fim])) {
            fim--;
        }

        if (tolower(texto[inicio]) != tolower(texto[fim])) {
            return 0; 
        }
        inicio++;
        fim--;
    }
    return 1; 
}

int main() {
    const char *texto = "A man a plan a canal Panama";
    int resultado = eh_palindromo(texto);

    if (resultado == 1) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
