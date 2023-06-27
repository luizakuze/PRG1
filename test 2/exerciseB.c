/* Um programa C que possui uma tabela que identifica usuários de um banco
de dados e o direito de acesso conforme abaixo:

 char TabelaUsuarios[6][10] = { "eraldo", 
                                "rw", 
                                "silvana", 
                                "r", 
                                "lara", 
                                 "w" }; 
  
Observe que as strings das linhas pares possuem o identificador do usuário e, na sequência,
as strings nas linhas ímpares identificam o direito de acesso (leitura (r), escrita(w)).

EStá implementado uma função que opera sobre uma tabela do formato acima e que seja capaz de mudar a string
de direito de acesso para um dado usuário. Utilizando as funções da biblioteca strcmp() e strcpy().

A função deve retornar o índice do usuário cujo direito foi modificado ou -1 se não encontrou o usuário na tabela. */

#include <stdio.h>
#include <string.h>

int mudar_direito_acesso(char tabela[6][10], char usuario[], char direito[])
{
    int i, comp, ret;

    for (i = 0; i < 6; i=i+2) {
        comp = strcmp(&tabela[i][0], usuario);
        if (comp == 0)
            break;
    }

    // não encontrar usuário
    if (i == 6)
        ret = -1;
    // caso encontrar
    else
        strcpy (&tabela[i+1][0], direito);
        ret = i;

    return ret;
}

int main()
{
    int ret;
    char TabelaUsuarios[6][10] = {"eraldo", "rw", "silvana", "r", "lara", "w"};

    ret = mudar_direito_acesso(TabelaUsuarios, "lara", "r"); 
    printf("retorno é %d\n", ret);

    return 0;
} 
