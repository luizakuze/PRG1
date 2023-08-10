/* O programa é um teste para passar uma string 
para um campo de uma estutura. */

#include <stdio.h>
#include <string.h>

int main()
{

    typedef struct {
        int num_acessos;
        char userID[20];
        char senha[20];
    } usuario;

    usuario tabela_usuarios[10];

    // passsar string para campo da estrutura
    strcpy(tabela_usuarios[2].userID, "Luiza");

    return 0;
}
