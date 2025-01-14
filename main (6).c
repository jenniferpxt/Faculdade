#include <stdio.h>
int main() {
    char str[100];
    char letra;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    letra = popularidade(str);

    if (letra == '\0') {
        printf("Nenhuma letra encontrada na string.\n");
    } else {
        printf("A letra que mais aparece é: %c\n", letra);
    }

    return 0;
}
