// O programa inicia um vetor e imprime o valor de uma posição dele escolhida pelo usuário.

#include <stdio.h>

int main()
{
    int escolha, vet[3] = {2, 4, 6};

    printf("Escolha a posição do vetor (0 até 2):\n");
    scanf("%d", &escolha);

    printf("vet[%d] = %d\n", escolha, vet[escolha]);

    return 0;
}
