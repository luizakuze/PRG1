#include <stdio.h>

void modificarValor(int *valor) { // aqui tem que ter o * (ponteiro) se quiser alterar 
    *valor = 42;  
}

int main() {
    int minhaVariavel = 10;

    printf("Valor antes da modificação: %d\n", minhaVariavel);

    // aqui envia como referência p poder fazer a alteração
    modificarValor(&minhaVariavel);

    printf("Valor após a modificação: %d\n", minhaVariavel);

    return 0;
}
