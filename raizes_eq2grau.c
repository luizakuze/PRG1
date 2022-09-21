// Esse programa calcula as raízes de uma equação do segundo grau.

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta, parte_real, parte_imag, x1, x2;

	printf("Entre com os valores de a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;	

	if (delta > 0) {
		x1 = (-b + sqrtf(delta)) / ( 2 * a );
		x2 = (-b - sqrtf(delta)) / ( 2 * a );
		printf("As raízes da equação são: %f e %f.\n", x1, x2);
	} else if (delta == 0 ) {
		x1 = -b / ( 2 * a );
		printf("Há 2 raízes iguais: %f\n", x1);
	} else {
		parte_real = -b / ( 2 * a );
		parte_imag = sqrtf(-delta) / ( 2 * a );
		printf("2 Raízes Complexas.\n");
		printf("Raíz 1: %.3f + j %.3f\n", parte_real, parte_imag);
		printf("Raíz 2: %.3f - j %.3f\n", parte_real, parte_imag);
	}
	return 0;
}
