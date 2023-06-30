/* O programa calcula a média de todos os elementos da matriz e imprime
a média de uma linha */

#include <stdio.h>

float media_linha(float mA[5][5], int linha)
{
    float media_mat, media_lin, soma_ac_total = 0, soma_ac_lin = 0;
    int  num_term = 0;

    //media total
    for (int i = 0; i < 5; i++)  
        for (int j = 0; j < 5; j++) 
            soma_ac_total = soma_ac_total + mA[i][j];

    media_mat = soma_ac_total / 25.0;

    //media linha
    for (int j = 0; j < 5; j++)
        if (mA[linha][j] > media_mat) {
            soma_ac_lin = soma_ac_lin + mA[linha][j];
            num_term++;
        }  

    media_lin = soma_ac_lin / num_term;
    return media_lin;
}

int main()
{
    int linha;
    float mA[5][5] = {0.0, 2.0, 1.0, 2.0, 5.0,
                      1.0, 2.0, 3.0, 4.0, 5.0,
                      1.0, 1.0, 4.0, 4.0, 5.0,
                      1.0, 2.0, 3.0, 4.0, 5.0,
                      5.0, 5.0, 5.0, 5.0, 5.0,};
    float media;

    // teste 
    media = media_linha(mA, 1);
    printf("A média é: %2.f\n", media);

    return 0;
}
