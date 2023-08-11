/* O exercício 3 é uma outra versão do "exercicio2.c".

O programa tem um menu de opções do seguinte formato:
(1) Para desenhar uma linha com largura e preenchimento configurável
(2) Para desenhar um retângulo cheio configurável
(3) Para desenhar uma triângulo
(4) Encerrar o programa

Deve ser feito uma função para as opções 1, 2, 3 do programa. Além de utilizar o
comando switch para fazer o menu.
*/

#include <stdio.h>

void linha (int largura, char caracter)
{ 
    for (int i = 0; i < largura; i++)
            printf("%c", caracter);

}

void retangulo (int altura, int largura, char caracter)
{
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++)
            printf("%c", caracter);

        printf("\n");
    }
}

void triangulo (int altura, char caracter)
{
    for (int i = 0; i< altura; i++) {
        for (int j = i; j < altura; j++) 
            printf("%c", caracter);

        printf("\n");
    }
}

int main()
{
    int opcao, altura, largura;
    char caracter;

    printf("Entre com:\n");
    printf("(1) Para desenhar uma linha com largura e preenchimento configurável\n");
    printf("(2) Para desenhar um retângulo cheio configurável\n");
    printf("(3) Para desenhar uma triângulo\n");
    printf("(4) Encerrar o programa\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1: 
            printf("Entre com a largura e o caracter:\n");
            scanf("%d %c", &largura, &caracter);
            linha(largura, caracter);
            break;

        case 2:
            printf("Entre com a altura, largura e caracter de preenchimento:\n");
            scanf("%d %d %c", &altura, &largura, &caracter);
            retangulo(altura, largura, caracter);
            break;

        case 3:
            printf("Entre com a altura e o caracter:\n");
            scanf("%d %c", &altura, &caracter);
            triangulo(altura, caracter);
            break;

        case 4:
            break;
    }

    return 0;
}
