// Aritmética de ponteiros
/*
 * É possível acessar a próxima posição de memória e a anterior de um poteiro
 * Pode ser usado em strings, vetores, ...
 */

#include <stdio.h>

int main() {

    char vet[5] = "lulu";
    char *ptr = vet;

    for (int i = 0; i < 5; i++) {
        printf("Letra[%d]: %c\n", i, *ptr);
        ptr++;
    }

    return 0;
}
