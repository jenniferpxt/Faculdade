#include <stdio.h>
//jenifer
void desenha_retangulo_preenchido(int linhas, int colunas, char contorno, char preenchimento) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1) {
                printf("%c", contorno); 
            } else {
                printf("%c", preenchimento); 
            }
        }
        printf("\n"); 
    }
}

int main() {
    desenha_retangulo_preenchido(5, 15, '#', '-');
    return 0;
}
