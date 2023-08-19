// Como ler um nome e um sobrenome
// O scanf não lê o espaço, então só pega a string até ele
// fgets resolve o problema 
// parâmetros: (string, tamanho(string), onde está lendo)

#include <stdio.h>
int  main ()
{
    char nome[50];

    //scanf("%s", nome);
    printf("%s", nome);

    fgets(nome, sizeof(nome), stdin);
    printf("%s", nome);


    return 0;
}
