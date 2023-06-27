/* O programa calcula a média do maior e do menor número
de um vetor de inteiros a ser fornecido pelo teclado.
Assumindo o tamanho 10 do vetor.
Utilizar funções para resolver o problema.

OBS: A entrada de dados é separada do processamento de dados.*/

#include <stdio.h>

float media_maior_menor(int aux[10])
{
    int maior, menor, i;
    float media;

    menor = maior = aux[0];

    for (i = 1; i < 10; i++) {
        if (aux[i] > maior)
            maior = aux[i];
        else if (aux[i] < menor)
            menor = aux[i];
    }

    media = (maior + menor) / 2.0;
    return media;
}

float media_maior_menor2(int aux[10], int *maior, int *menor)
// usar o * para receber o endereço da variável
{
    int i;
    float media;

    *menor = *maior = aux[0];

    for (i = 1; i < 10; i++) {
        if (aux[i] > *maior)
            *maior = aux[i];
        else if (aux[i] < *menor)
            *menor = aux[i];
    }

    media = (*maior + *menor) / 2.0;
    return media;
}

void ler_dados(int aux[10])
{

    int i;

    for (i = 0; i < 10; i++) {
        printf("Entre com dados na posição %d\n", i);
        scanf("%d", &aux[i]);
    }
}

int main()
{
    int x[10] = {10, 2, 3, 4, 5, 8, 35, 1, 0},
        y[10] = {1, 2, 92, 12, 5, 67, 2, 9, 11};

    int major, minor;
    float media;

    media = media_maior_menor2(y, &major, &minor);
    // usar o & para passar o endereço da variável

    printf("A média é %.2f\n", media);

    return 0;
}
