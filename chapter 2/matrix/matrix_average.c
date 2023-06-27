/* O programa calcula a média de 2 matrizes*/

#include <stdio.h>

#define max_lin 2
#define max_col 3

int main()
{
    int soma_ac = 0, num_term = 0;
    float media = 0;

    int mA[max_lin][max_col] = {11, 12, 13, 21, 22, 23},
        mB[max_lin][max_col] = {1, 2, 3, 1, 2, 3};

    //calculo
    for (int i = 0; i < max_lin; i++)
        for (int j = 0; j < max_col; j++) {
            soma_ac = soma_ac + mA[i][j] + mB[i][j];
            num_term++;
        }

    media = (float) soma_ac / num_term;
    printf("A média é: %.2f\n", media);
    return 0;
}
