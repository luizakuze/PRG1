// o exercício consistem em somar dois vetores e colocar essa soma em um terceiro vetor
#include <stdio.h>

void imprime_vetor(int num, const float vet[]) {
    for (int j = 0; j < num; j++) {
        printf("vet[%d] = %g\n", j, vet[j]);
    }
    printf("\n");
}

// modificador const para não alterar o vetor dentro da função
void soma_vetores (float num, const float x[], const float y[], float z[]) {
    for (int i = 0; i < num; i++) {
        z[i] = x[i] + y[i];
    }

}

int main(void)
{
    float x[3] = {1.0, 2.0, 3.0};
    float y[3] = {10.0, 20.0, 30.0};
    float z[3];

    soma_vetores(3, x, y, z);

    imprime_vetor(3, x);
    imprime_vetor(3, y);
    imprime_vetor(3, z);

    return 0;
}
