#include <stdio.h>
#define linhas 2
#define colunas 3
int main() {

    int mat[linhas][colunas] = {1 ,2,3,
                                4, 5,6};
    
    // imprimindo matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }

    
    
    
    return 0;
}
