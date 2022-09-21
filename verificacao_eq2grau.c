/*O programa verifica se existem 2 raízes reais, 2 raízes distintas opu não há raízes reais,
dado os coeficientes de uma equação do 2grau*/

#include <stdio.h>

int main()
{
	float a, b, c, delta;

	printf("Entre com os valores de a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;	

	if (delta > 0) {
		printf("A equação possui 2 raízes reais e distintas\n");
	} else if (delta == 0 ) {
		printf("A equação possui 2 raízes reais e iguais\n");
	} else {
		printf("A equação não possui raízes reais\n");
	}
	return 0;
}
