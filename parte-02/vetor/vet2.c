/* O programa lê 5 números inteiros para um vetor de inteiros (VET1) e
computa um segundo vetor (VET2) que é o resultado da multiplicação do
primeiro vetor por um escalar inteiro 5. 
Em seguida, o programa calcula a média desses vetores. */

#include <stdio.h>

int main()
{
    int vet1[5],vet2[5], i, soma = 0;
    float media;

    // multiplicar valor lido por 5 e colocar no vet2.
    for(i=0;i<5;i++) {
        printf("Entre com vet[%d] => ",i);
        scanf("%d",&vet1[i]);
        vet2[i]=vet1[i]*5;
        soma = soma + vet2[i];
    }

    // calculo media
    media = soma / 5.0;

    // imprimir o conteúdo
    for(i=0;i<5;i++)
        printf("vet2[%d] => %d\n",i,vet2[i]);
    
    printf("A média é: %.2f\n", media);
    return 0;
}
