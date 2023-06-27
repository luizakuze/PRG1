/* O exercício 3 é uma outra versão do "exercicio1.c".

Em que foi pedido um programa que calcula uma função C 
para caclular o valor de uma função, dada por:
f(x)= {5x² + 3 , x > 10}
      {-3x² - 1, x <= 10}
      
Uma outra função C, essa para o cálculo de f(x) dado um intervalo.

É requisito 2 testes de cada função. Além do teste que foi
dado pelo professor no esqueleto do programa. */

#include <stdio.h>
#include <math.h>

int valor_fx(int x)
{
    float fx;

    if (x > 10) 
        fx = 5 * pow(x, 2) + 3;
    else 
        fx = -3 * pow (x, 2) - 1;
    
    return fx;
}

float media_fx(int xinf, int xsup)
{
    float media, soma_ac = 0;
    int num_term = 0;

    // teste de consistência
    if (xinf > xsup) {
        int aux = xinf;
        xinf = xsup;
        xsup = aux;
    }

    // media fx
    for (int i = xinf; i < xsup; i++) {
        soma_ac = valor_fx(i);
        num_term++;
    }

    media = (float) soma_ac / num_term;

    return media;
}

int main()
{
    // testes para função valor_fx
    printf("valor de f(x) para x igual a a 4 é %d\n", valor_fx(4));
    printf("valor de f(x) para x igual a a 12 é %d\n", valor_fx(12));

    // testes para média_fx
    printf("Média para o intervalo entre 5 e 8 é %.2f\n", media_fx(5, 8));
    printf("Média para o intervalo entre 8 e 5 é %.2f\n", media_fx(8, 5));

    // exemplo
    printf("valor de f(x) para x igual a a 2 é %d\n", valor_fx(2));

    return 0; 
} 
