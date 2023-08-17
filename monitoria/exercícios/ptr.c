#include <stdio.h>
#include <string.h>

int main() {
    char mesa[20];
    char *ptr = mesa;

    strcpy(mesa,"batom");
    printf("Ponteiro: %s\nMesa: %s\n", ptr, mesa);

    strcpy(ptr, "mesa");
    printf("Ponteiro: %s\nMesa: %s\n", ptr, mesa);

    return 0;
}
