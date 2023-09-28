#include <stdio.h>
#include <stdbool.h> //biblioteca 

int main() {
    bool meuBooleano = true;  // true é definido em <stdbool.h>

    if (meuBooleano) {
        printf("O booleano é verdadeiro.\n");
    } else {
        printf("O booleano é falso.\n");
    }

    return 0;
}
