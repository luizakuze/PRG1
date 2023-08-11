// O programa compara 2 strings

#include <stdio.h>
#include <string.h>

int main()
{
    char x[50], y[50];

    printf("Entre com a 1 string:\n");
    scanf("%s", x);
    printf("Entre com a 2 string:\n");
    scanf("%s", y);

    if (strcmp (x, y) == 0) 
        printf("As strings são iguais.\n");
    else
        printf("As strings são diferentes.\n");

    return 0;
}
