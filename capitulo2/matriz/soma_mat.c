/* O programa calcula a soma da Matriz A e da Matri B
e coloca essa soma dentro de uma Matriz C */

#include <stdio.h>

#define max_lin 2
#define max_col 3

int main()
{
    int mA[max_lin][max_col] = {11, 12, 13, 21, 22, 23},
        mB[max_lin][max_col] = {1, 2, 3, 1, 2, 3},
        mC[max_lin][max_col];

    //calculo
    for (int i = 0; i < max_lin; i++)
        for (int j = 0; j < max_col; j++) 
            mC[i][j] = mA[i][j] + mB[i][j];
            
    return 0;
}
