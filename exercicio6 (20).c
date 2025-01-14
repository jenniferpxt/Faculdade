#include <stdio.h>
//jennifer
// Função para verificar se um caractere é uma vogal minúscula
int VogalMinusc(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char caracter;
    printf("Digite um caractere: ");
    scanf(" %c", &caracter);
    if (VogalMinusc(caracter)) {
        printf("'%c' é uma vogal minúscula.\n", caracter);
    } else {
        printf("'%c' não é uma vogal minúscula.\n", caracter);
    }

    return 0;
}
