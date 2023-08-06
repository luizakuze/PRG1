#include <stdio.h>
#include <string.h>

/*
 * funções da biblioteca:
 * strcpy
 * strcmp
 * strcat
 * strlen
 */

void strings (char nome[]) {

    char palavra[] = "Laranja";

    // strcmp
    printf("%d\n", strcmp (nome, palavra));
    printf("%d\n", strcmp (palavra, palavra));
    printf("%d\n", strcmp (palavra, nome));

    // strcpy
    //palavra[] = "Banana"; Não pode!!
    strcpy(palavra, "Banana");
    printf("%s\n", palavra);


    // strcat
    strcat(palavra, nome);
    printf("%s\n", palavra);
    printf("%s\n", nome);

    // strlen
    printf("Tamanho 'nome': %d\n", strlen(nome));
}

int conta_vogais (char palavra[]) {

    int i = 0, cont = 0;

    // \0 é o final de uma string perfeita
    // algumas funções da biblioteca dependem do caracter nulo!
    while (palavra[i] != '\0') {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ) {
            cont++;
        }
        i++;
    }

    return cont;
}

int idade_negativa (int idade) {
    int idade_nova = idade;

    idade_nova -= idade * 2;

    return idade_nova;
}

// Recebendo string como parâmetro
void imprime (char nome[], int idade) {
    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
}

// Recebendo parâmetro por referência
void altera_idade (int *idade) {
    (*idade)++;
}

// matriz precisa que informe as colunas!
void mostra_matriz (float matriz[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = %.2f\n", i, j, matriz[i][j]);
        }
    }
}

int main() {

    char nome[10] = "Luiza";
    int idade = 18;
    // coluna é em pé e linhas deitadas
    // matriz duas colunas e três linhas
    float matriz[3][2] = { 1.0, 2.0,
                           3.0, 4.0,
                           5.0, 6.0 };

    strings(nome);

    mostra_matriz(matriz);


    printf("Entre com o nome da pessoa:");
    // não precisa do & porque o array já tem um ponteiro que aponta
    // para a primeira posição de memória do array
    scanf("%s", &nome);

    printf("Entre com a idade da pessoa:");
    scanf("%d", &idade);

    imprime(nome, idade);
    altera_idade(&idade);
    imprime(nome, idade);
    int nova_idade = idade_negativa(idade);
    printf("\n%d", nova_idade);
    int vogais = conta_vogais(nome);
    printf("\n%d", vogais);

    return 0;
}
