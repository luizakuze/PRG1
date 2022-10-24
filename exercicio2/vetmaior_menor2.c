/* O programa calcula a média do maior e do menor número
de um vetor de inteiros a ser fornecido pelo teclado.
Assumindo o tamanho 10 do vetor.
Utilizar funções para resolver o problema.

OBS: A entrada de dados é separada do processamento de dados.*/


#include <stdio.h>

// maior, menor e média
float media_maior_menor(int aux[10])
{
    int maior, menor, i;
    float media;

    menor = maior = aux[0];

    for (i = 1; i < 10; i++) {
        if (aux[i] > maior)
            maior = aux[i];
        else if (aux[i] < menor)
            menor = aux[i];
    }

    media = (maior + menor) / 2.0;
    return media;
}

/* o "*" na frente do parâmetro significa que está sendo enviado o ENDEREÇO da variável que vai ser utilizada*/

float media_maior_menor2(int aux[10], int *maior, int *menor)
{
    int i;
    float media;

    *menor = *maior = aux[0];

    for (i = 1; i < 10; i++) {
        if (aux[i] > *maior)
            *maior = aux[i];
        else if (aux[i] < *menor)
            *menor = aux[i];
    }

    media = (*maior + *menor) / 2.0;
    return media;
}

// dados
void ler_dados(int aux[10])
{

    int i;

    for (i = 0; i < 10; i++) {
        printf("Entre com dados na posição %d\n", i);
        scanf("%d", &aux[i]);
    }
}

int main()
{
    int x[10], y[10], major, minor;
    float media;

    printf("Início da entrada de dados para o vetor x\n");
    ler_dados(x);
    media = media_maior_menor(x);
    printf("Media %.2f\n",media);

    printf("Início da entrada de dados para o vetor y\n");
    ler_dados(y);
    
    /* utilizar o "&" na frente do parâmetro que será enviado para a função, 
    tem o intuito de passar o ENDEREÇO da variável e não copiar o seu conteúdo.
    Aqui, a variável da main assumirá o mesmo valor que o parâmetro da função com o
    "*" receber durante a execução do programa. */
    
    media = media_maior_menor2(y, &major, &minor);
    printf("Media %.2f\n",media);

    return 0;
}
