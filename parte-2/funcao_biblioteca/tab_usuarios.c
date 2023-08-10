/* O programa tem uma função que recebe como parâmetros:
1 - Uma tabela de nomes
2 - Uma string com um nome qualquer, a função deve retornar -1 se  o nome
não está na tabela e 0(zero) se está na tabela */

#include <stdio.h>
#include <string.h>

int comparacao (char tabela[4][10], char str[])
{
    int i;
    
    for (i=0;i<4;i++) 
        if (strcmp (&tabela[i][0], str) == 0) 
            break; 
    
    if (i == 4)
        return -1;
    else 
        return 0;
}

int main()
{
    char tabela_usuarios[4][10] = {"joao", "maria", "jose", "lara" };
    int ret;

    // teste para retorno = 0
    ret = comparacao (tabela_usuarios, "joao");
    printf("%d\n", ret);

    // teste para retorno = -1
    ret = comparacao (tabela_usuarios, "luiza");
    printf("%d\n", ret);

    return 0;
}
