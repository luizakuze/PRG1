/* O programa tem uma struct de um triângulo */

#include <stdio.h>

int main()
{
    struct tipo_triangulo {
        float lado1,
              lado2,
              lado3;
    } trianguloA;

    struct tipo_triangulo triangB; //como criar variáveis struct
  
    printf("Ler lado 1\n");
    scanf("%f", &trianguloA.lado1);
    printf("Ler lado 2\n");
    scanf("%f", &trianguloA.lado2);
    printf("Ler lado 3\n");
    scanf("%f", &trianguloA.lado3);

    return 0;
}
