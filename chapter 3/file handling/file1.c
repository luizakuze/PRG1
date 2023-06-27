/* O programa é o meu primeiro estudo de acesso a arquivos */

#include <stdio.h> //contém as funções fprintf, fscanf, fopen, fclose

typedef struct {
    char nome[21];
    int idade;
} Pessoa;

void printf_cadastro(int n, Pessoa p[]);

int main()
{
    //ponteiro para arquivo
    //FILE também é um struct > estudar armazenamento de arquivos
    FILE *arq1, *arq2;

    Pessoa alunos[10];
    int n_alunos;
    int i;

    //arquivo, modo de operação
    arq1 = fopen("prova3_conteudo/teste.txt", "a");

    //validade do ponteiro
    if (arq1 == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    fprintf(arq1, "Meu nome é Luiza\n");
    fprintf(arq1, "Estamos em %d\n", 2022);

    fclose(arq1);

    arq2 = fopen("prova3_conteudo/cadastro.txt", "r");
    if (arq2 == NULL) {
            printf("Não foi possível abrir o arquivo.\n");
            return 1;
        }

    fscanf(arq2, "%d", &n_alunos);
    printf("A turma tem %d alunos\n", n_alunos);
    for (i = 0; i < n_alunos; i++) {
        fscanf(arq2, "%s", alunos[i].nome);  //string não vai '&'
        fscanf(arq2, "%d", &alunos[i].idade);
    }

    fclose(arq2);

    printf_cadastro(n_alunos, alunos);
    //printf_cadastro(n_alunos, professores);''

    return 0;
}

void printf_cadastro(int n, Pessoa p[]) //*p == p[]
{
    int i;
    for (i = 0; i < n; i++) {
        printf("Nome: %-20s Idade: %4d\n", p[i].nome, p[i].idade); //números indicando quanto vai ocupar de espaço
    }
}
