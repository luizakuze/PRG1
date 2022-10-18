/* O programa lê 5 números inteiros para um vetor de inteiros (VET1) e
computa um segundo vetor (VET2) que é o resultado da multiplicação do
primeiro vetor por um escalar inteiro 5. 
Em seguida, o programa imprime a média desses vetores e quantos vetores
estão acima dessa média. */

#include <stdio.h>

int main()
{
    int vet1[5], vet2[5], i, soma = 0, acima = 0;
    float media;

    // multiplicar valor lido por 5 e colocar no vet2.
    for (i = 0; i < 5; i++) {
        printf("Entre com vet[%d] => ", i);
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i] * 5;
        soma = soma + vet2[i];
    }

    // calculo media
    media = soma / 5.0;

    // acima da média
    for (i = 0; i < 5; i++) {
        printf("vet2[%d] => %d\n", i, vet2[i]);
        if (vet2[i] > media)
            acima++;
    }
    printf("A média é: %.2f\n", media);
    printf("A quantiade de números acima da média é: %d\n", acima);
    return 0;
}
