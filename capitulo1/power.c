/*O programa é um teste da função POWER da biblioteca math.h.
O programa em si está no diretório da prova 1*/

#include <stdio.h>
#include <math.h>

float media_fx (int a, int b, int c, int d, int lim_inf, int lim_sup)
{
    float media, fx, soma_ac = 0;
    int num_term = 0;

    // testar consistência do programa 
    if (lim_inf > lim_sup) {
        int aux = lim_inf;
        lim_inf = lim_sup;
        lim_sup = aux;
    }

    // média da função
    for (int i = lim_inf; i < lim_sup; i++) {
        fx = a * pow(i, 3) + b * pow(i, 2) + c * i + d;
        soma_ac = soma_ac + fx;
        num_term++;
    }   

    media = (float) soma_ac / num_term;
    return media;
}

int qtdd_acima_media (int a, int b, int c, int d, int lim_inf, int lim_sup)
{
    int qtdd = 0;
    float media, fx;

    media = media_fx(a, b, c, d, lim_inf, lim_sup);

    // testar consistência do programa 
    if (lim_inf > lim_sup) {
        int aux = lim_inf;
        lim_inf = lim_sup;
        lim_sup = aux;
    }

    // números acima da média
    for (int i = lim_inf; i < lim_sup; i++) {
        fx = a * pow(i, 3) + b * pow(i, 2) + c * i + d;
        if (fx > media)
            qtdd++;
    }   

    return qtdd;
}

int main()
{
    int a, b, c, d, lim_inf, lim_sup;

    /* Adicionar os printfs e scanfs */

    return 0;
}
