
// Exercício 1: Função que verifica se um caractere é uma consoante
#include <ctype.h>

int ehConsoante(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) ? 1 : 0;
}

// Exercício 2: Função que verifica se um caractere é uma vogal minúscula
#include <ctype.h>

int ehVogalMinuscula(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
}

int main() {
    char teste = 'a';
    printf("%d\n", ehVogalMinuscula(teste)); // Teste para a função
    return 0;
}

// Exercício 3: Função que verifica se uma string é palíndromo
#include <string.h>
#include <ctype.h>

int ehPalindromo(char *str) {
    int i, j;
    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (tolower(str[i]) != tolower(str[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

// Exercício 4: Função para verificar se um número é perfeito e exibir números perfeitos entre 1 e 10000
#include <stdio.h>

int ehNumeroPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            soma += i;
    }
    return soma == num;
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (ehNumeroPerfeito(i)) {
            printf("%d = ", i);
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                    if (j != i - 1) printf("+ ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

// Exercício 5: Função que converte string para letras minúsculas
#include <ctype.h>

void to_lower_case(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Exercício 6: Função que converte string para letras maiúsculas
#include <ctype.h>

void to_upper_case(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// Exercício 7: Função para imprimir uma caixa com texto centralizado
#include <stdio.h>
#include <string.h>

void caixa_com_texto_centralizado(char *S, int N, char C) {
    int len = strlen(S);
    if (len > N - 2) {
        S[N - 2] = '\0';  // Corta o texto se for maior que a largura da caixa
        len = strlen(S);
    }

    int espacos = (N - len - 2) / 2;
    printf("%.*s\n", N, "++++++++++++++++++++++++++++++++++++++++");
    printf("%c%*s%s%*s%c\n", C, espacos, "", S, espacos + (N - len - 2) % 2, "", C);
    printf("%.*s\n", N, "++++++++++++++++++++++++++++++++++++++++");
}

int main() {
    caixa_com_texto_centralizado("Ola Mundo!", 30, '+');
    return 0;
}
