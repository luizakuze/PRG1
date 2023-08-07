#include <stdio.h>
#include <string.h>
#define TAM_ID 10
#define TAM_NOME 30
#define TAM_USERS 5

typedef struct {
    char nome[30];
    int aval[3];
} tipo_aluno;


float media_turma(tipo_aluno turma[TAM_USERS]);
float media_aluno(tipo_aluno turma[TAM_USERS], int indice);
int numero_alunos_acima_media(tipo_aluno turma[TAM_USERS]);

/* Vari´avel Global - Tabela de Usu´arios do Sistema */
tipo_aluno alunos[TAM_USERS] = { {"Silvana e Silva", {10, 7, 9}},
                                 {"Maria Luisa e Silva", {6, 7, 10}},
                                 {"Vica e Silva",{10, 10, 9}},
                                 {"Lara e Silva",{10, 7, 9}},
                                 {"Eraldo e Silva",{3, 2, 5}}, } ;

float media_turma(tipo_aluno turma[TAM_USERS]) {
    float soma = 0;

    for (int i = 0; i < TAM_USERS; i++) {
        // Atenção como passar array de struct aqui p parâmetro
        soma += media_aluno(turma, i);
    }

    float media = (float) soma / TAM_USERS;

    return media;

}

float media_aluno(tipo_aluno turma[TAM_USERS], int indice) {
    /* retornar -1 se ´ındice ´ınv´alido */

    float soma = 0, media;

    // índice inválido
    if (indice >= TAM_USERS || indice < 0) {
        return -1;
    }

    // Percorre as provas do aluno
    for (int i = 0; i < 3; i++) {
        soma += turma[indice].aval[i];
    }

    media = (float) soma / 3;

    return media;
}

int numero_alunos_acima_media(tipo_aluno turma[TAM_USERS]) {
    int cont = 0;

    for (int i = 0; i < TAM_USERS; i++) {
        if (media_aluno(turma, i)> media_turma(turma))
            cont++;
    }

    return cont;
}

int main() {

    for (int i = 0; i < TAM_USERS; i++) {
        printf("Aluno[%d] = %.2f\n", i, media_aluno(alunos, i));
    }
    printf("A média da turma é = %.2f\n", media_turma(alunos));
    printf("Qt alunos acima da média = %d", numero_alunos_acima_media(alunos));

    return 0;
}
