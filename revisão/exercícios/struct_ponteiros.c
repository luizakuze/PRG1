#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
} pessoa;

void printf_pessoa(pessoa p) {
    printf("Nome = %s\n", p.nome);
    printf("Idade = %d\n", p.idade);

}

int main() {
    pessoa pessoas[3] = {"luiza", 18,
                         "luana", 20,
                         "maria", 20};

    printf_pessoa(pessoas[2]);
    
    // Um ponteiro pode apontar para uma struct
    pessoa *p = &pessoas[2];
    printf_pessoa(*p);
    
    // A setinha é uma abreviação de (*p) Utilizada para acessar campos
    // de uma struct mais facilmente
    printf("Nome = %s\nIdade = %d\n", (*p).nome, (*p).idade);
    printf("Nome = %s\nIdade = %d\n", p->nome, p->idade);
    return 0;
}
