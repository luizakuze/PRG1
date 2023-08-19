// A struct é um novo tipo de dado
// por isso, não tem uma forma de imprimir esses dados prontos e diretos
// é necessário fazer uma função para isso acontecer

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
    pessoa luiza = {"luiza", 18};
    printf_pessoa(luiza);
    
    return 0;
}
