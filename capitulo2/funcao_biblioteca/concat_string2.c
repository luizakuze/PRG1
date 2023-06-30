/* O programa aplica a função de concatenação de 2 strings sem utilizar a função "strcpy", 
utilizando a "strlen" e "strcpy" */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[10] = "ifsc", y[10] = "-sj";

    strcpy(&x[strlen(x)], y);

    printf("%s\n", x); 

    return 0;
}
