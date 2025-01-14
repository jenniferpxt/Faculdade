
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int Matricula;
    char Nome[50];
    float N1, N2, media;
} Aluno;

float calculaMedia(float N1, float N2) {
    return 0.4 * N1 + 0.6 * N2;
}

Aluno* leDados(int *quantidade) {
    FILE *fileAlunos = fopen("alunos.txt", "r");
    FILE *fileN1 = fopen("n1.txt", "r");
    FILE *fileN2 = fopen("n2.txt", "r");

    if (!fileAlunos || !fileN1 || !fileN2) {
        printf("Erro ao abrir os arquivos.");
        exit(1);
    }

    fscanf(fileAlunos, "%d", quantidade);
    Aluno *alunos = (Aluno *) malloc(*quantidade * sizeof(Aluno));  

    for (int i = 0; i < *quantidade; i++) {
        fscanf(fileAlunos, "%d %s", &alunos[i].Matricula, alunos[i].Nome);
    }

    int matricula;
    float nota;
    for (int i = 0; i < *quantidade; i++) {
        fscanf(fileN1, "%d %f", &Matricula, &nota);
        for (int j = 0; j < *quantidade; j++) {
            if (alunos[j].matricula == matricula) {
                alunos[j].N1 = nota;
                break;
            }
        }
    }

    for (int i = 0; i < *quantidade; i++) {
        fscanf(fileN2, "%d %f", &matricula, &nota);
        for (int j = 0; j < *quantidade; j++) {
            if (alunos[j].matricula == matricula) {
                alunos[j].N2 = nota;
                break;
            }
        }
    }

    fclose(fileAlunos);
    fclose(fileN1);
    fclose(fileN2);

    return alunos;
}

void geraResultados(Aluno *alunos, int quantidade) {
    FILE *fileResultados = fopen("resultados.txt", "w");
    if (!fileResultados) {
        printf("Erro ao criar o arquivo de resultados.");
        exit(1);
    }

    for (int i = 0; i < quantidade; i++) {
        alunos[i].media = calculaMedia(alunos[i].N1, alunos[i].N2);
        fprintf(fileResultados, "%d %s %s\n",
                alunos[i].matricula,
                alunos[i].nome,
                alunos[i].media >= 6.0 ? "APROVADO" : "REPROVADO");
    }

    fclose(fileResultados);
}

int main() {
    int quantidade;
    Aluno *alunos = leDados(&quantidade);
    geraResultados(alunos, quantidade);
    free(alunos);

    printf("Resultados gerados com sucesso no arquivo 'resultados.txt'.\n");
    return 0;
}
