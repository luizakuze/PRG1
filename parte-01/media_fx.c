/* COnsidere a função:
f(x) = 2x²+3x+1
Suponha que o domínio é definido somente para inteiros.
O programa calcula a média dos valores de f(x) para x entre 1 - 1000 */

#include <stdio.h>

int main()
{
	int x, funcao, soma_fx;
	float media;

	printf("Entre com o valor de x: \n");
	scanf("%d", &x);

	soma_fx = 0;
	for ( x = 1; x < 1001; x++ ) {
		funcao = 2 * x * x + 3 * x + 1; 
		soma_fx = soma_fx + funcao;
	}

	media = soma_fx / 1000.0;

	printf("A média é %.3f\n", media);
	return 0;
}
