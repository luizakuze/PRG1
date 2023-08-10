// O programa pede para o usuário entrar com um vetor de tamanho 5.

#include <stdio.h> 

int main()
{
    int i, vet[5];

    for (i = 0; i < 5; i++) {
        printf("Entre com o valor de vet[%d]\n", i);
        scanf ("%d", &vet[i]);
    }

    printf("vet: {%d %d %d %d %d}\n", vet[0], vet[1], vet[2], vet[3], vet[4]);

    return 0;
}
