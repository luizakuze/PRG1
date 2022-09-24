/* O objetivo do programa é implementar uma função que calcula 
o delta de uma equação do segundo grau e retorna:
>  0 - Se raízes reais e distintas
>  1 - Se raízes complexas
> -1 - Se raízes reais e iguais
Na função principal, há o teste de cada uma das 3 condições */

#include <stdio.h>

int calculo_delta(float a, float b, float c)
{
	float delta;

	delta = b * b - 4 * a * c;
	
	if (delta > 0)
		return 0;
	else if (delta < 0)
		return 1;
	else 
		return -1; 
}

int main()
{
	float a, b, c; 
	int raizes;

	printf("Entre com os coeficientes a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	raizes = calculo_delta(a, b, c);
	printf("%d\n", raizes);

	//teste raízes diferentes
	printf("TESTE 2 delta > 0 = %d\n", raizes = calculo_delta (1, -5, 6));

	//teste raíz complexa
	a = 10;
	b = 29;
	c = 30;
	raizes = calculo_delta (a, b, c);
	printf("TESTE 1 delta < 0 = %d\n", raizes);

	//teste raízes iguais 
	printf("TESTE 3 delta == 0 = %d\n", raizes = calculo_delta (1, 2, 1);
	return 0;
}
