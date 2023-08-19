/* Objetivo: Implementar um programa em C para ler 10
 *  números reais (float) para um vetor. Usar o comando while. */

#include <stdio.h>

int main() {
    float vet[10];

    int i = 0;
    while (i < 10) {
        printf("Entre com o valor de vet[%d] = ", i);
        scanf("%f", &vet[i]);
        i++;
    }

    int j = 0;
    while (j < 10) {
        printf("vet[%d] = %2.f\n", j, vet[j]);
        j++;
    }
    return 0;
}
