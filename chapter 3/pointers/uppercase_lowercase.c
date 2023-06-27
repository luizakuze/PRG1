#include <stdio.h>
#include <string.h>

void capitaliza (char *c1)
{    
    int tam;

    tam = strlen(c1);

    for (int i = 0; i < tam; i++)
        c1[i] = c1[i] -32;
}

int main(void)
{
    char alfa = 'a';

    printf("%c\n", alfa);
    capitaliza (&alfa);
    printf("%c\n", alfa);

    return 0;
}
