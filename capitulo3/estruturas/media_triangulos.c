/* O programa calcula a soma das áreas e a média 
de dois retângulos, usando struct*/


#include <stdio.h>

int main()
{
    float soma_ac = 0, media;   
    struct tipo_retangulo {
        float lado1,
              lado2;
    };

    struct tipo_retangulo retA, retB;

    //entrada de dados ret A
    printf("Ler lado 1 - retA\n");
    scanf("%f", &retA.lado1);
    printf("Ler lado 2 - retA\n");
    scanf("%f", &retA.lado2);

    //entrada de dados ret B
    printf("Ler lado 1 - retB\n");
    scanf("%f", &retB.lado1);
    printf("Ler lado 2 - retB\n");
    scanf("%f", &retB.lado2);

    //calcula as área e média
    soma_ac = retA.lado1 * retA.lado2 + retB.lado1 * retB.lado2;
    media = soma_ac / 2.0;

    printf("A soma das áreas dos retângulos é %f", soma_ac);
    printf("A média das áreas dos retângulos é %f", media);

    return 0;
}
