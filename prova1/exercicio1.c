/* Considere a função abaixo com domínio (valores de x) definidos para o conjunto dos inteiros:
  F(x) = ax3 + bx2 + cx + d
        
Implemente um programa C com:

• Uma função C que retorna a média dos valores da função, calculados para uma faixa
[xinf, xsup] de valores. Os coeficientes inteiros a, b, c e d e os valores da faixa serão
passados como parâmetros. A função deve inverter os valores da faixa caso xinf seja
maior que xsup;

• Uma função C que se utiliza da função C acima e que retorna a quantidade de valores
da função que ficaram acima da média. Esta função também recebe como parâmetros os
coeficientes da função e os valores da faixa;

• Um teste separado das funções acima para valores de a = 2, b = 7, c = 1 e d = −1 e faixas:
[10, 100] e [100, 10]. */


#include <stdio.h>

float calculo_media (int a, int b, int c, int d, int xinf, int xsup)
{
    int qtdd = 0, x;
    float fx, media, soma = 0;

    // inverter limites caso necessário 
    if (xinf > xsup) {
        int aux;
        aux = xsup;
        xsup = xinf;
        xinf = aux;
    }

    // media 
    for (x = xinf; x <= xsup; x++) {
        qtdd++;
        fx = a * x * x * x + b * x * x + c * c + d;
        soma = soma + fx;
    }

    media = (float) soma / qtdd;
    return media;
}

int acima_media (a, b, c, d, xinf, xsup)
{
    int acima_m = 0, x;
    float fx, media;

    media = calculo_media(a, b, c, d, xinf, xsup);

    // inverter limites caso necessário
    if (xinf > xsup) {
        int aux;
        aux = xsup;
        xsup = xinf;
        xinf = aux;
    }

    // num acima da média
    for (x = xinf; x <= xsup; x++) {
        fx = a * x * x * x + b * x * x + c * c + d;
        if (fx > media)
            acima_m++;
    }
    return acima_m;
}

int main()
{
    int a, b, c, d, xinf, xsup, acima;
    float media;

    // parte do usuário
    printf("Entre com os valores dos coeficientes:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Entre com o limite inferior e o limite superior:\n");
    scanf("%d %d", &xinf, &xsup); 

    media = calculo_media(a, b, c, d, xinf, xsup);
    acima = acima_media(a, b, c, d, xinf, xsup);
    printf("A MÉDIA do intervalo é %.3f e a quantidade de números ACIMA DA MÉDIA é %d\n\n", media, acima);

    // teste da função calculo_media
    media = calculo_media(2, 7, 1, -1, 10, 100);
    printf("Teste MÉDIA intervalo [10,100]: %.3f\n", media);
    media = calculo_media(2, 7, 1, -1, 100, 10);
    printf("Teste MÉDIA intervalo [100, 10]: %.3f\n\n", media);

    //teste da função acima_media
    acima = acima_media(2, 7, 1, -1, 10, 100);
    printf("teste ACIMA MÉDIA intervalo [10, 100]: %d\n", acima);
    acima = acima_media(2, 7, 1, -1, 100, 10);
    printf("teste ACIMA MÉDIA intervalo [100, 10]: %d\n", acima);
    return 0;
}
