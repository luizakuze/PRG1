#include <stdio.h>

void inverteMatriz(int matriz[][3], int linhas, int colunas) {
    int aux[linhas][colunas];
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            aux[i][j] = matriz[linhas - i - 1][colunas - j - 1];
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = aux[i][j];
        }
    }
}

void printMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Matriz original:\n");
    printMatriz(matriz, 3, 3);
    
    inverteMatriz(matriz, 3, 3);
    
    printf("\nMatriz invertida:\n");
    printMatriz(matriz, 3, 3);
    
    return 0;
}
