/* O programa tem uma função que realiza a concatenação de duas strings passadas como parâmetro,
mas copiando/inserindo a segunda string para o ínício da primeira.

A implementação deve prever portanto:
• a concatenação da segunda string no início da primeira;
• o retorno do tamanho total da string concatenada.
• o uso de pelo menos uma função da biblioteca de manipulação de strings do C. */

#include <stdio.h>
#include <string.h>

int concat_str(char str1[], char str2[])
{ 
    int tamanho;

    strcat(str1, str2);
    tamanho = strlen(str1);

    return tamanho;
}

int main()
{
    char x[50]="ifsc", y[50]="-sj";
    int tam;

    tam = concat_str(x, y);

    printf("A string %s tem tamanho %d\n", x, tam);
    return 0;
}
