#include <stdio.h>

/*
// forma não tão eficiente
void inverte (int vet[]) {

    int aux[10];

    for (int i = 0; i < 10; i++) {
        aux[i] = vet[i];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 9; j >= 0; j--) {
            vet[i] = aux[j];
            i++;
        }
    }
}
*/

// função para inverter a ordem do vetor
void inverte (int vet[]) {
    int aux[10];
    for (int i = 0; i < 10; i++) {
            aux[i] = vet[9-i];
    }

    for (int i = 0; i < 10; i++) {
        vet[i] = aux[i];
    }
}

// função para imprimir o vetor
void imprime (int vet[]) {
    for (int i = 0; i < 10; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }
}

int main() {
    int vet[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("Antes da inversão:\n");
    imprime(vet);

    printf("\nApós inversão:\n");
    inverte(vet);
    imprime(vet);

    return 0;
}
