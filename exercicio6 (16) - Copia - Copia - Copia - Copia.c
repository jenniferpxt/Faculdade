#include <stdio.h>
//jennifer
void desenha_retangulo_solido(int linhas, int colunas, char caractere) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%c", caractere);
        }
        printf("\n"); 
    }
}

int main() {
    desenha_retangulo_solido(5, 20, 'M'); 
    return 0;
}
