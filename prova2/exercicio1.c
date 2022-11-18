/* O programa é uma função C denominada compara_vetores() que recebe como parâmetros dois
vetores de inteiros de mesma dimensão, sendo a dimensão informada também como parâmetro
conforme indicado no esqueleto do programa.

A função retorna 0 se as quantidades de elementos pares dos vetores forem iguais,
-1 se as quantidades de elementos pares do primeiro vetor for maior que a do segundo,
e 1 se as quantidades de elementos pares do primeiro vetor for menor que a do segundo.

Esta função usa uma função que calcula e retorna a quantidade de elementos pares
de um vetor de dimensão qualquer. A implementação contém portanto:

• A função compara_vetores();
• A função elementos_pares();
• Três exemplos adicionais na função de main(), mostrando os retornos 0, 1 e -1 da função. */


#include <stdio.h>

int elementos_pares(int vet[], int tam)
{
    int num_par = 0;

    for (int i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0)
            num_par++;
    }

    return num_par;
}

int compara_vetores(int x[], int y[], int tamanho)
{
    int par_x, par_y;

    par_x = elementos_pares (x, tamanho);
    par_y = elementos_pares (y, tamanho);

    if (par_x == par_y)
        return 0;
    else if (par_x > par_y) 
        return -1;
    else
        return 1;
}

int main()
{
    int y[3] = {1, 5, 7}, w[3] = {5, 9, 1},
        x[3] = {1, 2, 2}, z[3] = {1, 2, 2}, 
        par, comparacao;

    printf("retorno %d\n", compara_vetores(y,w,3));

    //teste retorno 0
    printf("retorno teste %d\n", compara_vetores(x, z, 3));

    //teste retorno -1
    printf("retorno teste %d\n", compara_vetores(x, w, 3));

    //teste retorno 1
    printf("retorno teste %d\n", compara_vetores(w, x, 3));

    return 0;
}
