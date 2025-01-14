#include <stdio.h>
//jennifre
void desenha_retangulo(int linhas, int colunas, char caractere) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1) {
                printf("%c", caractere);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    desenha_retangulo(5, 20, 'M');
    return 0;
}
