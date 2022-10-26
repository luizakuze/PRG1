/* O programa implementa uma função C que faz o cálculo do produto escalar de 2 vetores (reais)
de dimensão n (tamanho do vetor). A função deve retornar o produto escalar.
Testar na função main() p/ 2 situações */

float produto_escalar(float x[], float y[], int n)
{
    float escalar = 0;

    for (int i = 0; i < n; i++)
        escalar = escalar + x[i] * y [i];

    return escalar;
}

#include <stdio.h>

int main()
{
    float produto;
    float x[5] = {1.7, 2.5, 3.6, 4.9, 5.5},
          y[5] = {2.4, 2.4, 2.2, 2.1, 2.3};

    float z[5] = {1.8, 5.5, 2.6, 1.9, 2.5},
          m[5] = {2.4, 2.3, 2.2, 2.2, 2.3}; 

    // 1 teste
    produto = produto_escalar(x, y, 5);
    printf("O produto escalar entre X e Y é %.2f\n", produto);
    // 2 teste
    produto = produto_escalar(z, m, 5);
    printf("O produto escalar entre Z e M é %.2f\n", produto);

    return 0;
}
