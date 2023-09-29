#include <iostream>

// minha revisão de struct

typedef struct{
    int lado_a;
    int lado_b;
} quadrado;

struct triangulo{
    int lado_a;
    int lado_b;
    int lado_c;
};

void imprime_quadrado(quadrado Q) {
    printf("====quadrado====\n");
    printf("Lado a = %d\n", Q.lado_a);
    printf("Lado b = %d\n", Q.lado_b);
}

void imprime_triangulo(triangulo T) {
    printf("====triangulo====\n");
    printf("Lado a = %d\n", T.lado_a);
    printf("Lado b = %d\n", T.lado_b);
    printf("Lado c = %d\n", T.lado_c);
}

int main() {
    // com o typedef
    quadrado Q;
    Q.lado_a = 10;
    Q.lado_b = 50;

    quadrado Q2{20, 30};

    // com a outra forma
    struct triangulo T;
    T.lado_a = 10;
    T.lado_b = 20;
    T.lado_c = 30;

    triangulo T2{1, 2, 3};

    imprime_quadrado(Q);
    imprime_quadrado(Q2);
    imprime_triangulo(T);
    imprime_triangulo(T2);

    return 0;
}
