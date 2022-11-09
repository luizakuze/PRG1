/* O programa tem uma função C que recebe dois vetores de inteiros de mesma dimensão, sendo a
dimensão informada como parâmetro conforme indicado no esqueleto do programa.
A função deve retornar 0 se a média dos vetores for igual, -1 se a média do primeiro vetor for maior que a
do segundo, e 1 se a média do primeiro vetor for menor que a do segundo.
ESTA função deve usar uma função a ser implementada que calcula a média de um vetor de dimensão qualquer.
A implementação deve prever portanto:
• A função compara_vetores();
• A função media_vetor();
• Dois exemplos adicionais mostrando os retornos 0 e -1. */


#include <stdio.h>

float media_vetor(int x[], int tam)
{
    int soma_ac = 0, media;

    for (int i = 0; i < tam; i++)
        soma_ac = soma_ac + x[i];

    media = (float) soma_ac / tam;

    return media;
}

int compara_vetores(int x[], int y[], int tamanho)
{
    int med_x, med_y;

    med_x = media_vetor(x, tamanho);
    med_y = media_vetor(y, tamanho);

    if (med_x == med_y)
        return 0;
    else if (med_x < med_y)
        return 1;
    else
        return -1;
}

int main()
{
    int y[3] = {1, 5, 7}, w[3] = {5, 9, 1};
    printf("Retorno %d\n", compara_vetores(y, w, 3));

    /*//teste média igual
    int k[3] = {1, 5, 7}, z[3] = {1, 5, 7};
    printf("Retorno %d\n", compara_vetores(k, z, 3));

    //teste média vet2 menor
    int v[3] = {5, 9, 1}, c[3] = {1, 5, 7};
    printf("Retorno %d\n", compara_vetores(v, c, 3)); */

    return 0;
}
