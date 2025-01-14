
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    file = fopen("arq.txt", "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    printf("Digite os caracteres (0 para sair): ");
    while ((ch = getchar()) != '0') {
        fputc(ch, file);
    }
    fclose(file);
    printf("Arquivo gravado com sucesso.\n");
    return 0;
}
