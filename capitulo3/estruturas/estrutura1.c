// O programa tem um struct de um usuário de um sistema

#include <stdio.h>

int main()
{
    struct TUsuario // struct TUsuario é o nome do tipo que está sendo criado 
    {
        char userID[20];
        char senha[20];
        int  num_acessos;
    } Usuario; // aqui é definida uma variável do tipo struct TUsuario 

    // acessando os campos da estrutura Usuario 
    scanf("%s", Usuario.userID);
    scanf("%s", Usuario.senha);
    Usuario.num_acessos = 0;

    return 0;
}
