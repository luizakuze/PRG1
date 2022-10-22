/* Implementar um programa C que apresentam um menu conforme abaixo:

Entre com:
(1) Para desenhar um ret^angulo;
(2) Para desenhar um tri^angulo ret^angulo;
(3) Encerrar o programa.

O programa deve então executar as seguintes funcionalidades:

• Apresentar o menu de forma correta e permitir selecionar a opção através de um comando
switch;

• Para opção 1, desenhar um retângulo cheio de forma personalizada onde será solicitado
o tamanho do lado e a altura. Implementar na forma de uma função C para realizar o
desenho;

• Para opção 2 desenhar um triângulo retângulo cheio de forma personalizada, sendo solicitado o número de linhas (altura). Implementar na forma de uma função C para realizar o
desenho.*/

#include <stdio.h>

void ret(int altura, int largura)
{

    for (int i = 0; i < altura; i++) {

        for (int j = 0; j < largura; j++)
            printf("*");

        printf("\n");
    }

    return;
}

void tri(int altura)
{
    for (int i = 0; i < altura; i++) {
        
        for (int j = i; j < altura; j ++)
            printf("*");

        printf("\n");
    }

    return;
}

int main()
{
    int opcao, largura, altura;

    printf("Entre com\n");
    printf("(1) Para desenhar um retângulo\n");
    printf("(2) Para desenhar um triângulo retângulo\n");
    printf("(3) Encerrar o programa.\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // retângulo
            printf("Entre com a largura e a altura da figura: ");
            scanf("%d %d", &largura, &altura);

            ret(altura, largura);
            break;
        case 2: 
            // triângulo retângulo
            printf("Entre a altura da figura: \n");
            scanf("%d", &altura);

            tri(altura);
            break;
        case 3:
            // encerra o programa
            break;
    }
    return 0;
}
