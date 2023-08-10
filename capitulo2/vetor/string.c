/* O programa implementa uma função C que recebe como
parâmetro um string. A função deve retornar o número
de vogais da string. Usar o vetor char */

#include <stdio.h>

int conta_vogais (char palavra[])
{
    int num_vog = 0, i = 0;

    // processamento de string para letras MINÚSCULAS
    while (palavra[i] != '\0') { 
        if( palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            num_vog++;
        i++;
    }
    return num_vog;
}

int main() 
{
    char x[10] = "ifsc";
    int vogais;

    vogais = conta_vogais(x);

    printf("O número de vogais da string IFSC é : %d\n", vogais);
    return 0;
}

/* Implementação com o uso do comando FOR:

#include <stdio.h>

int main()
{
    int num_vogal = 0;
    char x[20] = "letras";

    for (int i = 0; x[i] != '\0'; i++) 
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') 
            num_vogal++; 
    
    printf("O número de vogais na string LETRAS é %d.\n", num_vogal);

    return 0;
} */
