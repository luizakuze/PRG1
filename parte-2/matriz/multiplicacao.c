/* O programa lê duas matrizes (matA e matB) e as multiplica, colocando o resultado em uma matriz matC.
Assumindo dimensões de matA e matB de 2x3*/

int main()
{
    int matA[2][3] = {1, 2, 3,
                      1, 2, 3},

        matB[2][3] = {1, 2, 3,
                      1, 2, 3},

        matC[2][3];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            matC[i][j] = matA[i][j] * matB[i][j];
            printf("matC[%d][%d] => %d\n", i, j, matC[i][j]);
        }

    return 0;
}
