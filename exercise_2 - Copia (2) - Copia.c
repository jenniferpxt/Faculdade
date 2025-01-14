
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int lines = 0;
    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);
    printf("O arquivo possui %d linhas.\n", lines);
    return 0;
}
