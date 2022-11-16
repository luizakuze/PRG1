/* O programa lê 2 cadeias e imprime uma mensagem caso elas sejam iguais */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[6], y[6];
    int comparacao;

    printf("Entre com a 1 string:\n");
    scanf("%s", x);
    printf("Entre com a 2 string:\n");
    scanf("%s", y);

    comparacao = strcmp (x, y);
    if (comparacao == 0) 
        printf("As strings são iguais\n");
    else
        printf("Fim do programa\n");
    return 0;
}
