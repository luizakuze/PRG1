/* O vetor de ponteiros permite guardar a posição de memória de outras variáveis
dentro de um vetor. */

#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;

    // Um vetor de ponteiros 
    int *ptr_vet[3];

    // Atribui os ponteiros para as variáveis
    ptr_vet[0] = &a;
    ptr_vet[1] = &b;
    ptr_vet[2] = &c;

    // Acessa os valores através dos ponteiros
    for (int i = 0; i < 3; i++) {
        printf("Valor: %d\n", *ptr_vet[i]); // Atenção: Usar '*'
    }

    return 0;
}
