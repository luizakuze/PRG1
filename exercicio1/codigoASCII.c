/* Nesse programa o usuário digita uma tecla e 
imprime o código ASCII da tecla pressionada.*/

#include <stdio.h>

 int main ()
 {
    char Ch;

    printf("Digite uma tecla\n");
    Ch = getchar();
    printf ("O código ASCII da tecla pressionada é %d\n",Ch);
    return (0); 
 }
