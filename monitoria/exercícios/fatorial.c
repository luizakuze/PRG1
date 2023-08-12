// calculando o fatorial de um número
#include <stdio.h>

int fatorial(int num) {
    int fat = 1;

    if (num == 0) return 0;

    for (int i = num; i > 0; i--) {
        fat *= i;
    }

    return fat;
}

int main() {
    int num;

    printf("Entre com um número inteiro não negativo: ");
    scanf("%d", &num);

    int f = fatorial(num);
    printf("%d", f);

    return 0;
}
