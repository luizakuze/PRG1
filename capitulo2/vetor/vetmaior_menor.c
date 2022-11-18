/* O programa calcula a média do maior e do menor número
de um vetor de inteiros a ser fornecido pelo teclado.
Assumindo o tamanho 10 do vetor.

OBS: A entrada de dados é separada do processamento de dados.*/


#include <stdio.h>

int main()
{
    int i, maior, menor, x[10];
    float media;

    // entrada de dados
    printf("Início da entrada de dados\n");

    for (i = 0; i < 10; i++) {
        printf("Entre com dados na posição %d\n", i);
        scanf("%d", &x[i]);
    }

    // processamento de dados: calculo media maior e menor
    menor = maior = x[0];

    for (i = 1; i < 10; i++) {
        if (x[i] > maior)
            maior = x[i];
        else if (x[i] < menor) //testar com if
            menor = x[i];
    }

    media = (maior + menor) / 2.0;
    printf("Menor %d, Maior %d e Media %.2f", menor, maior, media);
    return 0;
}
